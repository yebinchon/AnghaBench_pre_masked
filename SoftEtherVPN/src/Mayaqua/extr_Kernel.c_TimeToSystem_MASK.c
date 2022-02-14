
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_64t ;
struct tm {int dummy; } ;
typedef int SYSTEMTIME ;


 int FUNC_0 (struct tm*,int ) ;
 int FUNC_1 (int *,struct tm*) ;

void FUNC_2(SYSTEMTIME *VAR_0, time_64t VAR_1)
{
 struct tm VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(&VAR_2, VAR_1);
 FUNC_1(VAR_0, &VAR_2);
}
