
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int dummy; } ;
struct gendisk {int dummy; } ;


 struct scsi_disk* FUNC_0 (struct gendisk*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static struct scsi_disk *FUNC_3(struct gendisk *VAR_1)
{
 struct scsi_disk *VAR_2;

 FUNC_1(&VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(&VAR_0);
 return VAR_2;
}
