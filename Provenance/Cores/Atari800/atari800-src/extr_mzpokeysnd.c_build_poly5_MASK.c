
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;

__attribute__((used)) static void FUNC_0(void)
{
 unsigned char VAR_1;
 unsigned char VAR_2;
 unsigned char VAR_3 = 1;

 for(VAR_2 = 0; VAR_2 < 31; VAR_2++) {
  VAR_0[VAR_2] = ~VAR_3;
  VAR_1 = ((VAR_3 >> 2) ^ (VAR_3 >> 4)) & 1;
  VAR_3 = ((VAR_3 << 1) & 31) + VAR_1;
 }
}
