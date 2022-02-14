
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmb_data {scalar_t__ last_update; int size; int hw_block; int last_block; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
struct TYPE_4__ {int (* align ) (int ) ;} ;
struct TYPE_3__ {int cmb_start_time; struct cmb_data* cmb; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ccw_device *VAR_1)
{
 struct cmb_data *VAR_2;

 FUNC_2(VAR_1->ccwlock);
 VAR_2 = VAR_1->private->cmb;
 if (VAR_2) {
  FUNC_1(VAR_2->last_block, 0, VAR_2->size);




  FUNC_1(VAR_0->align(VAR_2->hw_block), 0, VAR_2->size);
  VAR_2->last_update = 0;
 }
 VAR_1->private->cmb_start_time = FUNC_0();
 FUNC_3(VAR_1->ccwlock);
}
