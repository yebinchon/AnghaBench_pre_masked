
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct net_device {char* name; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int *,char*) ;

void FUNC_2(struct net_device *VAR_1,
     struct net_device *VAR_2)
{
 char VAR_3[VAR_0+7];

 FUNC_1(&(VAR_2->dev.kobj), "master");
 FUNC_0(VAR_3, "slave_%s", VAR_2->name);
 FUNC_1(&(VAR_1->dev.kobj), VAR_3);
}
