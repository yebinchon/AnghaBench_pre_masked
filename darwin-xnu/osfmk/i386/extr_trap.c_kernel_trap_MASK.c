
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


typedef int x86_saved_state_t ;
struct TYPE_22__ {int trapno; int err; int rflags; scalar_t__ rip; int cpu; } ;
struct TYPE_23__ {TYPE_4__ isf; scalar_t__ cr2; } ;
typedef TYPE_5__ x86_saved_state64_t ;
typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_6__* vm_map_t ;
typedef scalar_t__ user_addr_t ;
typedef TYPE_7__* thread_t ;
struct recovery {scalar_t__ fault_addr; int recover_addr; } ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_21__ {int specFlags; TYPE_1__* copy_window; } ;
struct TYPE_25__ {scalar_t__ map; int options; int recover; TYPE_3__ machine; } ;
struct TYPE_24__ {TYPE_2__* pmap; } ;
struct TYPE_20__ {scalar_t__ pm_cr3; } ;
struct TYPE_19__ {scalar_t__ user_base; } ;
struct TYPE_18__ {scalar_t__ cpu_copywindow_base; scalar_t__ cpu_pmap_pcid_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,unsigned int,unsigned int,int,scalar_t__,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_7__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_7__*,TYPE_6__*,int) ;
 int FUNC_7 () ;
 TYPE_14__* FUNC_8 () ;
 TYPE_7__* FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int,TYPE_5__*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_26 ;
 int FUNC_20 (char*) ;
 int FUNC_21 (scalar_t__) ;
 scalar_t__ VAR_27 ;
 int FUNC_22 () ;
 int FUNC_23 (char*,int *) ;
 int FUNC_24 (TYPE_5__*,int,scalar_t__) ;
 int FUNC_25 (int) ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 struct recovery* VAR_30 ;
 struct recovery* VAR_31 ;
 int FUNC_26 () ;
 TYPE_5__* FUNC_27 (int *) ;
 int FUNC_28 (scalar_t__) ;
 int FUNC_29 (TYPE_5__*,int ) ;
 int FUNC_30 (int *) ;
 scalar_t__ FUNC_31 (int,int *,uintptr_t*,int ) ;
 scalar_t__ FUNC_32 (TYPE_6__*,scalar_t__,int ,scalar_t__,int ,int ,int *,int ) ;

void
FUNC_33(
 x86_saved_state_t *VAR_32,
 uintptr_t *VAR_33)
{
 x86_saved_state64_t *VAR_34;
 int VAR_35;
 user_addr_t VAR_36;
 int VAR_37;
 vm_map_t VAR_38 = 0;
 kern_return_t VAR_39 = VAR_8;
 kern_return_t VAR_40 = VAR_9;
 thread_t VAR_41;
 boolean_t VAR_42;
 vm_prot_t VAR_43;
        struct recovery *VAR_44;
 vm_offset_t VAR_45;



 int VAR_46;
 int VAR_47 = FUNC_17();

 VAR_41 = FUNC_9();

 if (FUNC_3(FUNC_18(VAR_32)))
  FUNC_23("kernel_trap(%p) with 32-bit state", VAR_32);
 VAR_34 = FUNC_27(VAR_32);


 VAR_34->isf.cpu = FUNC_7();

 VAR_36 = (user_addr_t)VAR_34->cr2;
 VAR_37 = VAR_34->isf.trapno;
 VAR_35 = (int)(VAR_34->isf.err & 0xffff);
 VAR_42 = (VAR_34->isf.rflags & VAR_4) != 0;
 VAR_45 = (vm_offset_t)VAR_34->isf.rip;

 VAR_46 = (VAR_36 < VAR_22);
 if (FUNC_3(VAR_20 == VAR_37)) {
  FUNC_5();

  FUNC_0(VAR_7,
   (FUNC_1(VAR_2, VAR_37)) | VAR_1,
   0, 0, 0, FUNC_2(VAR_45), 0);
  return;
 }

 user_addr_t VAR_48 = VAR_46 ? VAR_36 : FUNC_2(VAR_36);
 FUNC_0(VAR_7,
  (FUNC_1(VAR_2, VAR_37)) | VAR_1,
  (unsigned)(VAR_48 >> 32), (unsigned)VAR_48, VAR_46,
  FUNC_2(VAR_45), 0);


 if (129 == VAR_37) {



  VAR_38 = VAR_26;

  if (FUNC_4(VAR_41 != VAR_14 && VAR_41->map != VAR_26)) {
   if (FUNC_4(VAR_36 < VAR_22)) {

    VAR_38 = VAR_41->map;
    if (FUNC_3((VAR_35 == (VAR_18 | VAR_17)) &&
     (VAR_29) && (VAR_34->isf.rip == VAR_36))) {
     goto debugger_entry;
    }






    if (FUNC_3(VAR_35 & VAR_18 &&
       VAR_28 &&
       (VAR_34->isf.rflags & VAR_3) == 0)) {
     goto debugger_entry;
    }






    if (VAR_27 &&
        (VAR_41->machine.specFlags&VAR_0) &&
        VAR_38->pmap->pm_cr3 != FUNC_16()) {
     FUNC_25(FUNC_8()->cpu_pmap_pcid_enabled == VAR_6);
     FUNC_28(VAR_38->pmap->pm_cr3);
     return;
    }
    if (FUNC_3(VAR_36 < VAR_13) &&
        ((VAR_41->machine.specFlags & VAR_0) == 0)) {
     goto debugger_entry;
    }
   }

  }
 }

 (void) FUNC_21(VAR_42);

 switch (VAR_37) {

     case 130:
  FUNC_15();
  return;

     case 134:
  FUNC_14();
  return;

     case 135:
  FUNC_13();
  return;

     case 128:
  FUNC_11();
  return;

     case 131:
  FUNC_12(VAR_45);
  goto debugger_entry;

     case 136:
      if ((VAR_34->isf.rflags & VAR_5) == 0 && VAR_12)
      {





       FUNC_26();
       return;
      }
      goto debugger_entry;
     case 132:
       goto debugger_entry;
     case 129:
  VAR_43 = VAR_24;

  if (VAR_35 & VAR_19)
          VAR_43 |= VAR_25;
  if (VAR_35 & VAR_17)
          VAR_43 |= VAR_23;

  VAR_40 = VAR_39 = FUNC_32(VAR_38,
      VAR_36,
      VAR_43,
      VAR_6, VAR_21,
      VAR_15, ((void*)0), 0);

  if (VAR_39 == VAR_9) {
   return;
  }







     case 133:




         for (VAR_44 = VAR_30; VAR_44 < VAR_31; VAR_44++) {
          if (VAR_45 == VAR_44->fault_addr) {
           FUNC_29(VAR_34, VAR_44->recover_addr);
    return;
   }
  }




  if (VAR_41 != VAR_14 && VAR_41->recover) {
   FUNC_29(VAR_34, VAR_41->recover);
   VAR_41->recover = 0;
   return;
  }






     default:




      if (VAR_37 == 15) {
   FUNC_20("kernel_trap() ignoring spurious trap 15\n");
   return;
  }
debugger_entry:





  FUNC_30(VAR_32);




 }
 FUNC_22();
 FUNC_24(VAR_34, VAR_47, VAR_40);



}
