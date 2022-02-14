
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int *,int ) ;

GLboolean FUNC_2 (int VAR_2, char** VAR_3, char** VAR_4, int* VAR_5)
{
  int VAR_6 = 0;
  while (VAR_6 < VAR_2)
  {
    if (!FUNC_0(VAR_3[VAR_6], "-display"))
    {
      if (++VAR_6 >= VAR_2) return VAR_1;
      *VAR_4 = VAR_3[VAR_6++];
    }
    else if (!FUNC_0(VAR_3[VAR_6], "-visual"))
    {
      if (++VAR_6 >= VAR_2) return VAR_1;
      *VAR_5 = (int)FUNC_1(VAR_3[VAR_6++], ((void*)0), 0);
    }
    else
      return VAR_1;

  }
  return VAR_0;
}
