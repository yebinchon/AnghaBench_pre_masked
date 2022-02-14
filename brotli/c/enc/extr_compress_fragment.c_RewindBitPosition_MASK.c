
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(const size_t VAR_0,
                              size_t* VAR_1, uint8_t* VAR_2) {
  const size_t VAR_3 = VAR_0 & 7;
  const size_t VAR_4 = (1u << VAR_3) - 1;
  VAR_2[VAR_0 >> 3] &= (uint8_t)VAR_4;
  *VAR_1 = VAR_0;
}
