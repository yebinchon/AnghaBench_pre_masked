
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(uint32_t VAR_0, uint32_t VAR_1, uint32_t VAR_2,
     uint32_t *VAR_3, uint32_t *VAR_4,
     uint32_t *VAR_5, uint32_t *VAR_6) {
 if (VAR_0 > 3 * VAR_2) {
  *VAR_3 = 0;
  *VAR_4 = VAR_0 - 1;
  *VAR_5 = 0;
  *VAR_6 = 0;
 } else if (VAR_0 == 3 * VAR_2) {
  *VAR_3 = 0;
  *VAR_4 = VAR_0;
  *VAR_5 = 0;
  *VAR_6 = 1;
 } else if (VAR_0 > VAR_2 && VAR_0 < 3 * VAR_2) {
  *VAR_3 = -1;
  *VAR_4 = VAR_0;
  *VAR_5 = 1;
  *VAR_6 = 1;
 } else if (VAR_0 == VAR_2) {
  *VAR_3 = -1;
  *VAR_4 = VAR_0 + 1;
  *VAR_5 = 1;
  *VAR_6 = 2;
 } else {
  *VAR_3 = -2;
  *VAR_4 = VAR_0 + 1;
  *VAR_5 = 2;
  *VAR_6 = 2;
 }
 *VAR_3 += VAR_1;
 *VAR_4 += VAR_1;
}
