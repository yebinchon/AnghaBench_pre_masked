
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(int VAR_0, int VAR_1)
{
 static int VAR_2[] = {
  65535, 32000, 17914, 8166, 4352, 2002, 1492, 1006, 508, 296,
  68, 0
 };
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < (sizeof VAR_2) / (sizeof VAR_2[0]); VAR_3++) {
  if (VAR_0 >= VAR_2[VAR_3])
   break;
 }

 if (VAR_1 < 0) {
  if (VAR_3 == 0) {
   return 0;
  } else {
   return VAR_2[VAR_3 - 1];
  }
 } else {
  if (VAR_2[VAR_3] == 0) {
   return 0;
  } else if(VAR_0 > VAR_2[VAR_3]) {
   return VAR_2[VAR_3];
  } else {
   return VAR_2[VAR_3 + 1];
  }
 }
}
