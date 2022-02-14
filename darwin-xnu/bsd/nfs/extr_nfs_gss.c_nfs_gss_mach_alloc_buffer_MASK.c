
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_map_size_t ;
typedef int * vm_map_copy_t ;
typedef int vm_map_address_t ;
typedef scalar_t__ uint32_t ;
typedef int u_char ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,void*,scalar_t__) ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int **) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__,int,int ,int ) ;

__attribute__((used)) static void
FUNC_9(u_char *VAR_7, uint32_t VAR_8, vm_map_copy_t *VAR_9)
{
 kern_return_t VAR_10;
 vm_offset_t VAR_11;
 vm_size_t VAR_12;

 *VAR_9 = ((void*)0);
 if (VAR_7 == ((void*)0) || VAR_8 == 0)
  return;

 VAR_12 = FUNC_5(VAR_8,
        FUNC_4(VAR_6));
 VAR_10 = FUNC_2(VAR_6, &VAR_11, VAR_12, VAR_2, VAR_3);
 if (VAR_10 != 0) {
  FUNC_1("nfs_gss_mach_alloc_buffer: vm_allocate failed\n");
  return;
 }

 VAR_10 = FUNC_8(VAR_6,
    FUNC_6(VAR_11,
        FUNC_4(VAR_6)),
    FUNC_5(VAR_11 + VAR_12,
        FUNC_4(VAR_6)),
  VAR_4|VAR_5, VAR_3, VAR_0);
 if (VAR_10 != 0) {
  FUNC_1("nfs_gss_mach_alloc_buffer: vm_map_wire failed\n");
  return;
 }

 FUNC_0(VAR_7, (void *) VAR_11, VAR_8);



 VAR_10 = FUNC_7(VAR_6,
      FUNC_6(VAR_11,
          FUNC_4(VAR_6)),
      FUNC_5(VAR_11 + VAR_12,
          FUNC_4(VAR_6)),
      VAR_0);
 if (VAR_10 != 0) {
  FUNC_1("nfs_gss_mach_alloc_buffer: vm_map_unwire failed\n");
  return;
 }

 VAR_10 = FUNC_3(VAR_6, (vm_map_address_t) VAR_11,
  (vm_map_size_t) VAR_8, VAR_1, VAR_9);
 if (VAR_10 != 0) {
  FUNC_1("nfs_gss_mach_alloc_buffer: vm_map_copyin failed\n");
  return;
 }
}
