
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_attr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*) ;

int
FUNC_1 (const pthread_attr_t * VAR_3, int *VAR_4)
{
  if (FUNC_0 (VAR_3) != 0 || VAR_4 == ((void*)0))
    {
      return VAR_0;
    }





  if (VAR_4 <= (int *) VAR_1)
    {
      return VAR_0;
    }

  *VAR_4 = VAR_2;

  return 0;
}
