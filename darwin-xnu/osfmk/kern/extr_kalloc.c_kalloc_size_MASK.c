
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_map_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,void*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (void*,int *) ;

vm_size_t
FUNC_4(
  void *VAR_4)
{
 vm_map_t VAR_5;
 vm_size_t VAR_6;

 VAR_6 = FUNC_3(VAR_4, ((void*)0));
 if (VAR_6) {
  return VAR_6;
 }
 if (((vm_offset_t)VAR_4 >= VAR_2) && ((vm_offset_t)VAR_4 < VAR_1)) {
  VAR_5 = VAR_0;
 } else {
  VAR_5 = VAR_3;
 }
 FUNC_0(VAR_5);
 VAR_6 = FUNC_1(VAR_5, VAR_4);
 FUNC_2(VAR_5);
 return VAR_6;
}
