
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 size_t FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (scalar_t__) ;

uint64_t
FUNC_3(char *VAR_3)
{
 vm_offset_t VAR_4;

 if (!FUNC_0(VAR_3))
  return (0);
 VAR_4 = VAR_2[FUNC_1(VAR_3 - (char *)VAR_1)];

 if (VAR_4 == 0)
  return (0);
 return ((uint64_t)(FUNC_2(VAR_4) | ((uint64_t)VAR_3 & VAR_0)));
}
