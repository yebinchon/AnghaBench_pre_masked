
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

void FUNC_3 (const char* VAR_1)
{
  char VAR_2[80];
  int VAR_3=0;
  char* VAR_4=0;

  VAR_2[79] = '\0';
  while (*VAR_1)
  {
    VAR_2[VAR_3++] = *VAR_1;
    if(*VAR_1 == ' ')
    {
      if (*(VAR_1+1) != '\0') {
 VAR_2[VAR_3-1] = ',';
 VAR_2[VAR_3] = ' ';
 VAR_4 = &VAR_2[VAR_3++];
      }
      else
      {
 VAR_2[VAR_3-1] = '\0';
      }
    }
    if(VAR_3 > 80 - 5)
    {
      *VAR_4 = VAR_2[VAR_3] = '\0';
      FUNC_0(VAR_0, "    %s\n", VAR_2);
      VAR_4++;
      VAR_3 = (int)FUNC_2(VAR_4);
      FUNC_1(VAR_2, VAR_4);
    }
    VAR_1++;
  }
  VAR_2[VAR_3] = '\0';
  FUNC_0(VAR_0, "    %s.\n", VAR_2);
}
