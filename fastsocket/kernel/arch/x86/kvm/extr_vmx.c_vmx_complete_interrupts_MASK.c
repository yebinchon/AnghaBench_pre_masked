
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_9__ {int nmi_injected; void* event_exit_inst_len; } ;
struct TYPE_10__ {TYPE_1__ arch; } ;
struct vcpu_vmx {int idt_vectoring_info; scalar_t__ exit_reason; TYPE_2__ vcpu; int entry_time; int vnmi_blocked_time; int soft_vnmi_blocked; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;





 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*,int,int) ;
 int FUNC_12 (TYPE_2__*,int,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static void FUNC_17(struct vcpu_vmx *VAR_17)
{
 u32 VAR_18;
 u32 VAR_19 = VAR_17->idt_vectoring_info;
 bool VAR_20;
 u8 VAR_21;
 int VAR_22;
 bool VAR_23;

 VAR_18 = FUNC_15(VAR_15);

 VAR_17->exit_reason = FUNC_15(VAR_16);


 if ((VAR_17->exit_reason == VAR_2)
     || (VAR_17->exit_reason == VAR_1
  && FUNC_1(VAR_18)))
  FUNC_9();


 if ((VAR_18 & VAR_6) == 130 &&
     (VAR_18 & VAR_8)) {
  FUNC_6(&VAR_17->vcpu);
  asm("int $2");
  FUNC_5(&VAR_17->vcpu);
 }

 VAR_23 = VAR_19 & VAR_12;

 if (FUNC_0()) {
  VAR_20 = (VAR_18 & VAR_7) != 0;
  VAR_21 = VAR_18 & VAR_9;
  if ((VAR_18 & VAR_8) && VAR_20 &&
      VAR_21 != VAR_0 && !VAR_23)
   FUNC_16(VAR_3,
          VAR_4);
 } else if (FUNC_13(VAR_17->soft_vnmi_blocked))
  VAR_17->vnmi_blocked_time +=
   FUNC_4(FUNC_3(FUNC_2(), VAR_17->entry_time));

 VAR_17->vcpu.arch.nmi_injected = 0;
 FUNC_7(&VAR_17->vcpu);
 FUNC_8(&VAR_17->vcpu);

 if (!VAR_23)
  return;

 VAR_21 = VAR_19 & VAR_13;
 VAR_22 = VAR_19 & VAR_11;

 switch (VAR_22) {
 case 130:
  VAR_17->vcpu.arch.nmi_injected = 1;





  FUNC_14(VAR_3,
    VAR_4);
  break;
 case 129:
  VAR_17->vcpu.arch.event_exit_inst_len =
   FUNC_15(VAR_14);

 case 131:
  if (VAR_19 & VAR_10) {
   u32 VAR_24 = FUNC_15(VAR_5);
   FUNC_11(&VAR_17->vcpu, VAR_21, VAR_24);
  } else
   FUNC_10(&VAR_17->vcpu, VAR_21);
  break;
 case 128:
  VAR_17->vcpu.arch.event_exit_inst_len =
   FUNC_15(VAR_14);

 case 132:
  FUNC_12(&VAR_17->vcpu, VAR_21,
   VAR_22 == 128);
  break;
 default:
  break;
 }
}
