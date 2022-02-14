
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t3cdev {int dummy; } ;
struct cxgbi_device {int flags; int nports; int skb_rx_extra; int * ports; TYPE_2__** hbas; int * itp; int dev_ddp_cleanup; int skb_tx_rsvd; int rx_credit_thres; int rcv_win; int snd_win; int nmtus; int mtus; int pdev; struct t3cdev* lldev; } ;
struct cpl_iscsi_hdr_norss {int dummy; } ;
struct TYPE_3__ {int nports; int mtus; } ;
struct adapter {TYPE_1__ params; int * port; int pdev; } ;
struct TYPE_4__ {int ipv4addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cxgbi_device*) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct cxgbi_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct cxgbi_device* FUNC_3 (struct t3cdev*) ;
 struct cxgbi_device* FUNC_4 (int ,int) ;
 int FUNC_5 (struct cxgbi_device*) ;
 int FUNC_6 (struct cxgbi_device*,int ,int ,int *,int ) ;
 int FUNC_7 (char*,struct cxgbi_device*,...) ;
 int FUNC_8 (char*,struct t3cdev*) ;
 int VAR_12 ;
 struct adapter* FUNC_9 (struct t3cdev*) ;

__attribute__((used)) static void FUNC_10(struct t3cdev *VAR_13)
{
 struct cxgbi_device *VAR_14 = FUNC_3(VAR_13);
 struct adapter *VAR_15 = FUNC_9(VAR_13);
 int VAR_16, VAR_17;

 if (VAR_14) {
  FUNC_7("0x%p, updating.\n", VAR_14);
  return;
 }

 VAR_14 = FUNC_4(0, VAR_15->params.nports);
 if (!VAR_14) {
  FUNC_8("device 0x%p register failed.\n", VAR_13);
  return;
 }

 VAR_14->flags = VAR_2 | VAR_3;
 VAR_14->lldev = VAR_13;
 VAR_14->pdev = VAR_15->pdev;
 VAR_14->ports = VAR_15->port;
 VAR_14->nports = VAR_15->params.nports;
 VAR_14->mtus = VAR_15->params.mtus;
 VAR_14->nmtus = VAR_5;
 VAR_14->snd_win = VAR_10;
 VAR_14->rcv_win = VAR_8;
 VAR_14->rx_credit_thres = VAR_9;
 VAR_14->skb_tx_rsvd = VAR_1;
 VAR_14->skb_rx_extra = sizeof(struct cpl_iscsi_hdr_norss);
 VAR_14->dev_ddp_cleanup = VAR_12;
 VAR_14->itp = &VAR_7;

 VAR_17 = FUNC_0(VAR_14);
 if (VAR_17) {
  FUNC_7("0x%p ddp init failed\n", VAR_14);
  goto err_out;
 }

 VAR_17 = FUNC_2(VAR_14);
 if (VAR_17) {
  FUNC_7("0x%p offload init failed\n", VAR_14);
  goto err_out;
 }

 VAR_17 = FUNC_6(VAR_14, VAR_0, VAR_4,
    &VAR_6, VAR_11);
 if (VAR_17)
  goto err_out;

 for (VAR_16 = 0; VAR_16 < VAR_14->nports; VAR_16++)
  VAR_14->hbas[VAR_16]->ipv4addr =
   FUNC_1(VAR_14->ports[VAR_16]);

 FUNC_7("cdev 0x%p, f 0x%x, t3dev 0x%p open, err %d.\n",
  VAR_14, VAR_14 ? VAR_14->flags : 0, VAR_13, VAR_17);
 return;

err_out:
 FUNC_5(VAR_14);
}
