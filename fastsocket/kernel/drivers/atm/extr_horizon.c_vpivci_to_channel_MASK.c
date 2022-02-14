
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0 (u16 * VAR_2, const short VAR_3, const int VAR_4) {
  unsigned short VAR_5 = 10 - VAR_1;
  if (0 <= VAR_3 && VAR_3 < 1<<VAR_1 && 0 <= VAR_4 && VAR_4 < 1<<VAR_5) {
    *VAR_2 = VAR_3<<VAR_5 | VAR_4;
    return *VAR_2 ? 0 : -VAR_0;
  }
  return -VAR_0;
}
