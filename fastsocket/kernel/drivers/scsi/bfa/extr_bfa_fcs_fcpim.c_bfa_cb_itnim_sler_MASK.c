
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sler; } ;
struct bfa_fcs_itnim_s {TYPE_2__* rport; int fcs; TYPE_1__ stats; } ;
struct TYPE_4__ {int pwwn; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(void *VAR_1)
{
 struct bfa_fcs_itnim_s *VAR_2 = (struct bfa_fcs_itnim_s *) VAR_1;

 VAR_2->stats.sler++;
 FUNC_1(VAR_2->fcs, VAR_2->rport->pwwn);
 FUNC_0(VAR_2->rport, VAR_0);
}
