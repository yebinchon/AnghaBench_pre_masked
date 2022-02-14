
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct aic_dev_data* hostdata; } ;
struct aic_dev_data {int list; } ;


 int FUNC_0 (struct aic_dev_data*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct scsi_device *VAR_0)
{
  struct aic_dev_data *VAR_1 = VAR_0->hostdata;

  FUNC_1(&VAR_1->list);
  VAR_0->hostdata = ((void*)0);
  FUNC_0(VAR_1);
  return;
}
