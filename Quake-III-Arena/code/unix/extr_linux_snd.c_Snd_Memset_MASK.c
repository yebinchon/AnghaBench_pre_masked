
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,int const,size_t const) ;
 int VAR_0 ;

void FUNC_1 (void* VAR_1, const int VAR_2, const size_t VAR_3)
{
  int *VAR_4;
  int VAR_5, VAR_6;

  if (!VAR_0)
  {
    FUNC_0(VAR_1,VAR_2,VAR_3);
    return;
  }
  VAR_6 = VAR_3 / sizeof(int);
  VAR_4 = (int*)VAR_1;
  for(VAR_5=0; VAR_5<VAR_6; VAR_5++)
  {
    VAR_4[VAR_5] = VAR_2;
  }
}
