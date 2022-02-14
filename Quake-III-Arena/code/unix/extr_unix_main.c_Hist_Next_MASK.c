
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int field_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

field_t *FUNC_1()
{
  FUNC_0(VAR_1 <= VAR_0);
  FUNC_0(VAR_1 >= 0);
  FUNC_0(VAR_2 >= -1);
  FUNC_0(VAR_2 <= VAR_1);
  if (VAR_2 >= 0)
  {
    VAR_2--;
  }
  if (VAR_2 == -1)
  {
    return ((void*)0);
  }
  return &(VAR_3[VAR_2]);
}
