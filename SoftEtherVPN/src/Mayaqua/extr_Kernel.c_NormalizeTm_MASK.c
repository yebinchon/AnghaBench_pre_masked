
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_64t ;
struct tm {int dummy; } ;


 int FUNC_0 (scalar_t__*,struct tm*) ;
 scalar_t__ FUNC_1 (struct tm*) ;

void FUNC_2(struct tm *VAR_0)
{
 time_64t VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == (time_64t)-1)
 {
  return;
 }

 FUNC_0(&VAR_1, VAR_0);
}
