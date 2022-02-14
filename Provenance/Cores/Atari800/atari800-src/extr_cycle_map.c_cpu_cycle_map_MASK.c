
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(char *VAR_1, int *VAR_2, int *VAR_3)
{
 int VAR_4;
 char VAR_5[VAR_0];
 int VAR_6;
 int VAR_7 = 0;
 for (VAR_4 = 0; VAR_4 <= 113; VAR_4++)
  VAR_5[VAR_4] = VAR_1[VAR_4];
 for (VAR_4 = 114; VAR_4 < VAR_0; VAR_4++)
  VAR_5[VAR_4] = '.';
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_2[VAR_4]=-1;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  char VAR_8 = VAR_5[VAR_6];
  VAR_3[VAR_6] = VAR_7;
  if (VAR_8 != 'R' && VAR_8 != 'S' && VAR_8 != 'F' && VAR_8 != 'I') {

   VAR_2[VAR_7] = VAR_6;
   VAR_7++;
  }
 }
}
