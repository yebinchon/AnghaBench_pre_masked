
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* os_reason_t ;
typedef scalar_t__ mach_vm_address_t ;
struct TYPE_6__ {int osr_flags; int osr_kcd_descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (scalar_t__,void*,int) ;
 int FUNC_1 (scalar_t__,void*,int,size_t*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int *,int ,int,scalar_t__*) ;
 int FUNC_5 (int *,scalar_t__,char*,size_t) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_8 (int,int) ;
 int FUNC_9 (char*,...) ;

os_reason_t
FUNC_10(uint32_t VAR_15, uint64_t VAR_16, user_addr_t VAR_17, uint32_t VAR_18,
     user_addr_t VAR_19, uint64_t VAR_20)
{
 os_reason_t VAR_21 = VAR_13;

 int VAR_22 = 0;
 int VAR_23 = 0;
 uint32_t VAR_24 = 0;
 char *VAR_25 = ((void*)0);
 size_t VAR_26 = 0;

 VAR_21 = FUNC_8(VAR_15, VAR_16);
 if (VAR_21 == VAR_13) {
  FUNC_9("build_userspace_exit_reason: failed to allocate exit reason\n");
  return VAR_21;
 }

 VAR_21->osr_flags |= VAR_8;




 VAR_21->osr_flags |= (VAR_20 & VAR_10);
 if ((VAR_20 & VAR_10) != VAR_20) {
  FUNC_9("build_userspace_exit_reason: illegal flags passed from userspace (some masked off) 0x%llx, ns: %u, code 0x%llx\n",
   VAR_20, VAR_15, VAR_16);
 }

 if (!(VAR_21->osr_flags & VAR_11)) {
  VAR_21->osr_flags |= VAR_9;
 }

 if (VAR_17 != VAR_14) {
  if (VAR_18 == 0) {
   FUNC_9("build_userspace_exit_reason: exit reason with namespace %u, nonzero payload but zero length\n",
     VAR_15);
   VAR_21->osr_flags |= VAR_6;
   VAR_17 = VAR_14;
  } else {
   VAR_23++;

   if (VAR_18 > VAR_1) {
    VAR_21->osr_flags |= VAR_12;
    VAR_18 = VAR_1;
   }

   VAR_24 += VAR_18;
  }
 }

 if (VAR_19 != VAR_14) {
  VAR_25 = (char *) FUNC_2(VAR_3);

  if (VAR_25 != ((void*)0)) {
   VAR_22 = FUNC_1(VAR_19, (void *) VAR_25,
      VAR_3, &VAR_26);

   if (VAR_22 == 0) {
    VAR_23++;
    VAR_24 += VAR_26;
   } else if (VAR_22 == VAR_0) {
    VAR_23++;
    VAR_25[VAR_3 - 1] = '\0';
    VAR_24 += VAR_26;
   } else {
    VAR_21->osr_flags |= VAR_7;
    FUNC_6(VAR_25, VAR_3);
    VAR_25 = ((void*)0);
    VAR_26 = 0;
   }
  }
 }

 if (VAR_23 != 0) {
  uint32_t VAR_27 = 0;
  mach_vm_address_t VAR_28 = 0;

  VAR_27 = FUNC_3(VAR_23, VAR_24);

  VAR_22 = FUNC_7(VAR_21, VAR_27);
  if (VAR_22 != 0) {
   FUNC_9("build_userspace_exit_reason: failed to allocate signal reason buffer\n");
   goto out_failed_copyin;
  }

  if (VAR_25 != ((void*)0) && VAR_26 != 0) {
   if (VAR_5 == FUNC_4(&VAR_21->osr_kcd_descriptor,
      VAR_2,
      VAR_26,
      &VAR_28)) {

    FUNC_5(&VAR_21->osr_kcd_descriptor, (mach_vm_address_t) VAR_28,
      VAR_25, VAR_26);
   } else {
    FUNC_9("build_userspace_exit_reason: failed to allocate space for reason string\n");
    goto out_failed_copyin;
   }
  }

  if (VAR_17 != VAR_14) {
   if (VAR_5 ==
     FUNC_4(&VAR_21->osr_kcd_descriptor,
      VAR_4,
      VAR_18,
      &VAR_28)) {
    VAR_22 = FUNC_0(VAR_17, (void *) VAR_28, VAR_18);
    if (VAR_22) {
     FUNC_9("build_userspace_exit_reason: failed to copy in payload data with error %d\n", VAR_22);
     goto out_failed_copyin;
    }
   } else {
    FUNC_9("build_userspace_exit_reason: failed to allocate space for payload data\n");
    goto out_failed_copyin;
   }
  }
 }

 if (VAR_25 != ((void*)0)) {
  FUNC_6(VAR_25, VAR_3);
  VAR_25 = ((void*)0);
  VAR_26 = 0;
 }

 return VAR_21;

out_failed_copyin:

 if (VAR_25 != ((void*)0)) {
  FUNC_6(VAR_25, VAR_3);
  VAR_25 = ((void*)0);
  VAR_26 = 0;
 }

 VAR_21->osr_flags |= VAR_7;
 FUNC_7(VAR_21, 0);
 return VAR_21;
}
