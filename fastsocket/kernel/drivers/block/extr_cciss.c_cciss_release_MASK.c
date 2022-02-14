
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gendisk {int disk_name; } ;
typedef int fmode_t ;
struct TYPE_7__ {int usage_count; } ;
typedef TYPE_2__ drive_info_struct ;
struct TYPE_8__ {int usage_count; TYPE_1__* pdev; } ;
typedef TYPE_3__ ctlr_info_t ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 TYPE_2__* FUNC_1 (struct gendisk*) ;
 TYPE_3__* FUNC_2 (struct gendisk*) ;

__attribute__((used)) static int FUNC_3(struct gendisk *VAR_0, fmode_t VAR_1)
{
 ctlr_info_t *VAR_2 = FUNC_2(VAR_0);
 drive_info_struct *VAR_3 = FUNC_1(VAR_0);
 FUNC_0(&VAR_2->pdev->dev, "cciss_release %s\n", VAR_0->disk_name);
 VAR_3->usage_count--;
 VAR_2->usage_count--;
 return 0;
}
