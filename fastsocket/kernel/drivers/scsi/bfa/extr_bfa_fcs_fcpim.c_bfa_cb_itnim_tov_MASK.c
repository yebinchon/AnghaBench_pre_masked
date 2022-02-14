
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfad_itnim_s {int state; } ;
struct bfa_fcs_itnim_s {TYPE_1__* rport; int fcs; struct bfad_itnim_s* itnim_drv; } ;
struct TYPE_2__ {int pwwn; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void
FUNC_1(void *VAR_1)
{
 struct bfa_fcs_itnim_s *VAR_2 = (struct bfa_fcs_itnim_s *) VAR_1;
 struct bfad_itnim_s *VAR_3 = VAR_2->itnim_drv;

 FUNC_0(VAR_2->fcs, VAR_2->rport->pwwn);
 VAR_3->state = VAR_0;
}
