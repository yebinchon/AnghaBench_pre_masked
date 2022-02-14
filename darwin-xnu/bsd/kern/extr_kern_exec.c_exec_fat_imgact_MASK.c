
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef void* user_size_t ;
typedef size_t uint32_t ;
struct image_params {int ip_vdata; int ip_origcpusubtype; int ip_origcputype; void* ip_arch_size; void* ip_arch_offset; int ip_vp; scalar_t__ ip_px_sa; int ip_vfs_context; } ;
struct fat_header {int magic; } ;
struct fat_arch {int cpusubtype; int cputype; scalar_t__ size; scalar_t__ offset; } ;
struct _posix_spawnattr {scalar_t__* psa_binprefs; } ;
typedef int proc_t ;
typedef scalar_t__ load_return_t ;
typedef int kauth_cred_t ;
typedef scalar_t__ cpu_type_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ,int,struct fat_arch*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int,struct fat_arch*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int,int,scalar_t__,int ,int,int ,int*,int ) ;

__attribute__((used)) static int
FUNC_10(struct image_params *VAR_11)
{
 proc_t VAR_12 = FUNC_8(VAR_11->ip_vfs_context);
 kauth_cred_t VAR_13 = FUNC_4(VAR_12);
 struct fat_header *VAR_14 = (struct fat_header *)VAR_11->ip_vdata;
 struct _posix_spawnattr *VAR_15 = ((void*)0);
 struct fat_arch VAR_16;
 int VAR_17, VAR_18;
 load_return_t VAR_19;

 if (VAR_11->ip_origcputype != 0) {

  VAR_18 = -1;
  goto bad;
 }


 if (FUNC_0(VAR_14->magic) != VAR_3) {
  VAR_18 = -1;
  goto bad;
 }


 VAR_19 = FUNC_3((vm_offset_t)VAR_14, VAR_8);
 if (VAR_19 != VAR_6) {
  VAR_18 = FUNC_6(VAR_19);
  goto bad;
 }


 VAR_15 = (struct _posix_spawnattr *) VAR_11->ip_px_sa;
 if (VAR_15 != ((void*)0) && VAR_15->psa_binprefs[0] != 0) {
  uint32_t VAR_20 = 0;


  for (VAR_20 = 0; VAR_20 < VAR_7; VAR_20++) {
   cpu_type_t VAR_21 = VAR_15->psa_binprefs[VAR_20];
   if (VAR_21 == 0) {

    VAR_18 = VAR_1;
    goto bad;
   }

   if (VAR_21 == VAR_0) {

    goto regular_grading;
   }

   VAR_19 = FUNC_2(VAR_21,
       (vm_offset_t)VAR_14,
       VAR_8,
       &VAR_16);
   if (VAR_19 == VAR_6) {
    goto use_arch;
   }
  }


  VAR_18 = VAR_2;
  goto bad;
 }

regular_grading:

 VAR_19 = FUNC_1((vm_offset_t)VAR_14,
    VAR_8,
    &VAR_16);
 if (VAR_19 != VAR_6) {
  VAR_18 = FUNC_6(VAR_19);
  goto bad;
 }

use_arch:

 VAR_18 = FUNC_9(VAR_9, VAR_11->ip_vp, VAR_11->ip_vdata,
   VAR_8, VAR_16.offset,
   VAR_10, (VAR_5|VAR_4),
   VAR_13, &VAR_17, VAR_12);
 if (VAR_18) {
  goto bad;
 }

 if (VAR_17) {
  FUNC_7(VAR_11->ip_vdata + (VAR_8 - VAR_17), 0x0, VAR_17);
 }


 VAR_18 = -2;
 VAR_11->ip_arch_offset = (user_size_t)VAR_16.offset;
 VAR_11->ip_arch_size = (user_size_t)VAR_16.size;
 VAR_11->ip_origcputype = VAR_16.cputype;
 VAR_11->ip_origcpusubtype = VAR_16.cpusubtype;

bad:
 FUNC_5(&VAR_13);
 return (VAR_18);
}
