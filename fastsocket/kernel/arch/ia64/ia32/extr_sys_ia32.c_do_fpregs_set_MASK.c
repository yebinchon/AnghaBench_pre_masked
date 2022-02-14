
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct unw_frame_info {int sw; } ;
struct TYPE_6__ {int fsr; } ;
struct task_struct {TYPE_3__ thread; } ;
struct TYPE_4__ {int ubuf; int kbuf; } ;
struct TYPE_5__ {TYPE_1__ set; } ;
struct regset_getset {scalar_t__ count; int pos; void* ret; TYPE_2__ u; struct task_struct* target; } ;
struct pt_regs {int dummy; } ;
struct ia32_user_i387_struct {int dummy; } ;
struct _fpreg_ia32 {int dummy; } ;


 int FUNC_0 (int,struct _fpreg_ia32*,struct pt_regs*,int ,int,int) ;
 int FUNC_1 (struct task_struct*,int,int) ;
 struct pt_regs* FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (struct unw_frame_info*) ;
 void* FUNC_4 (int*,scalar_t__*,int *,int *,char*,int,int) ;

__attribute__((used)) static void FUNC_5(struct unw_frame_info *VAR_0, void *VAR_1)
{
 struct regset_getset *VAR_2 = VAR_1;
 struct task_struct *VAR_3 = VAR_2->target;
 struct pt_regs *VAR_4;
 char VAR_5[80];
 int VAR_6, VAR_7, VAR_8;

 if (VAR_2->count == 0 || FUNC_3(VAR_0) < 0)
  return;

 if (VAR_2->pos < 7 * sizeof(int)) {
  VAR_7 = VAR_2->pos;
  VAR_2->ret = FUNC_4(&VAR_2->pos, &VAR_2->count,
    &VAR_2->u.set.kbuf, &VAR_2->u.set.ubuf, VAR_5,
    0, 7 * sizeof(int));
  if (VAR_2->ret)
   return;
  for (; VAR_7 < VAR_2->pos; VAR_7 += sizeof(int))
   FUNC_1(VAR_3, VAR_7, *((int *)(VAR_5 + VAR_7)));
  if (VAR_2->count == 0)
   return;
 }
 if (VAR_2->pos < sizeof(struct ia32_user_i387_struct)) {
  VAR_7 = (VAR_2->pos - 7 * sizeof(int)) /
   sizeof(struct _fpreg_ia32);
  VAR_2->ret = FUNC_4(&VAR_2->pos, &VAR_2->count,
    &VAR_2->u.set.kbuf, &VAR_2->u.set.ubuf,
    VAR_5, 7 * sizeof(int),
    sizeof(struct ia32_user_i387_struct));
  if (VAR_2->ret)
   return;
  VAR_4 = FUNC_2(VAR_3);
  VAR_8 = (VAR_3->thread.fsr >> 11) & 7;
  VAR_6 = (VAR_2->pos - 7 * sizeof(int)) / sizeof(struct _fpreg_ia32);
  for (; VAR_7 < VAR_6; VAR_7++)
   FUNC_0(VAR_7,
    (struct _fpreg_ia32 *)VAR_5 + VAR_7,
    VAR_4, VAR_0->sw, VAR_8, 1);
  if (VAR_2->count == 0)
   return;
 }
}
