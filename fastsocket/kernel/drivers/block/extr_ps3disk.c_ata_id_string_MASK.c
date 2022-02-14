
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static void FUNC_0(const u16 *VAR_0, unsigned char *VAR_1, unsigned int VAR_2,
     unsigned int VAR_3)
{
 unsigned int VAR_4;

 while (VAR_3 > 0) {
  VAR_4 = VAR_0[VAR_2] >> 8;
  *VAR_1 = VAR_4;
  VAR_1++;

  VAR_4 = VAR_0[VAR_2] & 0xff;
  *VAR_1 = VAR_4;
  VAR_1++;

  VAR_2++;
  VAR_3 -= 2;
 }
}
