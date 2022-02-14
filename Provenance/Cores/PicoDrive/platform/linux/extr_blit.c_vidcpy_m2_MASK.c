
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(void *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
 unsigned char *VAR_4 = VAR_0, *VAR_5 = VAR_1;
 int VAR_6, VAR_7;

 if (VAR_2) {
  for (VAR_6 = 0; VAR_6 < 224; VAR_6++)
  {
   VAR_5 += 8;
   VAR_4 += 32;
   for (VAR_7 = 0; VAR_7 < 256; VAR_7++)
    *VAR_4++ = *VAR_5++;
   VAR_5 += 64;
   VAR_4 += 32;
  }
 } else {
  for (VAR_6 = 0; VAR_6 < 224; VAR_6++)
  {
   VAR_5 += 8;
   for (VAR_7 = 0; VAR_7 < 320; VAR_7++)
    *VAR_4++ = *VAR_5++;
  }
 }
}
