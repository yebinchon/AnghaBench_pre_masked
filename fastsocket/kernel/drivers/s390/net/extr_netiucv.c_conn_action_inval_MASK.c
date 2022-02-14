
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct iucv_connection {int userid; struct net_device* netdev; } ;
typedef int fsm_instance ;


 int FUNC_0 (int ,int,char*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(fsm_instance *VAR_1, int VAR_2, void *VAR_3)
{
 struct iucv_connection *VAR_4 = VAR_3;
 struct net_device *VAR_5 = VAR_4->netdev;

 FUNC_0(VAR_0, 2, "%s('%s'): conn_action_inval called\n",
  VAR_5->name, VAR_4->userid);
}
