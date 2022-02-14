
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int,int ) ;

__attribute__((used)) static u32 FUNC_4(bool VAR_1)
{
   s64 VAR_2;
   int VAR_3;
   int VAR_4;

   VAR_3 = FUNC_2(VAR_0);

   FUNC_3(&VAR_2, 2, 0);
   VAR_4 = 0x6C000 + VAR_2 +
                         (FUNC_1() > FUNC_0(2, 49, 0) ? (VAR_1 ? 0x2000 : 0x1000) : 0x0);

   return (FUNC_1() > FUNC_0(2, 40, 0) ? 0xE0000000 : 0xF0000000)
          + (VAR_1 ? 0x10000000 : 0x08000000)
          - (VAR_3 - VAR_4)
          - 0x1000;

}
