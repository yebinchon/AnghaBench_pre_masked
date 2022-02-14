
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipoib_dev_priv {TYPE_1__* ibwc; int recv_cq; } ;
struct TYPE_5__ {scalar_t__ status; int wr_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,TYPE_1__*) ;
 int FUNC_1 (struct net_device*,TYPE_1__*) ;
 int FUNC_2 (struct net_device*,TYPE_1__*) ;
 int FUNC_3 (struct net_device*,TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct ipoib_dev_priv* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct ipoib_dev_priv*) ;

void FUNC_8(struct net_device *VAR_5)
{
 struct ipoib_dev_priv *VAR_6 = FUNC_6(VAR_5);
 int VAR_7, VAR_8;






 FUNC_4();

 do {
  VAR_8 = FUNC_0(VAR_6->recv_cq, VAR_2, VAR_6->ibwc);
  for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {





   if (VAR_6->ibwc[VAR_7].status == VAR_0)
    VAR_6->ibwc[VAR_7].status = VAR_1;

   if (VAR_6->ibwc[VAR_7].wr_id & VAR_4) {
    if (VAR_6->ibwc[VAR_7].wr_id & VAR_3)
     FUNC_1(VAR_5, VAR_6->ibwc + VAR_7);
    else
     FUNC_3(VAR_5, VAR_6->ibwc + VAR_7);
   } else
    FUNC_2(VAR_5, VAR_6->ibwc + VAR_7);
  }
 } while (VAR_8 == VAR_2);

 while (FUNC_7(VAR_6))
  ;

 FUNC_5();
}
