
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {scalar_t__ bDcut; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

extern void FUNC_3(
 struct net_device *VAR_1,
 bool VAR_2
)
{

 struct r8192_priv *VAR_3 = FUNC_2(VAR_1);



 if(VAR_3->bDcut == VAR_0)
  FUNC_0(VAR_1, VAR_2);
 else
  FUNC_1(VAR_1, VAR_2);

}
