
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sa_family; int * sa_data; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
struct TYPE_4__ {scalar_t__ ssid_len; int ssid; int bssid; } ;
struct lbs_private {scalar_t__ connect_status; scalar_t__ psstate; TYPE_2__ curbssparams; scalar_t__ numSNRNF; scalar_t__ nextSNRNF; int * rawNF; int * rawSNR; int * RSSI; int * NF; int * SNR; scalar_t__ tx_pending_len; int * currenttxskb; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct lbs_private*,int ) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,union iwreq_data*,int *) ;

void FUNC_10(struct lbs_private *VAR_8)
{
 union iwreq_data VAR_9;

 if (VAR_8->connect_status != VAR_3)
  return;

 FUNC_2(VAR_4);

 FUNC_5(VAR_9.ap_addr.sa_data, 0x00, VAR_1);
 VAR_9.ap_addr.sa_family = VAR_0;






 FUNC_6(1000);
 FUNC_9(VAR_8->dev, VAR_7, &VAR_9, ((void*)0));


 FUNC_8(VAR_8->dev);
 FUNC_7(VAR_8->dev);


 FUNC_0(VAR_8->currenttxskb);
 VAR_8->currenttxskb = ((void*)0);
 VAR_8->tx_pending_len = 0;


 FUNC_5(VAR_8->SNR, 0x00, sizeof(VAR_8->SNR));
 FUNC_5(VAR_8->NF, 0x00, sizeof(VAR_8->NF));
 FUNC_5(VAR_8->RSSI, 0x00, sizeof(VAR_8->RSSI));
 FUNC_5(VAR_8->rawSNR, 0x00, sizeof(VAR_8->rawSNR));
 FUNC_5(VAR_8->rawNF, 0x00, sizeof(VAR_8->rawNF));
 VAR_8->nextSNRNF = 0;
 VAR_8->numSNRNF = 0;
 VAR_8->connect_status = VAR_5;




 FUNC_5(&VAR_8->curbssparams.bssid, 0, VAR_1);
 FUNC_5(&VAR_8->curbssparams.ssid, 0, VAR_2);
 VAR_8->curbssparams.ssid_len = 0;

 if (VAR_8->psstate != VAR_6) {

  FUNC_1("disconnected, so exit PS mode\n");
  FUNC_4(VAR_8, 0);
 }
 FUNC_3(VAR_4);
}
