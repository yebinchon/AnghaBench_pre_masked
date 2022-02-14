
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;



__attribute__((used)) static inline void FUNC_0(uint64_t VAR_0, uint64_t *VAR_1, uint64_t *VAR_2, uint32_t VAR_3) {
 uint32_t VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   if (VAR_0 < VAR_2[VAR_4]) {
    VAR_1[VAR_4]++;
    break;
   }
  }
}
