
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ user_addr_t ;
typedef int uint64_t ;
struct shared_file_mapping_np {int dummy; } ;
struct proc {int p_comm; int p_pid; } ;
typedef int mappings ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,struct shared_file_mapping_np*,scalar_t__) ;
 int FUNC_3 () ;

int
FUNC_4(
  struct proc *VAR_0,
  user_addr_t VAR_1,
  unsigned int VAR_2,
  struct shared_file_mapping_np *VAR_3)
{
 int VAR_4 = 0;
 vm_size_t VAR_5 = 0;


 VAR_5 = (vm_size_t) (VAR_2 * sizeof (VAR_3[0]));
 VAR_4 = FUNC_2(VAR_1,
         VAR_3,
         VAR_5);
 if (VAR_4) {
  FUNC_0(
   ("shared_region: %p [%d(%s)] map(): "
    "copyin(0x%llx, %d) failed (error=%d)\n",
    (void )FUNC_1(FUNC_3()),
    VAR_0->p_pid, VAR_0->p_comm,
    (uint64_t)VAR_1, VAR_2, VAR_4));
 }
 return VAR_4;
}
