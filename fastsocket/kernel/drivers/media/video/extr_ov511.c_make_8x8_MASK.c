
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void
FUNC_0(unsigned char *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 unsigned char *VAR_3 = VAR_1;
 int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  VAR_3 = VAR_1;
  for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
   *VAR_3++ = *VAR_0++;
  }
  VAR_1 += VAR_2;
 }
}
