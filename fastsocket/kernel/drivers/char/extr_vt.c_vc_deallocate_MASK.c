
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vt_notifier_param {struct vc_data* vc; } ;
struct vc_data {struct vc_data* vc_screenbuf; TYPE_1__* vc_sw; int vt_pid; } ;
struct TYPE_4__ {struct vc_data* d; } ;
struct TYPE_3__ {int owner; int (* con_deinit ) (struct vc_data*) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,struct vt_notifier_param*) ;
 int FUNC_2 (struct vc_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vc_data*) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int VAR_3 ;

void FUNC_8(unsigned int VAR_4)
{
 FUNC_0();

 if (FUNC_6(VAR_4)) {
  struct vc_data *VAR_5 = VAR_2[VAR_4].d;
  struct vt_notifier_param VAR_6 = { .vc = VAR_5 };

  FUNC_1(&VAR_3, VAR_1, &VAR_6);
  FUNC_7(VAR_4);
  VAR_5->vc_sw->con_deinit(VAR_5);
  FUNC_4(VAR_5->vt_pid);
  FUNC_3(VAR_5->vc_sw->owner);
  FUNC_2(VAR_5->vc_screenbuf);
  if (VAR_4 >= VAR_0)
   FUNC_2(VAR_5);
  VAR_2[VAR_4].d = ((void*)0);
 }
}
