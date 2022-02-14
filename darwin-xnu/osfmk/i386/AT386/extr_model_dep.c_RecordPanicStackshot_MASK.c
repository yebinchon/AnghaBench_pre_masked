
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mach_vm_address_t ;
struct TYPE_2__ {scalar_t__ mph_other_log_offset; scalar_t__ mph_panic_log_len; int mph_stackshot_len; int mph_panic_flags; void* mph_stackshot_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_21 ;
 char* VAR_22 ;
 unsigned int VAR_23 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int,void*,int,int,int *,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,char,int) ;
 TYPE_1__* VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;

void
FUNC_11()
{
 int VAR_29 = 0, VAR_30 = 0, VAR_31 = 0, VAR_32 = 0;
 char *VAR_33 = ((void*)0);


 if (VAR_20) {
  if (VAR_26->mph_other_log_offset == 0) {
   VAR_26->mph_other_log_offset = FUNC_0(VAR_22);
  }
  return;
 }
 VAR_20 = VAR_19;


 if (VAR_26->mph_panic_log_len == 0) {
  FUNC_5("Found zero length panic log, skipping capturing panic stackshot\n");
  if (VAR_26->mph_other_log_offset == 0) {
   VAR_26->mph_other_log_offset = FUNC_0(VAR_22);
  }
  return;
 }





 if (VAR_24) {
  if (FUNC_10()) {
   VAR_26->mph_panic_flags |= VAR_5;
   VAR_26->mph_other_log_offset = FUNC_0(VAR_22);
   FUNC_5("Panicked during stackshot, skipping panic stackshot\n");
   return;
  } else {
   VAR_33 = VAR_22;

   VAR_32 = VAR_23 - (unsigned int)((uintptr_t)VAR_33 - (uintptr_t)VAR_21);
   VAR_29 = FUNC_4(&VAR_25, (mach_vm_address_t)VAR_33,
     VAR_0, VAR_32, VAR_1);
   if (VAR_29 != VAR_2) {
    VAR_26->mph_panic_flags |= VAR_3;
    VAR_26->mph_other_log_offset = FUNC_0(VAR_22);
    FUNC_5("Failed to initialize kcdata buffer for in-memory panic stackshot, skipping ...\n");
    return;
   }

   FUNC_6(-1, (void *) VAR_33, VAR_32,
         (VAR_16 | VAR_17 | VAR_14 |
         VAR_10 | VAR_11 | VAR_12 |
         VAR_15 | VAR_18), &VAR_25, 0);
   VAR_29 = FUNC_2(((void*)0));
   VAR_30 = (int) FUNC_7();
   VAR_31 = (int) FUNC_3(&VAR_25);

   if ((VAR_29 != VAR_2) && (VAR_31 > 0)) {




    VAR_26->mph_panic_flags |= VAR_6;
    FUNC_9();


    FUNC_8(VAR_33, '\0', VAR_31);

    VAR_29 = FUNC_4(&VAR_25, (mach_vm_address_t)VAR_33,
     VAR_0, VAR_32, VAR_1);
    if (VAR_29 != VAR_2) {
     VAR_26->mph_panic_flags |= VAR_3;
     VAR_26->mph_other_log_offset = FUNC_0(VAR_22);
     FUNC_5("Failed to re-initialize kcdata buffer for kernel only in-memory panic stackshot, skipping ...\n");
     return;
    }

    FUNC_6(-1, (void *) VAR_33, VAR_32, (VAR_14 |
      VAR_15 | VAR_16 | VAR_9 |
      VAR_12 | VAR_18), &VAR_25, 0);
    VAR_29 = FUNC_2(((void*)0));
    VAR_30 = (int) FUNC_7();
    VAR_31 = (int) FUNC_3(&VAR_25);
   }

   if (VAR_29 == VAR_2) {
    VAR_22 += VAR_30;
    VAR_26->mph_panic_flags |= VAR_7;
    VAR_26->mph_stackshot_offset = FUNC_0(VAR_33);
    VAR_26->mph_stackshot_len = VAR_30;

    VAR_26->mph_other_log_offset = FUNC_0(VAR_22);
    FUNC_5("\n** In Memory Panic Stackshot Succeeded ** Bytes Traced %d **\n", VAR_30);
   } else {
    if (VAR_31 > 0) {

     FUNC_8(VAR_33, '\0', VAR_31);
     VAR_26->mph_panic_flags |= VAR_4;

     VAR_26->mph_other_log_offset = FUNC_0(VAR_22);
     FUNC_5("\n** In Memory Panic Stackshot Incomplete ** Bytes Filled %d ** Err %d\n", VAR_31, VAR_29);
    } else {
     FUNC_1(VAR_33, VAR_31);
     VAR_26->mph_panic_flags |= VAR_3;

     VAR_26->mph_other_log_offset = FUNC_0(VAR_22);
     FUNC_5("\n** In Memory Panic Stackshot Failed ** Bytes Traced %d, err %d\n", VAR_30, VAR_29);
    }
   }
  }






 } else {
  VAR_26->mph_other_log_offset = FUNC_0(VAR_22);
 }
 return;
}
