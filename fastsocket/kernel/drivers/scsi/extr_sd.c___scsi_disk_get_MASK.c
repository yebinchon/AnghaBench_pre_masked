
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int dev; int device; } ;
struct gendisk {scalar_t__ private_data; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 struct scsi_disk* FUNC_2 (struct gendisk*) ;

__attribute__((used)) static struct scsi_disk *FUNC_3(struct gendisk *VAR_0)
{
 struct scsi_disk *VAR_1 = ((void*)0);

 if (VAR_0->private_data) {
  VAR_1 = FUNC_2(VAR_0);
  if (FUNC_1(VAR_1->device) == 0)
   FUNC_0(&VAR_1->dev);
  else
   VAR_1 = ((void*)0);
 }
 return VAR_1;
}
