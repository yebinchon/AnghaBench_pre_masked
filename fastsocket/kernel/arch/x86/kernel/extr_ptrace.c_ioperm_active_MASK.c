
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_regset {int size; } ;
struct TYPE_2__ {int io_bitmap_max; } ;
struct task_struct {TYPE_1__ thread; } ;



__attribute__((used)) static int FUNC_0(struct task_struct *VAR_0,
    const struct user_regset *VAR_1)
{
 return VAR_0->thread.io_bitmap_max / VAR_1->size;
}
