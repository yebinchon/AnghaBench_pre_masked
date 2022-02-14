
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const unsigned char *VAR_0, int VAR_1)
{
 const unsigned char *VAR_2, *VAR_3;


 for (VAR_2 = VAR_0, VAR_3 = VAR_0 + VAR_1 - 3; VAR_2 <= VAR_3; VAR_2++)
 {
  int VAR_4;
  if (VAR_2[0] != 0xff)
   continue;
  VAR_4 = VAR_2[1];
  if ((VAR_4 & 0xf8) != 0xf8 ||
      (VAR_4 & 6) == 0) {
   VAR_2++; continue;
  }
  VAR_4 = VAR_2[2];
  if ((VAR_4 & 0xf0) < 0x20 || (VAR_4 & 0xf0) == 0xf0 ||
      (VAR_4 & 0x0c) != 0) {
   continue;
  }

  return VAR_2 - VAR_0;
 }

 return -1;
}
