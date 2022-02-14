
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {TYPE_1__* device; int index; struct gendisk* disk; } ;
struct gendisk {int * private_data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int sdev_gendev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct scsi_disk*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gendisk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct scsi_disk* FUNC_6 (struct device*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_2)
{
 struct scsi_disk *VAR_3 = FUNC_6(VAR_2);
 struct gendisk *VAR_4 = VAR_3->disk;

 FUNC_4(&VAR_1);
 FUNC_0(&VAR_0, VAR_3->index);
 FUNC_5(&VAR_1);

 VAR_4->private_data = ((void*)0);
 FUNC_3(VAR_4);
 FUNC_2(&VAR_3->device->sdev_gendev);

 FUNC_1(VAR_3);
}
