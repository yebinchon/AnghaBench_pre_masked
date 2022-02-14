
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pvr2_ctrl {TYPE_4__* info; } ;
struct TYPE_6__ {int min_value; int max_value; } ;
struct TYPE_5__ {int count; } ;
struct TYPE_7__ {TYPE_2__ type_int; TYPE_1__ type_enum; } ;
struct TYPE_8__ {scalar_t__ type; int (* get_max_value ) (struct pvr2_ctrl*,int*) ;TYPE_3__ def; int (* get_min_value ) (struct pvr2_ctrl*,int*) ;int (* check_value ) (struct pvr2_ctrl*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pvr2_ctrl*,int) ;
 int FUNC_1 (struct pvr2_ctrl*,int*) ;
 int FUNC_2 (struct pvr2_ctrl*,int*) ;

__attribute__((used)) static int FUNC_3(struct pvr2_ctrl *VAR_2,int VAR_3)
{
 if (VAR_2->info->check_value) {
  if (!VAR_2->info->check_value(VAR_2,VAR_3)) return -VAR_0;
 } else if (VAR_2->info->type == VAR_1) {
  if (VAR_3 < 0) return -VAR_0;
  if (VAR_3 >= VAR_2->info->def.type_enum.count) return -VAR_0;
 } else {
  int VAR_4;
  VAR_4 = VAR_2->info->def.type_int.min_value;
  if (VAR_2->info->get_min_value) {
   VAR_2->info->get_min_value(VAR_2,&VAR_4);
  }
  if (VAR_3 < VAR_4) return -VAR_0;
  VAR_4 = VAR_2->info->def.type_int.max_value;
  if (VAR_2->info->get_max_value) {
   VAR_2->info->get_max_value(VAR_2,&VAR_4);
  }
  if (VAR_3 > VAR_4) return -VAR_0;
 }
 return 0;
}
