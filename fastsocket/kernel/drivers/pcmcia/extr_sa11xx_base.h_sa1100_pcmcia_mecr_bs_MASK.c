
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned int FUNC_0(unsigned int VAR_0,
       unsigned int VAR_1){
  unsigned int VAR_2 = ((VAR_0 * VAR_1) / 6) - 1000000;
  return (VAR_2 / 1000000) + (((VAR_2 % 1000000) == 0) ? 0 : 1);
}
