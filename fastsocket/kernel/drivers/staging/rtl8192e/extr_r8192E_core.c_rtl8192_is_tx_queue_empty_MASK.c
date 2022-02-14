
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {TYPE_1__* tx_ring; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

short FUNC_3(struct net_device *VAR_3)
{
 int VAR_4=0;
 struct r8192_priv *VAR_5 = FUNC_0(VAR_3);
 for (VAR_4=0; VAR_4<=VAR_1; VAR_4++)
 {
  if ((VAR_4== VAR_2) || (VAR_4 == VAR_0) )
   continue;
  if (FUNC_2(&(&VAR_5->tx_ring[VAR_4])->queue) > 0){
   FUNC_1("===>tx queue is not empty:%d, %d\n", VAR_4, FUNC_2(&(&VAR_5->tx_ring[VAR_4])->queue));
   return 0;
  }
 }
 return 1;
}
