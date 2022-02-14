
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t vm_size_t ;
struct vnode {int v_label; } ;
struct image_params {TYPE_1__* ip_cs_error; int ip_origcputype; } ;
struct cs_blob {int dummy; } ;
typedef TYPE_1__* os_reason_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int kern_return_t ;
typedef int cpu_type_t ;
struct TYPE_5__ {int osr_flags; int osr_kcd_descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct vnode*,int ,int ,struct cs_blob*,unsigned int*,unsigned int*,int,char**,size_t*) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int,size_t) ;
 int FUNC_3 (int *,int ,size_t,scalar_t__*) ;
 int FUNC_4 (int *,scalar_t__,char*,size_t) ;
 int FUNC_5 (char*,size_t) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,char const*,size_t,char*) ;
 int FUNC_9 (char*,char const*,...) ;
 scalar_t__ FUNC_10 (struct vnode*,char*,int*) ;
 int VAR_11 ;

int
FUNC_11(struct vnode *VAR_12, struct cs_blob *VAR_13,
          struct image_params *VAR_14,
          unsigned int *VAR_15, unsigned int *VAR_16,
          int VAR_17)
{
  int VAR_18;
  char *VAR_19 = ((void*)0);
  size_t VAR_20 = 0;

  char *VAR_21 = ((void*)0);
  vm_size_t VAR_22 = VAR_4;
  cpu_type_t VAR_23 = (VAR_14 == ((void*)0)) ? VAR_1 : VAR_14->ip_origcputype;
  FUNC_0(VAR_11, VAR_12, VAR_12->v_label, VAR_23, VAR_13,
      VAR_15, VAR_16, VAR_17, &VAR_19, &VAR_20);

  if (VAR_20) {



    char const *VAR_24 = ((void*)0);

    VAR_21 = (char *)FUNC_1(VAR_4);
    if (VAR_21 != ((void*)0)) {
    if (FUNC_10(VAR_12, VAR_21, (int*)&VAR_22) == 0) {
      VAR_24 = VAR_21;
    } else {
      VAR_24 = "(get vnode path failed)";
    }
    } else {
    VAR_24 = "(path alloc failed)";
    }

    if (VAR_18 == 0) {
    FUNC_8("mac_vnode_check_signature: MAC hook returned no error, "
      "but status is claimed to be fatal? "
      "path: '%s', fatal_failure_desc_len: %ld, fatal_failure_desc:\n%s\n",
      VAR_24, VAR_20, VAR_19);
    }

    FUNC_9("mac_vnode_check_signature: %s: code signature validation failed fatally: %s",
     VAR_24, VAR_19);

    if (VAR_14 == ((void*)0)) {
    goto out;
    }

    os_reason_t VAR_25 = FUNC_7(VAR_5,
                VAR_0);

    if (VAR_25 == VAR_8) {
    FUNC_9("mac_vnode_check_signature: %s: failure to allocate exit reason for validation failure: %s\n",
       VAR_24, VAR_19);
    goto out;
    }

    VAR_14->ip_cs_error = VAR_25;
    VAR_25->osr_flags = (VAR_7 |
           VAR_6);

    if (VAR_19 == ((void*)0)) {

    FUNC_9("mac_vnode_check_signature: %s: fatal failure is missing its description.\n", VAR_24);
    } else {
    mach_vm_address_t VAR_26 = 0;

    int VAR_27 = 0;
    int VAR_28 = 0;

    if ((VAR_27 = FUNC_6(VAR_25, FUNC_2
                   (1, VAR_20))) == 0 &&
      (VAR_28 = FUNC_3(&VAR_25->osr_kcd_descriptor,
                   VAR_2, VAR_20,
                   &VAR_26)) == VAR_3) {
      kern_return_t VAR_29 = FUNC_4(&VAR_25->osr_kcd_descriptor, (mach_vm_address_t)VAR_26,
                   VAR_19, VAR_20);

      if (VAR_29 != VAR_3) {
        FUNC_9("mac_vnode_check_signature: %s: failed to copy reason string "
         "(kcdata_memcpy error: %d, length: %ld)\n",
         VAR_24, VAR_29, VAR_20);
      }
    } else {
      FUNC_9("mac_vnode_check_signature: %s: failed to allocate space for reason string "
         "(os_reason_alloc_buffer error: %d, kcdata error: %d, length: %ld)\n",
         VAR_24, VAR_27, VAR_28, VAR_20);
    }

    }
  }

out:
  if (VAR_21) {
    FUNC_5(VAR_21, VAR_4);
  }

  if (VAR_20 > 0 && VAR_19 != ((void*)0)) {
    FUNC_5(VAR_19, VAR_20);
  }

  return (VAR_18);
}
