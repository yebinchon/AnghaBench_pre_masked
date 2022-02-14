
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {unsigned long cr0; unsigned long cr2; unsigned long cr3; unsigned long cr4; } ;
struct TYPE_17__ {TYPE_3__ arch; } ;
struct vcpu_svm {TYPE_4__ vcpu; TYPE_2__* vmcb; } ;
struct TYPE_14__ {int exit_info_1; int exit_code; } ;
struct TYPE_15__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct vcpu_svm*) ;
 unsigned long FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 unsigned long FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*,int,unsigned long) ;
 int FUNC_7 (TYPE_4__*,unsigned long) ;
 int FUNC_8 (TYPE_4__*,unsigned long) ;
 int FUNC_9 (TYPE_4__*,unsigned long) ;
 int FUNC_10 (TYPE_4__*,unsigned long) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct vcpu_svm *VAR_5)
{
 int VAR_6, VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 if (!FUNC_12(VAR_3))
  return FUNC_1(VAR_5);

 if (FUNC_13((VAR_5->vmcb->control.exit_info_1 & VAR_0) == 0))
  return FUNC_1(VAR_5);

 VAR_6 = VAR_5->vmcb->control.exit_info_1 & VAR_1;
 VAR_7 = VAR_5->vmcb->control.exit_code - VAR_2;

 VAR_9 = 0;
 if (VAR_7 >= 16) {
  VAR_7 -= 16;
  VAR_8 = FUNC_5(&VAR_5->vcpu, VAR_6);
  switch (VAR_7) {
  case 0:
   VAR_9 = FUNC_7(&VAR_5->vcpu, VAR_8);
   break;
  case 3:
   VAR_9 = FUNC_8(&VAR_5->vcpu, VAR_8);
   break;
  case 4:
   VAR_9 = FUNC_9(&VAR_5->vcpu, VAR_8);
   break;
  case 8:
   VAR_9 = FUNC_10(&VAR_5->vcpu, VAR_8);
   break;
  default:
   FUNC_0(1, "unhandled write to CR%d", VAR_7);
   FUNC_4(&VAR_5->vcpu, VAR_4);
   return 1;
  }
 } else {
  switch (VAR_7) {
  case 0:
   VAR_8 = VAR_5->vcpu.arch.cr0;
   break;
  case 2:
   VAR_8 = VAR_5->vcpu.arch.cr2;
   break;
  case 3:
   VAR_8 = VAR_5->vcpu.arch.cr3;
   break;
  case 4:
   VAR_8 = VAR_5->vcpu.arch.cr4;
   break;
  case 8:
   VAR_8 = FUNC_2(&VAR_5->vcpu);
   break;
  default:
   FUNC_0(1, "unhandled read from CR%d", VAR_7);
   FUNC_4(&VAR_5->vcpu, VAR_4);
   return 1;
  }
  FUNC_6(&VAR_5->vcpu, VAR_6, VAR_8);
 }
 if (VAR_9)
  FUNC_3(&VAR_5->vcpu, 0);
 else
  FUNC_11(&VAR_5->vcpu);

 return 1;
}
