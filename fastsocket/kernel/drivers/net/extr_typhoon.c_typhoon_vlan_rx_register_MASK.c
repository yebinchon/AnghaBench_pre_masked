
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int dummy; } ;
struct typhoon {int state_lock; struct vlan_group* vlgrp; int name; int offload; } ;
struct net_device {int dummy; } ;
struct cmd_desc {int parm3; int parm2; } ;


 int FUNC_0 (struct cmd_desc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct typhoon* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct typhoon*,int,struct cmd_desc*,int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_2, struct vlan_group *VAR_3)
{
 struct typhoon *VAR_4 = FUNC_1(VAR_2);
 struct cmd_desc VAR_5;
 int VAR_6;

 FUNC_3(&VAR_4->state_lock);
 if(!VAR_4->vlgrp != !VAR_3) {



  if(VAR_3)
   VAR_4->offload |= VAR_1;
  else
   VAR_4->offload &= ~VAR_1;






  FUNC_0(&VAR_5,
     VAR_0);
  VAR_5.parm2 = VAR_4->offload;
  VAR_5.parm3 = VAR_4->offload;
  FUNC_4(&VAR_4->state_lock);
  VAR_6 = FUNC_5(VAR_4, 1, &VAR_5, 0, ((void*)0));
  if(VAR_6 < 0)
   FUNC_2("%s: vlan offload error %d\n", VAR_4->name, -VAR_6);
  FUNC_3(&VAR_4->state_lock);
 }


 VAR_4->vlgrp = VAR_3;
 FUNC_4(&VAR_4->state_lock);
}
