
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct unw_frame_info {TYPE_4__* sw; } ;
struct TYPE_5__ {int fsr; } ;
struct task_struct {TYPE_1__ thread; } ;
struct TYPE_6__ {int ubuf; int kbuf; } ;
struct TYPE_7__ {TYPE_2__ get; } ;
struct regset_getset {scalar_t__ count; int pos; TYPE_3__ u; void* ret; struct task_struct* target; } ;
struct pt_regs {int dummy; } ;
struct TYPE_8__ {char f16; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,struct pt_regs*,TYPE_4__*,int,int ) ;
 int FUNC_2 (struct task_struct*,int,int,char*) ;
 int FUNC_3 (scalar_t__,unsigned int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 struct pt_regs* FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (struct unw_frame_info*) ;
 void* FUNC_6 (int*,scalar_t__*,int *,int *,char*,int,int) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_7(struct unw_frame_info *VAR_3, void *VAR_4)
{
 struct regset_getset *VAR_5 = VAR_4;
 struct task_struct *VAR_6 = VAR_5->target;
 struct pt_regs *VAR_7;
 char VAR_8[128];
 int VAR_9, VAR_10, VAR_11;

 if (VAR_5->count == 0 || FUNC_5(VAR_3) < 0)
  return;
 if (VAR_5->pos < FUNC_0(VAR_1[0])) {
  VAR_10 = FUNC_3(VAR_5->pos + VAR_5->count, (unsigned int)32);
  FUNC_2(VAR_6, VAR_5->pos, VAR_10, VAR_8);
  VAR_5->ret = FUNC_6(&VAR_5->pos, &VAR_5->count,
    &VAR_5->u.get.kbuf, &VAR_5->u.get.ubuf, VAR_8,
    0, FUNC_0(VAR_1[0]));
  if (VAR_5->ret || VAR_5->count == 0)
   return;
 }
 if (VAR_5->pos < FUNC_0(VAR_2[0])) {
  VAR_7 = FUNC_4(VAR_6);
  VAR_11 = (VAR_6->thread.fsr >> 11) & 7;
  VAR_10 = FUNC_3(VAR_5->pos + VAR_5->count,
    (unsigned int)FUNC_0(VAR_2[0]));
  VAR_9 = (VAR_5->pos - FUNC_0(VAR_1[0])) / 16;
  VAR_10 = (VAR_10 - FUNC_0(VAR_1[0])) / 16;
  for (; VAR_9 < VAR_10; VAR_9++)
   FUNC_1(VAR_9, VAR_8 + 16 * VAR_9, VAR_7,
      VAR_3->sw, VAR_11, 0);
  VAR_5->ret = FUNC_6(&VAR_5->pos, &VAR_5->count,
    &VAR_5->u.get.kbuf, &VAR_5->u.get.ubuf,
    VAR_8, FUNC_0(VAR_1[0]), FUNC_0(VAR_2[0]));
  if (VAR_5->ret || VAR_5->count == 0)
   return;
 }
 if (VAR_5->pos < FUNC_0(VAR_0[0]))
  VAR_5->ret = FUNC_6(&VAR_5->pos, &VAR_5->count,
    &VAR_5->u.get.kbuf, &VAR_5->u.get.ubuf,
    &VAR_3->sw->f16, FUNC_0(VAR_2[0]),
    FUNC_0(VAR_0[0]));
}
