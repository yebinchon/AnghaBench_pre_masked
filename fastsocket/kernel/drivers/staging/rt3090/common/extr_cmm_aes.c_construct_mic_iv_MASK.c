
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(
 unsigned char *VAR_0,
 int VAR_1,
 int VAR_2,
 unsigned char *VAR_3,
 unsigned int VAR_4,
 unsigned char *VAR_5)
{
 int VAR_6;

 VAR_0[0] = 0x59;
 if (VAR_1 && VAR_2)
  VAR_0[1] = VAR_3[30] & 0x0f;
 if (VAR_1 && !VAR_2)
  VAR_0[1] = VAR_3[24] & 0x0f;
 if (!VAR_1)
  VAR_0[1] = 0x00;
 for (VAR_6 = 2; VAR_6 < 8; VAR_6++)
  VAR_0[VAR_6] = VAR_3[VAR_6 + 8];




  for (VAR_6 = 8; VAR_6 < 14; VAR_6++)
   VAR_0[VAR_6] = VAR_5[13 - VAR_6];

 VAR_6 = (VAR_4 / 256);
 VAR_6 = (VAR_4 % 256);
 VAR_0[14] = (unsigned char) (VAR_4 / 256);
 VAR_0[15] = (unsigned char) (VAR_4 % 256);

}
