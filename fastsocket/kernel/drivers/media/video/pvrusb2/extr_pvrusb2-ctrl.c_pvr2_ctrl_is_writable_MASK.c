
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_ctrl {TYPE_1__* info; } ;
struct TYPE_2__ {int * set_value; } ;



int FUNC_0(struct pvr2_ctrl *VAR_0)
{
 if (!VAR_0) return 0;
 return VAR_0->info->set_value != ((void*)0);
}
