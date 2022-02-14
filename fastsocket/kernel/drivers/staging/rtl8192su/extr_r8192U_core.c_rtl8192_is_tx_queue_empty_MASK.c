
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int * tx_pending; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int,scalar_t__) ;

short FUNC_3(struct net_device *VAR_3)
{
 int VAR_4=0;
 struct r8192_priv *VAR_5 = FUNC_1(VAR_3);

 for (VAR_4=0; VAR_4<=VAR_1; VAR_4++)
 {
  if ((VAR_4== VAR_2) || (VAR_4 == VAR_0) )
   continue;
  if (FUNC_0(&VAR_5->tx_pending[VAR_4]))
  {
   FUNC_2("===>tx queue is not empty:%d, %d\n", VAR_4, FUNC_0(&VAR_5->tx_pending[VAR_4]));
   return 0;
  }
 }
 return 1;
}
