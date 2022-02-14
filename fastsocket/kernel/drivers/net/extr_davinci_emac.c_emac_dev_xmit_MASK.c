
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct device {int dummy; } ;
struct net_device {int trans_start; struct device dev; } ;
struct TYPE_2__ {int tx_dropped; } ;
struct emac_priv {TYPE_1__ net_dev_stats; int ndev; int link; } ;
struct emac_netpktobj {int num_bufs; void* pkt_token; int pkt_length; struct emac_netbufobj* buf_list; } ;
struct emac_netbufobj {scalar_t__ data_ptr; void* buf_token; int length; } ;


 int FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct emac_priv*,struct emac_netpktobj*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 () ;
 struct emac_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct emac_priv*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_5, struct net_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 int VAR_8;
 struct emac_netbufobj VAR_9;
 struct emac_netpktobj VAR_10;
 struct emac_priv *VAR_11 = FUNC_4(VAR_6);


 if (FUNC_7(!VAR_11->link)) {
  if (FUNC_5(VAR_11) && FUNC_3())
   FUNC_1(VAR_7, "DaVinci EMAC: No link to transmit");
  return VAR_2;
 }






 VAR_10.buf_list = &VAR_9;
 VAR_10.num_bufs = 1;
 VAR_10.pkt_length = VAR_5->len;
 VAR_10.pkt_token = (void *)VAR_5;
 VAR_9.length = VAR_5->len;
 VAR_9.buf_token = (void *)VAR_5;
 VAR_9.data_ptr = VAR_5->data;
 FUNC_0((unsigned long)VAR_5->data, VAR_5->len);
 VAR_6->trans_start = VAR_4;
 VAR_8 = FUNC_2(VAR_11, &VAR_10, VAR_0);
 if (FUNC_7(VAR_8 != 0)) {
  if (VAR_8 == VAR_1) {
   if (FUNC_5(VAR_11) && FUNC_3())
    FUNC_1(VAR_7, "DaVinci EMAC: xmit() fatal" " err. Out of TX BD's");

   FUNC_6(VAR_11->ndev);
  }
  VAR_11->net_dev_stats.tx_dropped++;
  return VAR_2;
 }

 return VAR_3;
}
