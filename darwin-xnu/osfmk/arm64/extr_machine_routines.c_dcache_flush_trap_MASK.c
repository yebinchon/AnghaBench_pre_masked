
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int vm_map_size_t ;
typedef int vm_map_address_t ;
typedef scalar_t__ vm_address_t ;
typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_4__ {scalar_t__ recover; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(vm_map_address_t VAR_4, vm_map_size_t VAR_5)
{
 vm_map_address_t VAR_6 = VAR_4 + VAR_5;
 thread_t VAR_7 = FUNC_3();
 vm_offset_t VAR_8 = VAR_7->recover;


 if (FUNC_4(FUNC_2())) {
  if (VAR_6 > VAR_1) {
   FUNC_1(VAR_7, VAR_6 & ((1 << VAR_0) - 1));
  }
 } else {
  if (VAR_6 > VAR_2) {
   FUNC_1(VAR_7, VAR_6 & ((1 << VAR_0) - 1));
  }
 }

 if (VAR_4 > VAR_6) {
  FUNC_1(VAR_7, VAR_4 & ((1 << VAR_0) - 1));
 }


 VAR_7->recover = (vm_address_t)VAR_3;






 FUNC_0(VAR_4, (uint32_t)VAR_5);


 VAR_7->recover = VAR_8;


}
