
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {scalar_t__ state; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct scsi_target*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct scsi_target *VAR_2)
{
 int VAR_3;

 if (VAR_2->state != VAR_0)
  return 0;

 VAR_3 = FUNC_1(&VAR_2->dev);
 if (VAR_3) {
  FUNC_0(&VAR_2->dev, "target device_add failed, error %d\n", VAR_3);
  FUNC_2(&VAR_2->dev);
  FUNC_4(VAR_2);
  FUNC_3(&VAR_2->dev);
  return VAR_3;
 }
 FUNC_5(&VAR_2->dev);
 VAR_2->state = VAR_1;

 return 0;
}
