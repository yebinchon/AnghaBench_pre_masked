
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_gendev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 struct scsi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, void *VAR_2)
{
 struct scsi_device *VAR_3;

 if (!FUNC_1(VAR_1))
  return 0;

 VAR_3 = FUNC_2(VAR_1);

 FUNC_0(&VAR_3->sdev_gendev,
      &VAR_0);

 return 0;
}
