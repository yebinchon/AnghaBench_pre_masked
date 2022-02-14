
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_ctrl {TYPE_1__* info; } ;
struct TYPE_2__ {int (* sym_to_val ) (struct pvr2_ctrl*,char const*,unsigned int,int*,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_ctrl*,char const*,unsigned int,int*,int*) ;

int FUNC_1(struct pvr2_ctrl *VAR_1,
      const char *VAR_2,unsigned int VAR_3,
      int *VAR_4,int *VAR_5)
{
 if (!VAR_1) return -VAR_0;
 if (!VAR_1->info->sym_to_val) return -VAR_0;
 return VAR_1->info->sym_to_val(VAR_1,VAR_2,VAR_3,VAR_4,VAR_5);
}
