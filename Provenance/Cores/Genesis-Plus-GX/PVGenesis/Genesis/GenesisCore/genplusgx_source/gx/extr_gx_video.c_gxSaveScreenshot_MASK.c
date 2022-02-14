
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gx_texture ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(char *VAR_0)
{

  gx_texture VAR_1;
  FUNC_2(&VAR_1);


  FILE *VAR_2 = FUNC_1(VAR_0,"wb");
  if (VAR_2)
  {

    FUNC_3(&VAR_1,VAR_2);
    FUNC_0(VAR_2);
  }
}
