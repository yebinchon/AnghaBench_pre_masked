
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_page_t ;
typedef int vm_object_t ;
typedef int vm_object_offset_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,int ,int ) ;

vm_page_t
FUNC_3(
 vm_object_t VAR_1,
 vm_object_offset_t VAR_2)
{
 vm_page_t VAR_3;

 FUNC_0(VAR_1);
 VAR_3 = FUNC_1();
 if (VAR_3 == VAR_0)
  return VAR_0;

 FUNC_2(VAR_3, VAR_1, VAR_2);

 return(VAR_3);
}
