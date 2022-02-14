
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (uintptr_t,int,uintptr_t,size_t) ;

__attribute__((used)) static bool
FUNC_1(uint32_t *VAR_0, uint32_t *VAR_1,
                     uintptr_t VAR_2, uintptr_t VAR_3, size_t VAR_4)
{
 uint32_t VAR_5 = *VAR_0;
 uint64_t VAR_6 = (VAR_5 & 1) == 1 ? 8 : 4;
 for (uint32_t* VAR_7 = VAR_0 + 1; VAR_7 != VAR_1; ++VAR_7) {
  if (*VAR_7 == 0xFFFFFFFF)
   break;
  FUNC_0(VAR_2 + *VAR_7, VAR_6, VAR_3, VAR_4);
 }
 return 1;
}
