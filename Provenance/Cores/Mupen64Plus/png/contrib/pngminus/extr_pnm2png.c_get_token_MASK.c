
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(FILE *VAR_1, char *VAR_2)
{
  int VAR_3 = 0;
  int VAR_4;


  do
  {
    VAR_4 = FUNC_0(VAR_1);
    if (VAR_4 == '#') {

      do
      {
        VAR_4 = FUNC_0(VAR_1);
      }
      while ((VAR_4 != '\n') && (VAR_4 != '\r') && (VAR_4 != VAR_0));
    }
    if (VAR_4 == VAR_0) break;
    VAR_2[VAR_3] = (unsigned char) VAR_4;
  }
  while ((VAR_2[VAR_3] == '\n') || (VAR_2[VAR_3] == '\r') || (VAR_2[VAR_3] == ' '));


  do
  {
    VAR_4 = FUNC_0(VAR_1);
    if (VAR_4 == VAR_0) break;
    VAR_3++;
    VAR_2[VAR_3] = (unsigned char) VAR_4;
  }
  while ((VAR_2[VAR_3] != '\n') && (VAR_2[VAR_3] != '\r') && (VAR_2[VAR_3] != ' '));

  VAR_2[VAR_3] = '\0';

  return;
}
