
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;

__attribute__((used)) static void FUNC_0(void)
{
 unsigned int VAR_1;
 unsigned int VAR_2;
 unsigned int VAR_3 = 1;

 for(VAR_2 = 0; VAR_2 < 131071; VAR_2++) {
  VAR_0[VAR_2] = (unsigned char) VAR_3;
  VAR_1 = ((VAR_3 >> 11) ^ (VAR_3 >> 16)) & 1;
  VAR_3 = ((VAR_3 << 1) & 131071) + VAR_1;
 }
}
