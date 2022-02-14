
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_map_t ;
typedef int vm_map_address_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

kern_return_t
FUNC_5(
 vm_map_t VAR_2,
 void *VAR_3,
 vm_map_address_t VAR_4,
 vm_size_t VAR_5)
{
 kern_return_t VAR_6 = VAR_1;

 if(FUNC_1() == VAR_2) {
  if (FUNC_0(VAR_3, VAR_4, VAR_5)) {
   VAR_6 = VAR_0;
  }
 } else {
  vm_map_t VAR_7;




  FUNC_3(VAR_2);
  VAR_7 = FUNC_4(VAR_2);
  if (FUNC_0(VAR_3, VAR_4, VAR_5)) {
   VAR_6 = VAR_0;
  }
  FUNC_4(VAR_7);
  FUNC_2(VAR_2);
 }
 return VAR_6;
}
