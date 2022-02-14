
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct file {struct bttv_fh* private_data; } ;
struct bttv_fh {size_t type; TYPE_2__* btv; } ;
struct TYPE_3__ {int nr; } ;
struct TYPE_4__ {TYPE_1__ c; } ;


 int FUNC_0 (struct bttv_fh*) ;
 int FUNC_1 (char*,int ,int ,scalar_t__,scalar_t__) ;
 int * VAR_0 ;
 int FUNC_2 (int ,struct vm_area_struct*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct bttv_fh *VAR_3 = VAR_1->private_data;

 FUNC_1("bttv%d: mmap type=%s 0x%lx+%ld\n",
  VAR_3->btv->c.nr, VAR_0[VAR_3->type],
  VAR_2->vm_start, VAR_2->vm_end - VAR_2->vm_start);
 return FUNC_2(FUNC_0(VAR_3),VAR_2);
}
