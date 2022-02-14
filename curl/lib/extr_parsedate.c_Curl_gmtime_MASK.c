
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 struct tm* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,struct tm*) ;

CURLcode FUNC_2(time_t VAR_2, struct tm *VAR_3)
{
  const struct tm *VAR_4;




  VAR_4 = FUNC_0(&VAR_2);
  if(VAR_4)
    *VAR_3 = *VAR_4;


  if(!VAR_4)
    return VAR_0;
  return VAR_1;
}
