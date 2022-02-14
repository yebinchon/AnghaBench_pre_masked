
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct scsi_cd {int kref; struct scsi_device* device; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct scsi_device*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct scsi_cd *VAR_2)
{
 struct scsi_device *VAR_3 = VAR_2->device;

 FUNC_1(&VAR_1);
 FUNC_0(&VAR_2->kref, VAR_0);
 FUNC_3(VAR_3);
 FUNC_2(&VAR_1);
}
