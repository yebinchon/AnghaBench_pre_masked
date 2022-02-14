
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {struct adapter* ml_priv; } ;
struct adapter {int msg_enable; } ;



__attribute__((used)) static void FUNC_0(struct net_device *VAR_0, u32 VAR_1)
{
 struct adapter *VAR_2 = VAR_0->ml_priv;

 VAR_2->msg_enable = VAR_1;
}
