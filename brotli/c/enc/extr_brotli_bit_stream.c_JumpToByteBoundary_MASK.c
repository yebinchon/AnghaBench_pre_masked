
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static void FUNC_0(size_t* VAR_0, uint8_t* VAR_1) {
  *VAR_0 = (*VAR_0 + 7u) & ~7u;
  VAR_1[*VAR_0 >> 3] = 0;
}
