
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ frsig; scalar_t__ acqsig; scalar_t__ relsig; scalar_t__ waitv; int mode; } ;
struct vc_data {size_t vc_num; int vt_newvt; int * vt_pid; TYPE_1__ vt_mode; int vc_mode; } ;
struct TYPE_4__ {int kbdmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vc_data*) ;

void FUNC_3(struct vc_data *VAR_6)
{
 VAR_6->vc_mode = VAR_0;
 VAR_5[VAR_6->vc_num].kbdmode = VAR_4 ? VAR_1 : VAR_2;
 VAR_6->vt_mode.mode = VAR_3;
 VAR_6->vt_mode.waitv = 0;
 VAR_6->vt_mode.relsig = 0;
 VAR_6->vt_mode.acqsig = 0;
 VAR_6->vt_mode.frsig = 0;
 FUNC_1(VAR_6->vt_pid);
 VAR_6->vt_pid = ((void*)0);
 VAR_6->vt_newvt = -1;
 if (!FUNC_0())
  FUNC_2(VAR_6);
}
