
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct net_device {TYPE_1__ dev; } ;
struct lbs_private {struct net_device* mesh_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct lbs_private *VAR_2)
{
 struct net_device *VAR_3;


 VAR_3 = VAR_2->mesh_dev;
 if (!VAR_3)
  return;

 FUNC_1(VAR_0);
 FUNC_5(VAR_3);
 FUNC_4(VAR_3);
 FUNC_6(&(VAR_3->dev.kobj), &VAR_1);
 FUNC_3(VAR_3);
 FUNC_7(VAR_3);
 VAR_2->mesh_dev = ((void*)0);
 FUNC_0(VAR_3);
 FUNC_2(VAR_0);
}
