
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {scalar_t__ ChannelPlan; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,struct r8192_priv*) ;

short FUNC_4(struct net_device * VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_1(VAR_2);
 if(VAR_3->ChannelPlan > VAR_1){
  FUNC_2("rtl8180_init:Error channel plan! Set to default.\n");
  VAR_3->ChannelPlan= 0;
 }
 FUNC_0(VAR_0, "Channel plan is %d\n",VAR_3->ChannelPlan);

 FUNC_3(VAR_3->ChannelPlan, VAR_3);
 return 0;
}
