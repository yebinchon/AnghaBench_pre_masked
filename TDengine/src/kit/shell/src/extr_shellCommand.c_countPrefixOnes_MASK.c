
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(char VAR_0) {
  unsigned char VAR_1 = 127;
  VAR_1 = ~VAR_1;
  int VAR_2 = 0;
  while ((VAR_0 & VAR_1) != 0) {
    VAR_2++;
    VAR_0 <<= 1;
  }

  return VAR_2;
}
