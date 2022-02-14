
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipoib_dev_priv {int dummy; } ;
struct ipoib_cm_rx {TYPE_1__* rx_ring; int qp; } ;
struct ib_sge {int addr; } ;
struct ib_recv_wr {int wr_id; } ;
struct TYPE_2__ {int * skb; int * mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct ib_recv_wr*,struct ib_recv_wr**) ;
 int FUNC_2 (struct ipoib_dev_priv*,int,int *) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,int,int) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3,
     struct ipoib_cm_rx *VAR_4,
     struct ib_recv_wr *VAR_5,
     struct ib_sge *VAR_6, int VAR_7)
{
 struct ipoib_dev_priv *VAR_8 = FUNC_4(VAR_3);
 struct ib_recv_wr *VAR_9;
 int VAR_10, VAR_11;

 VAR_5->wr_id = VAR_7 | VAR_1 | VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10)
  VAR_6[VAR_10].addr = VAR_4->rx_ring[VAR_7].mapping[VAR_10];

 VAR_11 = FUNC_1(VAR_4->qp, VAR_5, &VAR_9);
 if (FUNC_5(VAR_11)) {
  FUNC_3(VAR_8, "post recv failed for buf %d (%d)\n", VAR_7, VAR_11);
  FUNC_2(VAR_8, VAR_0 - 1,
          VAR_4->rx_ring[VAR_7].mapping);
  FUNC_0(VAR_4->rx_ring[VAR_7].skb);
  VAR_4->rx_ring[VAR_7].skb = ((void*)0);
 }

 return VAR_11;
}
