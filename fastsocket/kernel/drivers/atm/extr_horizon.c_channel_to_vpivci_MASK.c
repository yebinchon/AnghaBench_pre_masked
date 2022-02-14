
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short u16 ;


 int VAR_0 ;
 unsigned short const VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_0 (const u16 VAR_3, short * VAR_4, int * VAR_5) {
  unsigned short VAR_6 = 10 - VAR_2;
  if ((VAR_3 & VAR_1) == VAR_3) {
    *VAR_5 = VAR_3 & ((~0)<<VAR_6);
    *VAR_4 = VAR_3 >> VAR_6;
    return VAR_3 ? 0 : -VAR_0;
  }
  return -VAR_0;
}
