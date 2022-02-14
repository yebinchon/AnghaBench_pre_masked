
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int,int*) ;
 int FUNC_1 (char*,int) ;

vm_size_t
FUNC_2(vm_size_t VAR_2)
{
 vm_size_t VAR_3;
 if (FUNC_0(VAR_2, 4 * VAR_1, &VAR_3)) {
  FUNC_1("allocation size overflow (%lu)", VAR_2);
 }


 VAR_2 += VAR_0;


 VAR_2 += 8 - (VAR_2 % 8);

 return VAR_2;
}
