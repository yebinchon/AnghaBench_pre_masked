
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {TYPE_3__* xstate; } ;
struct task_struct {TYPE_4__ thread; } ;
struct i387_fxsave_struct {int cwd; int * xmm_space; int * st_space; scalar_t__ rdp; scalar_t__ rip; scalar_t__ fop; scalar_t__ twd; scalar_t__ swd; } ;
struct TYPE_5__ {int xstate_bv; } ;
struct TYPE_6__ {TYPE_1__ xsave_hdr; } ;
struct TYPE_7__ {TYPE_2__ xsave; struct i387_fxsave_struct fxsave; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;

void FUNC_2(struct task_struct *VAR_6)
{
 u64 VAR_7;
 int VAR_8 = 0x2;
 struct i387_fxsave_struct *VAR_9 = &VAR_6->thread.xstate->fxsave;

 if (!VAR_9)
  return;

 VAR_7 = VAR_6->thread.xstate->xsave.xsave_hdr.xstate_bv;





 if ((VAR_7 & VAR_3) == VAR_3)
  return;




 if (!(VAR_7 & VAR_0)) {
  VAR_9->cwd = 0x37f;
  VAR_9->swd = 0;
  VAR_9->twd = 0;
  VAR_9->fop = 0;
  VAR_9->rip = 0;
  VAR_9->rdp = 0;
  FUNC_1(&VAR_9->st_space[0], 0, 128);
 }




 if (!(VAR_7 & VAR_1))
  FUNC_1(&VAR_9->xmm_space[0], 0, 256);

 VAR_7 = (VAR_3 & ~VAR_7) >> 2;





 while (VAR_7) {
  if (VAR_7 & 0x1) {
   int VAR_10 = VAR_4[VAR_8];
   int VAR_11 = VAR_5[VAR_8];

   FUNC_0(((void *) VAR_9) + VAR_10,
          ((void *) VAR_2) + VAR_10,
          VAR_11);
  }

  VAR_7 >>= 1;
  VAR_8++;
 }
}
