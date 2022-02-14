
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;


 size_t VAR_0 ;
 int FUNC_0 (size_t*,size_t) ;

__attribute__((used)) static void
FUNC_1(uint32_t VAR_1, size_t VAR_2, uint32_t *VAR_3)
{
 uint32_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3[VAR_4] = VAR_0;
 }

 if (VAR_1 * sizeof(uint32_t) < VAR_2) {
  FUNC_0(&VAR_3[VAR_1], VAR_2 - VAR_1 * sizeof(uint32_t));
 }
}
