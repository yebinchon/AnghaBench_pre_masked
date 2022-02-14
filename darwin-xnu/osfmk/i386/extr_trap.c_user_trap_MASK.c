
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int x86_saved_state_t ;
struct TYPE_16__ {int trapno; scalar_t__ rip; scalar_t__ err; void* cpu; } ;
struct TYPE_18__ {TYPE_1__ isf; scalar_t__ cr2; } ;
typedef TYPE_3__ x86_saved_state64_t ;
struct TYPE_19__ {int trapno; int err; scalar_t__ eip; scalar_t__ cr2; void* cpu; } ;
typedef TYPE_4__ x86_saved_state32_t ;
struct TYPE_20__ {unsigned long dr6; } ;
typedef TYPE_5__ x86_debug_state64_t ;
typedef TYPE_5__ x86_debug_state32_t ;
typedef int vm_prot_t ;
typedef int user_addr_t ;
typedef void* uint32_t ;
typedef TYPE_7__* thread_t ;
typedef TYPE_8__* pcb_t ;
typedef int mach_exception_subcode_t ;
typedef scalar_t__ mach_exception_code_t ;
typedef int kern_return_t ;
struct TYPE_22__ {TYPE_5__* ids; } ;
struct TYPE_17__ {scalar_t__ ids; } ;
struct TYPE_21__ {int map; TYPE_2__ machine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,int ,int,void*,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ,int,unsigned int,unsigned int,unsigned int,unsigned int,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int ,int) ;
 int VAR_21 ;
 TYPE_8__* FUNC_3 (TYPE_7__*) ;
 int VAR_22 ;
 int VAR_23 ;



 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 void* FUNC_7 () ;
 TYPE_7__* FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int VAR_28 ;
 int VAR_29 ;
 void** VAR_30 ;
 int FUNC_15 (int,scalar_t__,int) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 () ;
 int FUNC_19 (char*,...) ;
 TYPE_4__* FUNC_20 (int *) ;
 TYPE_3__* FUNC_21 (int *) ;
 int FUNC_22 () ;
 void* FUNC_23 (TYPE_7__*) ;
 scalar_t__ FUNC_24 (TYPE_7__*) ;
 int * VAR_31 ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,int,int ,int ,int ,int ,int *,int ) ;

void
FUNC_27(
 x86_saved_state_t *VAR_32)
{
 int VAR_33;
 int VAR_34;
 mach_exception_code_t VAR_35;
 mach_exception_subcode_t VAR_36;
 int VAR_37;
 user_addr_t VAR_38;
 vm_prot_t VAR_39;
 thread_t VAR_40 = FUNC_8();
 kern_return_t VAR_41;
 user_addr_t VAR_42;
 unsigned long VAR_43 = 0;

 FUNC_6((FUNC_16(VAR_32) && !FUNC_24(VAR_40)) ||
        (FUNC_17(VAR_32) && FUNC_24(VAR_40)));

 if (FUNC_17(VAR_32)) {
         x86_saved_state64_t *VAR_44;

  VAR_44 = FUNC_21(VAR_32);


  VAR_44->isf.cpu = FUNC_7();

  VAR_37 = VAR_44->isf.trapno;
  VAR_34 = (int)VAR_44->isf.err & 0xffff;
  VAR_38 = (user_addr_t)VAR_44->cr2;
  VAR_42 = (user_addr_t)VAR_44->isf.rip;
 } else {
  x86_saved_state32_t *VAR_45;

  VAR_45 = FUNC_20(VAR_32);


  VAR_45->cpu = FUNC_7();

  VAR_37 = VAR_45->trapno;
  VAR_34 = VAR_45->err & 0xffff;
  VAR_38 = (user_addr_t)VAR_45->cr2;
  VAR_42 = (user_addr_t)VAR_45->eip;
 }

 if ((VAR_37 == 143) && VAR_40->machine.ids) {
  unsigned long VAR_46 = 0;



  __asm__ volatile ("mov %%db6, %0" : "=r" (VAR_43));
  __asm__ volatile ("mov %0, %%db6" : : "r" (VAR_46));
 }

 FUNC_18();

 FUNC_1(VAR_18,
  (FUNC_2(VAR_1, VAR_37)) | VAR_0,
  (unsigned)(VAR_38>>32), (unsigned)VAR_38,
  (unsigned)(VAR_42>>32), (unsigned)VAR_42, 0);

 VAR_35 = 0;
 VAR_36 = 0;
 VAR_33 = 0;
 FUNC_0(1,
  "user_trap: type=0x%x(%s) err=0x%x cr2=%p rip=%p\n",
  VAR_37, VAR_31[VAR_37], VAR_34, (void *)(long) VAR_38, (void *)(long) VAR_42);

 switch (VAR_37) {

     case 142:
  VAR_33 = VAR_2;
  VAR_35 = VAR_8;
  break;

     case 143:
  {
   pcb_t VAR_47;




   VAR_47 = FUNC_3(VAR_40);
   if (VAR_47->ids) {






    if (FUNC_24(VAR_40)) {
     x86_debug_state64_t *VAR_48 = VAR_47->ids;
     VAR_48->dr6 = VAR_43;
    } else {
     x86_debug_state32_t *VAR_49 = VAR_47->ids;
     VAR_49->dr6 = (uint32_t) VAR_43;
    }
   }
   VAR_33 = VAR_5;
   VAR_35 = VAR_14;
   break;
  }
     case 137:




  VAR_33 = VAR_5;
  VAR_35 = VAR_7;
  break;

     case 132:
  VAR_33 = VAR_2;
  VAR_35 = VAR_10;
  break;

     case 133:
  VAR_33 = VAR_16;
  VAR_35 = VAR_6;
  break;

     case 136:

  FUNC_11(VAR_42);

  VAR_33 = VAR_4;
  VAR_35 = VAR_11;
  break;

     case 134:
  FUNC_14();
  return;

     case 139:
  FUNC_13();
  return;

     case 135:
  VAR_33 = VAR_4;
  VAR_35 = VAR_12;
  VAR_36 = VAR_34;
  break;

     case 130:
  VAR_33 = VAR_4;
  VAR_35 = VAR_13;
  VAR_36 = VAR_34;
  break;

     case 128:
  VAR_33 = VAR_4;
  VAR_35 = VAR_15;
  VAR_36 = VAR_34;
  break;

     case 138:
  VAR_33 = VAR_3;
  VAR_35 = VAR_9;
  VAR_36 = VAR_34;
  break;

     case 131:
     {
      VAR_39 = VAR_26;

  if (VAR_34 & VAR_23)
          VAR_39 |= VAR_27;
  if (FUNC_4(VAR_34 & VAR_22))
          VAR_39 |= VAR_25;







  VAR_41 = FUNC_26(VAR_40->map,
    VAR_38,
    VAR_39, VAR_17, VAR_24,
    VAR_21, ((void*)0), 0);
  if (FUNC_5((VAR_41 == VAR_20) || (VAR_41 == VAR_19))) {
   FUNC_22();

  }

         FUNC_25(VAR_41);
     }
  break;

     case 129:
  FUNC_10();
  return;


     case 140:
  FUNC_12();
  return;

     case 141:
  VAR_33 = VAR_4;
  VAR_35 = VAR_11;
  break;

     default:
  FUNC_19("Unexpected user trap, type %d", VAR_37);
  return;
 }



 FUNC_15(VAR_33, VAR_35, VAR_36);

}
