
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_64t ;
struct tm {int dummy; } ;


 int FUNC_0 (struct tm*,int) ;
 int FUNC_1 (int *,struct tm*) ;

void FUNC_2(struct tm *VAR_0, time_64t VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, sizeof(struct tm));
 FUNC_1(&VAR_1, VAR_0);
}
