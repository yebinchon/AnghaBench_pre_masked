
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct unw_frame_info {int sw; } ;
struct TYPE_4__ {int fsr; } ;
struct task_struct {TYPE_1__ thread; } ;
struct TYPE_5__ {int ubuf; int kbuf; } ;
struct TYPE_6__ {TYPE_2__ get; } ;
struct regset_getset {scalar_t__ count; int pos; void* ret; TYPE_3__ u; struct task_struct* target; } ;
struct pt_regs {int dummy; } ;
struct ia32_user_i387_struct {int dummy; } ;
struct _fpreg_ia32 {int dummy; } ;


 int FUNC_0 (int,struct _fpreg_ia32*,struct pt_regs*,int ,int,int ) ;
 int FUNC_1 (struct task_struct*,int,int*) ;
 int FUNC_2 (scalar_t__,unsigned int) ;
 struct pt_regs* FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (struct unw_frame_info*) ;
 void* FUNC_5 (int*,scalar_t__*,int *,int *,char*,int,int) ;

__attribute__((used)) static void FUNC_6(struct unw_frame_info *VAR_0, void *VAR_1)
{
 struct regset_getset *VAR_2 = VAR_1;
 struct task_struct *VAR_3 = VAR_2->target;
 struct pt_regs *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 char VAR_8[80];

 if (VAR_2->count == 0 || FUNC_4(VAR_0) < 0)
  return;
 if (VAR_2->pos < 7 * sizeof(int)) {
  VAR_6 = FUNC_2((VAR_2->pos + VAR_2->count),
   (unsigned int)(7 * sizeof(int)));
  for (VAR_5 = VAR_2->pos; VAR_5 < VAR_6; VAR_5 += sizeof(int))
   FUNC_1(VAR_3, VAR_5, (int *)(VAR_8 + VAR_5));
  VAR_2->ret = FUNC_5(&VAR_2->pos, &VAR_2->count,
    &VAR_2->u.get.kbuf, &VAR_2->u.get.ubuf, VAR_8,
    0, 7 * sizeof(int));
  if (VAR_2->ret || VAR_2->count == 0)
   return;
 }
 if (VAR_2->pos < sizeof(struct ia32_user_i387_struct)) {
  VAR_4 = FUNC_3(VAR_3);
  VAR_7 = (VAR_3->thread.fsr >> 11) & 7;
  VAR_6 = FUNC_2(VAR_2->pos + VAR_2->count,
   (unsigned int)(sizeof(struct ia32_user_i387_struct)));
  VAR_5 = (VAR_2->pos - 7 * sizeof(int)) /
   sizeof(struct _fpreg_ia32);
  VAR_6 = (VAR_6 - 7 * sizeof(int)) / sizeof(struct _fpreg_ia32);
  for (; VAR_5 < VAR_6; VAR_5++)
   FUNC_0(VAR_5,
    (struct _fpreg_ia32 *)VAR_8 + VAR_5,
    VAR_4, VAR_0->sw, VAR_7, 0);
  VAR_2->ret = FUNC_5(&VAR_2->pos, &VAR_2->count,
    &VAR_2->u.get.kbuf, &VAR_2->u.get.ubuf,
    VAR_8, 7 * sizeof(int),
    sizeof(struct ia32_user_i387_struct));
  if (VAR_2->ret || VAR_2->count == 0)
   return;
 }
}
