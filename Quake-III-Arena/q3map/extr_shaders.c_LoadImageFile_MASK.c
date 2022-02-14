
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef int byte ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,int **) ;
 int FUNC_2 (char*,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;

byte* FUNC_4(char *VAR_2, qboolean *VAR_3)
{
  byte *VAR_4 = ((void*)0);
  int VAR_5 = 0;
  *VAR_3 = VAR_1;
  if (FUNC_0(VAR_2))
  {
    FUNC_1(VAR_2, &VAR_4);
  }






  if ( VAR_4 == ((void*)0))
  {
    VAR_5 = FUNC_3(VAR_2);
    VAR_2[VAR_5-3] = 'j';
    VAR_2[VAR_5-2] = 'p';
    VAR_2[VAR_5-1] = 'g';
    if (FUNC_0(VAR_2))
    {
      FUNC_1(VAR_2, &VAR_4);
    }






    if ( VAR_4 )
    {
      *VAR_3 = VAR_0;
    }
  }
  return VAR_4;
}
