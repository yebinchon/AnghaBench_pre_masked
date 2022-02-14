
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int sa_family; int * sa_data; } ;
union iwreq_data {TYPE_4__ ap_addr; } ;
typedef int u16 ;
struct TYPE_7__ {int * bssid; int ssid_len; int ssid; } ;
struct lbs_private {int fwrelease; int dev; TYPE_3__ curbssparams; int tx_pending_len; scalar_t__ numSNRNF; scalar_t__ nextSNRNF; int rawNF; int rawSNR; scalar_t__** NF; scalar_t__** SNR; int connect_status; TYPE_1__* in_progress_assoc_req; } ;
struct TYPE_6__ {int size; } ;
struct cmd_ds_802_11_associate_response {TYPE_2__ hdr; int statuscode; } ;
struct bss_descriptor {int * bssid; int ssid_len; int ssid; } ;
struct TYPE_5__ {struct bss_descriptor bss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,void*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,union iwreq_data*,int *) ;

__attribute__((used)) static int FUNC_11(struct lbs_private *VAR_8,
     struct cmd_ds_802_11_associate_response *VAR_9)
{
 int VAR_10 = 0;
 union iwreq_data VAR_11;
 struct bss_descriptor *VAR_12;
 u16 VAR_13;

 FUNC_1(VAR_4);

 if (!VAR_8->in_progress_assoc_req) {
  FUNC_0("ASSOC_RESP: no in-progress assoc request\n");
  VAR_10 = -1;
  goto done;
 }
 VAR_12 = &VAR_8->in_progress_assoc_req->bss;
 VAR_13 = FUNC_5(VAR_9->statuscode);
 if (VAR_8->fwrelease < 0x09000000) {
  switch (VAR_13) {
  case 0x00:
   break;
  case 0x01:
   FUNC_0("ASSOC_RESP: invalid parameters\n");
   break;
  case 0x02:
   FUNC_0("ASSOC_RESP: internal timer "
    "expired while waiting for the AP\n");
   break;
  case 0x03:
   FUNC_0("ASSOC_RESP: association "
    "refused by AP\n");
   break;
  case 0x04:
   FUNC_0("ASSOC_RESP: authentication "
    "refused by AP\n");
   break;
  default:
   FUNC_0("ASSOC_RESP: failure reason 0x%02x "
    " unknown\n", VAR_13);
   break;
  }
 } else {

  FUNC_0("ASSOC_RESP: failure reason 0x%02x\n", VAR_13);
 }

 if (VAR_13) {
  FUNC_4(VAR_8);
  VAR_10 = -1;
  goto done;
 }

 FUNC_2(VAR_4, "ASSOC_RESP",
      (void *) (VAR_9 + sizeof (VAR_9->hdr)),
      FUNC_5(VAR_9->hdr.size) - sizeof (VAR_9->hdr));


 VAR_8->connect_status = VAR_3;


 FUNC_6(&VAR_8->curbssparams.ssid, &VAR_12->ssid, VAR_2);
 VAR_8->curbssparams.ssid_len = VAR_12->ssid_len;
 FUNC_6(VAR_8->curbssparams.bssid, VAR_12->bssid, VAR_1);

 VAR_8->SNR[VAR_7][VAR_6] = 0;
 VAR_8->NF[VAR_7][VAR_6] = 0;

 FUNC_7(VAR_8->rawSNR, 0x00, sizeof(VAR_8->rawSNR));
 FUNC_7(VAR_8->rawNF, 0x00, sizeof(VAR_8->rawNF));
 VAR_8->nextSNRNF = 0;
 VAR_8->numSNRNF = 0;

 FUNC_8(VAR_8->dev);
 if (!VAR_8->tx_pending_len)
  FUNC_9(VAR_8->dev);

 FUNC_6(VAR_11.ap_addr.sa_data, VAR_8->curbssparams.bssid, VAR_1);
 VAR_11.ap_addr.sa_family = VAR_0;
 FUNC_10(VAR_8->dev, VAR_5, &VAR_11, ((void*)0));

done:
 FUNC_3(VAR_4, "ret %d", VAR_10);
 return VAR_10;
}
