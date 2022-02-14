
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shadow_efer; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;
struct vcpu_vmx {int msr_offset_efer; int save_nmsrs; TYPE_2__ vcpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vcpu_vmx*,int ) ;
 int FUNC_1 (unsigned long*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct vcpu_vmx*,int,int ) ;
 scalar_t__ FUNC_5 (struct vcpu_vmx*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct vcpu_vmx*) ;
 unsigned long* VAR_7 ;
 unsigned long* VAR_8 ;

__attribute__((used)) static void FUNC_8(struct vcpu_vmx *VAR_9)
{
 int VAR_10, VAR_11;
 unsigned long *VAR_12;

 FUNC_7(VAR_9);
 VAR_10 = 0;
 VAR_9->msr_offset_efer = VAR_11 = FUNC_0(VAR_9, VAR_3);
 if (VAR_11 >= 0 && FUNC_5(VAR_9))
  FUNC_4(VAR_9, VAR_11, VAR_10++);

 VAR_9->save_nmsrs = VAR_10;

 if (FUNC_2()) {
  if (FUNC_3(&VAR_9->vcpu))
   VAR_12 = VAR_8;
  else
   VAR_12 = VAR_7;

  FUNC_6(VAR_1, FUNC_1(VAR_12));
 }
}
