
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 uintptr_t FUNC_0 (uintptr_t) ;

__attribute__((used)) static inline uintptr_t
FUNC_1(uintptr_t *VAR_0, int VAR_1, int VAR_2, bool VAR_3)
{
 if (VAR_2 < VAR_1) {
  if (VAR_3) {
   return FUNC_0(VAR_0[VAR_2]);
  } else {
   return VAR_0[VAR_2];
  }
 } else {
  return 0;
 }
}
