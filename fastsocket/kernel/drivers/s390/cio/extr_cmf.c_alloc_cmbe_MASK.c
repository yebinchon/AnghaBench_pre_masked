
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmbe {int size; struct cmbe* last_block; struct cmbe* hw_block; } ;
struct cmb_data {int size; struct cmb_data* last_block; struct cmb_data* hw_block; } ;
struct ccw_device {TYPE_1__* private; int ccwlock; } ;
struct TYPE_4__ {int lock; int list; } ;
struct TYPE_3__ {int cmb_list; struct cmbe* cmb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct cmbe*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct ccw_device *VAR_4)
{
 struct cmbe *VAR_5;
 struct cmb_data *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2 (sizeof (*VAR_5) * 2, VAR_2);
 if (!VAR_5)
  return -VAR_1;
 VAR_6 = FUNC_2(sizeof(struct cmb_data), VAR_2);
 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto out_free;
 }
 VAR_6->last_block = FUNC_2(sizeof(struct cmbe), VAR_2);
 if (!VAR_6->last_block) {
  VAR_7 = -VAR_1;
  goto out_free;
 }
 VAR_6->size = sizeof(struct cmbe);
 FUNC_6(VAR_4->ccwlock);
 if (VAR_4->private->cmb) {
  FUNC_8(VAR_4->ccwlock);
  VAR_7 = -VAR_0;
  goto out_free;
 }
 VAR_6->hw_block = VAR_5;
 VAR_4->private->cmb = VAR_6;
 FUNC_8(VAR_4->ccwlock);


 FUNC_5(&VAR_3.lock);
 if (FUNC_4(&VAR_3.list))
  FUNC_0(((void*)0), 1);
 FUNC_3(&VAR_4->private->cmb_list, &VAR_3.list);
 FUNC_7(&VAR_3.lock);

 return 0;
out_free:
 if (VAR_6)
  FUNC_1(VAR_6->last_block);
 FUNC_1(VAR_6);
 FUNC_1(VAR_5);
 return VAR_7;
}
