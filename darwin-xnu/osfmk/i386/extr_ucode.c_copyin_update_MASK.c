
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int user_addr_t ;
typedef int update_header ;
typedef scalar_t__ uint64_t ;
struct intel_ucupdate {int total_size; } ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*,int) ;
 struct intel_ucupdate* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int *,int,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(uint64_t VAR_5)
{
 struct intel_ucupdate VAR_6;
 struct intel_ucupdate *VAR_7;
 vm_size_t VAR_8;
 kern_return_t VAR_9;
 int VAR_10;


 VAR_10 = FUNC_0((user_addr_t)VAR_5, (void *)&VAR_6, sizeof(VAR_6));
 if (VAR_10)
  return VAR_10;


 VAR_8 = VAR_6.total_size;


 if (VAR_8 >= 1024 * 1024)
  return VAR_0;


 if (VAR_8 == 0)
  VAR_8 = 2048;






 VAR_9 = FUNC_1(VAR_4, (vm_offset_t *)&VAR_7, VAR_8, VAR_2);
 if (VAR_9 != VAR_1)
  return VAR_0;


 VAR_10 = FUNC_0((user_addr_t)VAR_5, (void*)VAR_7, VAR_8);
 if (VAR_10) {
  FUNC_2(VAR_4, (vm_offset_t)VAR_7, VAR_8);
  return VAR_10;
 }

 VAR_3 = VAR_7;
 return 0;
}
