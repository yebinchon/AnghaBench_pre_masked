
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rflags; scalar_t__ err; int rip; } ;
struct TYPE_8__ {TYPE_1__ isf; int cr2; } ;
typedef TYPE_2__ x86_saved_state64_t ;
typedef scalar_t__ vm_offset_t ;
typedef unsigned int kern_return_t ;
typedef int boolean_t ;
struct TYPE_10__ {TYPE_2__* cpu_fatal_trap_state; TYPE_2__* cpu_post_fatal_trap_state; } ;
struct TYPE_9__ {int is_conn; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_6__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int,unsigned int,unsigned int,TYPE_2__*) ;
 TYPE_4__ VAR_17 ;
 int FUNC_5 (char*,unsigned int,int ,int ) ;
 int FUNC_6 (int ) ;

boolean_t
FUNC_7(
    unsigned int VAR_18,
    x86_saved_state64_t *VAR_19,
    kern_return_t VAR_20,
    vm_offset_t VAR_21
)
{
    unsigned int VAR_22, VAR_23, VAR_24 = 0;
    boolean_t VAR_25;

    if (VAR_18 != 135 && VAR_18 != 138) {
     FUNC_5("Debugger: Unexpected kernel trap number: "
  "0x%x, RIP: 0x%llx, CR2: 0x%llx\n",
  VAR_18, VAR_19->isf.rip, VAR_19->cr2);
 if (!VAR_17.is_conn)
     return VAR_15;
    }

    VAR_25 = FUNC_6(VAR_15);
    FUNC_1();

    if (VAR_19->isf.rflags & VAR_0) {
     FUNC_3();
    }

    switch (VAR_18) {

    case 137:
 VAR_22 = VAR_1;
 VAR_23 = VAR_8;
 break;

    case 132:
 VAR_22 = VAR_14;
 VAR_23 = VAR_10;
 break;

    case 133:
 VAR_22 = VAR_1;
 VAR_23 = VAR_6;
 break;

    case 134:
 VAR_22 = VAR_3;
 VAR_23 = VAR_11;
 break;

    case 130:
 VAR_22 = VAR_3;
 VAR_23 = VAR_12;
 VAR_24 = (unsigned int)VAR_19->isf.err;
 break;

    case 129:
 VAR_22 = VAR_3;
 VAR_23 = VAR_13;
 VAR_24 = (unsigned int)VAR_19->isf.err;
 break;

    case 136:
 VAR_22 = VAR_3;
 VAR_23 = VAR_9;
 VAR_24 = (unsigned int)VAR_19->isf.err;
 break;

    case 131:
     VAR_22 = VAR_2;
 VAR_23 = VAR_20;
 VAR_24 = (unsigned int)VAR_21;
 break;

    case 128:
 VAR_22 = VAR_14;
 VAR_23 = VAR_5;
 break;

    case 138:
    case 135:
 VAR_22 = VAR_4;
 VAR_23 = VAR_7;
 break;

    default:
     VAR_22 = VAR_3;
 VAR_23 = VAR_18;
 break;
    }

    if (FUNC_0()->cpu_fatal_trap_state) {
     FUNC_0()->cpu_post_fatal_trap_state = VAR_19;
     VAR_19 = FUNC_0()->cpu_fatal_trap_state;
    }

    FUNC_4(VAR_22, VAR_23, VAR_24, VAR_19);

    FUNC_2();
    FUNC_6(VAR_25);



    if (VAR_19->isf.rflags & VAR_0) {
     FUNC_1();
    }

    return VAR_16;
}
