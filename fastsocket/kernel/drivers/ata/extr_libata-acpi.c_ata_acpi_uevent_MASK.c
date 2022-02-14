
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct kobject {int dummy; } ;
struct ata_port {TYPE_3__* dev; } ;
struct ata_device {TYPE_2__* sdev; } ;
struct TYPE_6__ {struct kobject kobj; } ;
struct TYPE_4__ {struct kobject kobj; } ;
struct TYPE_5__ {TYPE_1__ sdev_gendev; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobject*,int ,char**) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_1, struct ata_device *VAR_2,
 u32 VAR_3)
{
 struct kobject *VAR_4 = ((void*)0);
 char VAR_5[20];
 char *VAR_6[] = { VAR_5, ((void*)0) };

 if (VAR_2) {
  if (VAR_2->sdev)
   VAR_4 = &VAR_2->sdev->sdev_gendev.kobj;
 } else
  VAR_4 = &VAR_1->dev->kobj;

 if (VAR_4) {
  FUNC_1(VAR_5, 20, "BAY_EVENT=%d", VAR_3);
  FUNC_0(VAR_4, VAR_0, VAR_6);
 }
}
