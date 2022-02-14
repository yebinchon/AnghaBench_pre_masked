
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 uint32_t *VAR_3 __attribute__((align_value(1))) = VAR_0;
 const uint32_t *VAR_4 __attribute__((align_value(1))) = VAR_1;

 FUNC_1(VAR_2 % sizeof(uint32_t) == 0);

 VAR_2 = VAR_2 / sizeof(uint32_t);
 for (size_t VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_3[VAR_2-VAR_5-1] = FUNC_0(VAR_4[VAR_5]);
 }
}
