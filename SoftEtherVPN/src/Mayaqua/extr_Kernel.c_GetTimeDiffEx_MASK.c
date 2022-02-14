
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int wYear; } ;
typedef struct tm SYSTEMTIME ;
typedef scalar_t__ INT64 ;
typedef scalar_t__ INT ;


 int FUNC_0 (struct tm*,struct tm*,int) ;
 int FUNC_1 (struct tm*,struct tm*) ;
 scalar_t__ FUNC_2 (struct tm*) ;
 int FUNC_3 (struct tm*,struct tm*) ;
 scalar_t__ FUNC_4 (struct tm*) ;
 struct tm* FUNC_5 (scalar_t__*) ;
 int FUNC_6 (scalar_t__*,struct tm*) ;
 struct tm* FUNC_7 (scalar_t__*) ;
 int FUNC_8 (scalar_t__*,struct tm*) ;
 scalar_t__ FUNC_9 (struct tm*) ;

INT64 FUNC_10(SYSTEMTIME *VAR_0, bool VAR_1)
{
 time_t VAR_2;
 struct tm VAR_3, VAR_4;
 SYSTEMTIME VAR_5;
 struct tm VAR_6;
 SYSTEMTIME VAR_7, VAR_8;
 INT64 VAR_9;

 FUNC_0(&VAR_5, VAR_0, sizeof(SYSTEMTIME));

 if (sizeof(time_t) == 4)
 {
  if (VAR_5.wYear >= 2038)
  {

   VAR_5.wYear = 2037;
  }
 }

 FUNC_1(&VAR_6, &VAR_5);
 if (VAR_1 == 0)
 {
  VAR_2 = (time_t)FUNC_4(&VAR_6);
 }
 else
 {
  VAR_2 = FUNC_9(&VAR_6);
 }

 if (VAR_2 == (time_t)-1)
 {
  return 0;
 }


 FUNC_0(&VAR_3, FUNC_7(&VAR_2), sizeof(struct tm));
 FUNC_0(&VAR_4, FUNC_5(&VAR_2), sizeof(struct tm));





 FUNC_3(&VAR_7, &VAR_3);
 FUNC_3(&VAR_8, &VAR_4);

 VAR_9 = (INT)FUNC_2(&VAR_7) - (INT)FUNC_2(&VAR_8);

 return VAR_9;
}
