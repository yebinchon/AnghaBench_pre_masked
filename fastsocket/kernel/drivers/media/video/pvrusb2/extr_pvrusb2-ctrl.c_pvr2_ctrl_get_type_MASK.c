
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_ctrl {TYPE_1__* info; } ;
typedef enum pvr2_ctl_type { ____Placeholder_pvr2_ctl_type } pvr2_ctl_type ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;

enum pvr2_ctl_type FUNC_0(struct pvr2_ctrl *VAR_1)
{
 if (!VAR_1) return VAR_0;
 return VAR_1->info->type;
}
