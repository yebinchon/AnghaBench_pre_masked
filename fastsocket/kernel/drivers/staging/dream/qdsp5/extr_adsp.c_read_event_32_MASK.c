
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int * VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(void *VAR_2, size_t VAR_3)
{
 uint32_t *VAR_4 = VAR_2;
 uint32_t *VAR_5 = VAR_0;
 VAR_3 /= 2;
 if (VAR_3 > VAR_1)
  VAR_3 = VAR_1;
 while (VAR_3--)
  *VAR_4++ = *VAR_5++;
}
