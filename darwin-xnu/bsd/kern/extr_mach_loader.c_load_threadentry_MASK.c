
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int thread_t ;
typedef int thread_state_t ;
typedef int mach_vm_offset_t ;
typedef int load_return_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int,int ,int,int *) ;

__attribute__((used)) static
load_return_t
FUNC_1(
 thread_t VAR_6,
 uint32_t *VAR_7,
 uint32_t VAR_8,
 mach_vm_offset_t *VAR_9
)
{
 kern_return_t VAR_10;
 uint32_t VAR_11;
 int VAR_12;
 uint32_t VAR_13;




 *VAR_9 = VAR_4;
 while (VAR_8 > 0) {
  VAR_12 = *VAR_7++;
  VAR_11 = *VAR_7++;
  if (VAR_5-2 < VAR_11 ||
      VAR_5/sizeof(uint32_t) < VAR_11+2)
   return (VAR_1);
  VAR_13 = (VAR_11+2)*sizeof(uint32_t);
  if (VAR_13 > VAR_8)
   return(VAR_1);
  VAR_8 -= VAR_13;





  VAR_10 = FUNC_0(VAR_6, VAR_12, (thread_state_t)VAR_7, VAR_11, VAR_9);
  if (VAR_10 != VAR_0) {
   return(VAR_2);
  }
  VAR_7 += VAR_11;
 }
 return(VAR_3);
}
