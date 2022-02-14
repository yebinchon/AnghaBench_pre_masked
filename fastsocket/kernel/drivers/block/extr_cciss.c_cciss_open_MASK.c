
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct block_device {int bd_dev; TYPE_5__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_9__ {scalar_t__ heads; int usage_count; int LunID; scalar_t__ busy_configuring; } ;
typedef TYPE_2__ drive_info_struct ;
struct TYPE_10__ {int usage_count; TYPE_1__* pdev; } ;
typedef TYPE_3__ ctlr_info_t ;
struct TYPE_11__ {int disk_name; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_5__*) ;
 TYPE_3__* FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct block_device *VAR_5, fmode_t VAR_6)
{
 ctlr_info_t *VAR_7 = FUNC_4(VAR_5->bd_disk);
 drive_info_struct *VAR_8 = FUNC_3(VAR_5->bd_disk);

 FUNC_2(&VAR_7->pdev->dev, "cciss_open %s\n", VAR_5->bd_disk->disk_name);
 if (VAR_8->busy_configuring)
  return -VAR_2;
 if (VAR_8->heads == 0) {
  if (FUNC_0(VAR_5->bd_dev) != 0) {

   if (FUNC_0(VAR_5->bd_dev) & 0x0f) {
    return -VAR_3;

   } else if (FUNC_5(VAR_8->LunID, VAR_1,
    sizeof(VAR_8->LunID))) {
    return -VAR_3;
   }
  }
  if (!FUNC_1(VAR_0))
   return -VAR_4;
 }
 VAR_8->usage_count++;
 VAR_7->usage_count++;
 return 0;
}
