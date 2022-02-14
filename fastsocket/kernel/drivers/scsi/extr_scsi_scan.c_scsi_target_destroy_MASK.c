
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int parent; } ;
struct scsi_target {int siblings; struct device dev; } ;
struct Scsi_Host {int host_lock; TYPE_1__* hostt; } ;
struct TYPE_2__ {int (* target_destroy ) (struct scsi_target*) ;} ;


 struct Scsi_Host* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct scsi_target*) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static void FUNC_7(struct scsi_target *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct Scsi_Host *VAR_2 = FUNC_0(VAR_1->parent);
 unsigned long VAR_3;

 FUNC_6(VAR_1);
 FUNC_3(VAR_2->host_lock, VAR_3);
 if (VAR_2->hostt->target_destroy)
  VAR_2->hostt->target_destroy(VAR_0);
 FUNC_1(&VAR_0->siblings);
 FUNC_4(VAR_2->host_lock, VAR_3);
 FUNC_2(VAR_1);
}
