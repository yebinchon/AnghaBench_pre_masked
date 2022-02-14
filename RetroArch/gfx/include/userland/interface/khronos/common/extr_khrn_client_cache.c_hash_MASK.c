
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (void const*,int,int ) ;
 int FUNC_1 (int*,int,int ) ;

__attribute__((used)) static uint32_t FUNC_2(const void *VAR_0, int VAR_1, int VAR_2)
{
   int VAR_3;




   if (!((size_t)VAR_0 & 3) && !(VAR_1 & 3))
      VAR_3 = FUNC_1((uint32_t *)VAR_0, VAR_1 >> 2, 0);
   else
      VAR_3 = FUNC_0(VAR_0, VAR_1, 0);

   return (VAR_3 & ~0xf) | VAR_2;
}
