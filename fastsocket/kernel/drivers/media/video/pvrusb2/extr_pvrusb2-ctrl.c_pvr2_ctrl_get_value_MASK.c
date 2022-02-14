
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pvr2_ctrl {TYPE_2__* hdw; TYPE_1__* info; } ;
struct TYPE_4__ {int big_lock; } ;
struct TYPE_3__ {int (* get_value ) (struct pvr2_ctrl*,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pvr2_ctrl*,int*) ;

int FUNC_3(struct pvr2_ctrl *VAR_1,int *VAR_2)
{
 int VAR_3 = 0;
 if (!VAR_1) return -VAR_0;
 FUNC_1(VAR_1->hdw->big_lock); do {
  VAR_3 = VAR_1->info->get_value(VAR_1,VAR_2);
 } while(0); FUNC_0(VAR_1->hdw->big_lock);
 return VAR_3;
}
