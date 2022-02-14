
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;


 size_t FUNC_0 (scalar_t__*) ;
 scalar_t__* VAR_0 ;

u32 FUNC_1(unsigned long VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_1 == (u32)VAR_0[VAR_2])
   return VAR_2 + 1;

 return 0;
}
