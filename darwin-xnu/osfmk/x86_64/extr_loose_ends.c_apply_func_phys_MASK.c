
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int uint32_t ;
typedef scalar_t__ addr64_t ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;

int
FUNC_2(
  addr64_t VAR_1,
  vm_size_t VAR_2,
  int (*VAR_3)(void * VAR_4, vm_size_t VAR_5, void * VAR_6),
  void * VAR_7)
{

 if (((((uint32_t)VAR_1 & (VAR_0-1)) + VAR_2) > VAR_0) ) {
         FUNC_1("apply_func_phys alignment");
 }

 return VAR_3(FUNC_0(VAR_1), VAR_2, VAR_7);
}
