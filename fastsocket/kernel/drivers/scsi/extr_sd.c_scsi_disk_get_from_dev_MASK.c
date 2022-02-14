
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int disk; } ;
struct device {int dummy; } ;


 struct scsi_disk* FUNC_0 (int ) ;
 struct scsi_disk* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static struct scsi_disk *FUNC_4(struct device *VAR_1)
{
 struct scsi_disk *VAR_2;

 FUNC_2(&VAR_0);
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  VAR_2 = FUNC_0(VAR_2->disk);
 FUNC_3(&VAR_0);
 return VAR_2;
}
