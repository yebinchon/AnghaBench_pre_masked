
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int io_exits; } ;
struct TYPE_10__ {TYPE_1__ stat; } ;
struct vcpu_svm {TYPE_4__ vcpu; TYPE_3__* vmcb; int next_rip; } ;
struct TYPE_8__ {int exit_info_1; int exit_info_2; } ;
struct TYPE_9__ {TYPE_2__ control; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int,int,unsigned int) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(struct vcpu_svm *VAR_5)
{
 u32 VAR_6 = VAR_5->vmcb->control.exit_info_1;
 int VAR_7, VAR_8, VAR_9;
 unsigned VAR_10;

 ++VAR_5->vcpu.stat.io_exits;

 VAR_5->next_rip = VAR_5->vmcb->control.exit_info_2;

 VAR_9 = (VAR_6 & VAR_3) != 0;

 if (VAR_9) {
  if (FUNC_0(&VAR_5->vcpu, 0) == VAR_0)
   return 0;
  return 1;
 }

 VAR_8 = (VAR_6 & VAR_4) != 0;
 VAR_10 = VAR_6 >> 16;
 VAR_7 = (VAR_6 & VAR_1) >> VAR_2;

 FUNC_2(&VAR_5->vcpu);
 return FUNC_1(&VAR_5->vcpu, VAR_8, VAR_7, VAR_10);
}
