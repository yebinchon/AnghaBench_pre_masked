
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8192_priv {int initialgain_operate_wq; int priv_wq; scalar_t__ up; int InitialGainOperateType; } ;
struct net_device {int dummy; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *,int ) ;

void FUNC_2(struct net_device *VAR_0, u8 VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_2->InitialGainOperateType = VAR_1;

 if(VAR_2->up)
 {
  FUNC_1(VAR_2->priv_wq,&VAR_2->initialgain_operate_wq,0);
 }
}
