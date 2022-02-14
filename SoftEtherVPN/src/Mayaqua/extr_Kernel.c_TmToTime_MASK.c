
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_64t ;
struct tm {int dummy; } ;


 scalar_t__ FUNC_0 (struct tm*) ;

time_64t FUNC_1(struct tm *VAR_0)
{
 time_64t VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == (time_64t)-1)
 {
  return 0;
 }
 return VAR_1;
}
