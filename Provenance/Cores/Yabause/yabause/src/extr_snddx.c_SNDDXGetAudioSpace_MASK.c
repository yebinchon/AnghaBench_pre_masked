
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,scalar_t__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

u32 FUNC_1(void)
{
   DWORD VAR_4, VAR_5;
   u32 VAR_6=0;

   if (FUNC_0 (VAR_1, &VAR_4, &VAR_5) != VAR_0)
      return 0;

   if (VAR_3 > VAR_4)
      VAR_6 = VAR_2 - VAR_3 + VAR_4;
   else
      VAR_6 = VAR_4 - VAR_3;


      return (VAR_6 / 2 / 2);


}
