
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int dev; struct scsi_device* device; } ;
struct scsi_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct scsi_device*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct scsi_disk *VAR_1)
{
 struct scsi_device *VAR_2 = VAR_1->device;

 FUNC_0(&VAR_0);
 FUNC_2(&VAR_1->dev);
 FUNC_3(VAR_2);
 FUNC_1(&VAR_0);
}
