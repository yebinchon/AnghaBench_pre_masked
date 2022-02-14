
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int thread_t ;
typedef int thread_state_t ;
typedef int mach_vm_offset_t ;
typedef int load_return_t ;
struct TYPE_3__ {int is_64bit_data; } ;
typedef TYPE_1__ load_result_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int ,int,int *,int*,int ) ;

__attribute__((used)) static
load_return_t
FUNC_1(
 thread_t VAR_5,
 uint32_t *VAR_6,
 uint32_t VAR_7,
 mach_vm_offset_t *VAR_8,
 int *VAR_9,
 load_result_t *VAR_10
)
{
 kern_return_t VAR_11;
 uint32_t VAR_12;
 int VAR_13;
 uint32_t VAR_14;

 while (VAR_7 > 0) {
  VAR_13 = *VAR_6++;
  VAR_12 = *VAR_6++;
  if (VAR_4-2 < VAR_12 ||
      VAR_4/sizeof(uint32_t) < VAR_12+2)
   return (VAR_1);
  VAR_14 = (VAR_12+2)*sizeof(uint32_t);
  if (VAR_14 > VAR_7)
   return(VAR_1);
  VAR_7 -= VAR_14;






  VAR_11 = FUNC_0(VAR_5, VAR_13, (thread_state_t)VAR_6, VAR_12, VAR_8, VAR_9, VAR_10->is_64bit_data);
  if (VAR_11 != VAR_0) {
   return(VAR_2);
  }
  VAR_6 += VAR_12;
 }
 return(VAR_3);
}
