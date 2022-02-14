
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int IrpPendingCount; } ;
struct net_device {int dummy; } ;
typedef int RESET_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

RESET_TYPE
FUNC_3(struct net_device *VAR_5)
{
 struct r8192_priv *VAR_6 = FUNC_2(VAR_5);

 bool VAR_7 = VAR_1;




  if(VAR_6->IrpPendingCount > 1)
   VAR_7 = VAR_4;



 if(VAR_7)
 {
  if(FUNC_0(VAR_5))
  {
   FUNC_1(VAR_0, "RxStuck Condition\n");
   return VAR_3;
  }
 }
 return VAR_2;
}
