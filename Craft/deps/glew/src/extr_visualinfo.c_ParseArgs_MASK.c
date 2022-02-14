
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int *,int ) ;
 int VAR_5 ;

GLboolean FUNC_2 (int VAR_6, char** VAR_7)
{
  int VAR_8 = 0;
  while (VAR_8 < VAR_6)
  {
    if (!FUNC_0(VAR_7[VAR_8], "-display"))
    {
      if (++VAR_8 >= VAR_6) return VAR_1;
      VAR_2 = VAR_7[VAR_8];
    }
    else if (!FUNC_0(VAR_7[VAR_8], "-visual"))
    {
      if (++VAR_8 >= VAR_6) return VAR_1;
      VAR_5 = (int)FUNC_1(VAR_7[VAR_8], ((void*)0), 0);
    }
    else if (!FUNC_0(VAR_7[VAR_8], "-h"))
    {
      return VAR_1;
    }
    else
      return VAR_1;

    VAR_8++;
  }
  return VAR_0;
}
