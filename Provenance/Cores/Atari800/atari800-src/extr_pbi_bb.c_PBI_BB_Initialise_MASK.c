
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,char*) ;

int FUNC_3(int *VAR_1, char *VAR_2[])
{
 int VAR_3, VAR_4;
 for (VAR_3 = VAR_4 = 1; VAR_3 < *VAR_1; VAR_3++) {
  if (FUNC_2(VAR_2[VAR_3], "-bb") == 0) {
   FUNC_1();
  }
  else {
    if (FUNC_2(VAR_2[VAR_3], "-help") == 0) {
    FUNC_0("\t-bb              Emulate the CSS Black Box");
   }
   VAR_2[VAR_4++] = VAR_2[VAR_3];
  }
 }
 *VAR_1 = VAR_4;

 return VAR_0;
}
