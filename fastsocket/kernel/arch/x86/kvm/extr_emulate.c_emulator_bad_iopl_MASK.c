
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_emulate_ctxt {scalar_t__ mode; int eflags; int vcpu; } ;
struct TYPE_2__ {int (* get_cpl ) (int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct x86_emulate_ctxt *VAR_5)
{
 int VAR_6;
 if (VAR_5->mode == VAR_1)
  return 0;
 if (VAR_5->mode == VAR_2)
  return 1;
 VAR_6 = (VAR_5->eflags & VAR_3) >> VAR_0;
 return VAR_4->get_cpl(VAR_5->vcpu) > VAR_6;
}
