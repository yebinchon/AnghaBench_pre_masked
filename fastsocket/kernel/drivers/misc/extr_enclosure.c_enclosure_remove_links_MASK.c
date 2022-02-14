
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct enclosure_component {TYPE_2__ cdev; TYPE_1__* dev; } ;
struct TYPE_3__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (struct enclosure_component*,char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(struct enclosure_component *VAR_1)
{
 char VAR_2[VAR_0];

 FUNC_0(VAR_1, VAR_2);
 FUNC_1(&VAR_1->dev->kobj, VAR_2);
 FUNC_1(&VAR_1->cdev.kobj, "device");
}
