
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_64t ;
struct tm {int dummy; } ;
typedef int SYSTEMTIME ;


 int FUNC_0 (struct tm*,int *) ;
 int FUNC_1 (struct tm*) ;

time_64t FUNC_2(SYSTEMTIME *VAR_0)
{
 struct tm VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 FUNC_0(&VAR_1, VAR_0);
 return FUNC_1(&VAR_1);
}
