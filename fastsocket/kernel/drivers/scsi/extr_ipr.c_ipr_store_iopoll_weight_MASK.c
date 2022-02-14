
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {unsigned long iopoll_weight; int nvectors; int hrrq_num; TYPE_2__* hrrq; scalar_t__ sis64; TYPE_1__* pdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int host_lock; scalar_t__ hostdata; } ;
typedef int ssize_t ;
struct TYPE_4__ {int iopoll; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,unsigned long,int ) ;
 struct Scsi_Host* FUNC_3 (struct device*) ;
 int FUNC_4 (int *,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_3(VAR_3);
 struct ipr_ioa_cfg *VAR_8 = (struct ipr_ioa_cfg *)VAR_7->hostdata;
 unsigned long VAR_9;
 unsigned long VAR_10 = 0;
 int VAR_11;

 if (!VAR_8->sis64) {
  FUNC_4(&VAR_8->pdev->dev, "blk-iopoll not supported on this adapter\n");
  return -VAR_0;
 }
 if (FUNC_5(VAR_5, 10, &VAR_9))
  return -VAR_0;

 if (VAR_9 > 256) {
  FUNC_4(&VAR_8->pdev->dev, "Invalid blk-iopoll weight. It must be less than 256\n");
  return -VAR_0;
 }

 if (VAR_9 == VAR_8->iopoll_weight) {
  FUNC_4(&VAR_8->pdev->dev, "Current blk-iopoll weight has the same weight\n");
  return FUNC_8(VAR_5);
 }

 if (VAR_1 && VAR_8->iopoll_weight &&
   VAR_8->sis64 && VAR_8->nvectors > 1) {
  for (VAR_11 = 1; VAR_11 < VAR_8->hrrq_num; VAR_11++)
   FUNC_0(&VAR_8->hrrq[VAR_11].iopoll);
 }

 FUNC_6(VAR_7->host_lock, VAR_10);
 VAR_8->iopoll_weight = VAR_9;
 if (VAR_1 && VAR_8->iopoll_weight &&
   VAR_8->sis64 && VAR_8->nvectors > 1) {
  for (VAR_11 = 1; VAR_11 < VAR_8->hrrq_num; VAR_11++) {
   FUNC_2(&VAR_8->hrrq[VAR_11].iopoll,
     VAR_8->iopoll_weight, VAR_2);
   FUNC_1(&VAR_8->hrrq[VAR_11].iopoll);
  }
 }
 FUNC_7(VAR_7->host_lock, VAR_10);

 return FUNC_8(VAR_5);
}
