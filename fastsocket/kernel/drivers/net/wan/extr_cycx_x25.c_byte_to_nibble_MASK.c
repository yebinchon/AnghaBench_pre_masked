
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;



__attribute__((used)) static int FUNC_0(u8 *VAR_0, u8 *VAR_1, char *VAR_2)
{
 int VAR_3 = 0;

 if (*VAR_2 && *VAR_0) {
  VAR_1[VAR_3] |= *VAR_0++ - '0';
  *VAR_2 = 0;
  ++VAR_3;
 }

 while (*VAR_0) {
  VAR_1[VAR_3] = (*VAR_0 - '0') << 4;
  if (*(VAR_0 + 1))
   VAR_1[VAR_3] |= *(VAR_0 + 1) - '0';
  else {
   *VAR_2 = 1;
   break;
  }
  ++VAR_3;
  VAR_0 += 2;
 }

 return VAR_3;
}
