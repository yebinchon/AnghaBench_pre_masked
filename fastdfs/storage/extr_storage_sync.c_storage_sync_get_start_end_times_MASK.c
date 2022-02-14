
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct tm {scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct TYPE_4__ {scalar_t__ hour; scalar_t__ minute; } ;
typedef TYPE_1__ TimeInfo ;


 int FUNC_0 (int*,struct tm*) ;
 int FUNC_1 (struct tm*) ;

__attribute__((used)) static void FUNC_2(time_t VAR_0, const TimeInfo *VAR_1, const TimeInfo *VAR_2, time_t *VAR_3, time_t *VAR_4)


{
 struct tm VAR_5;


 FUNC_0(&VAR_0, &VAR_5);
 VAR_5.tm_sec = 0;






 VAR_5.tm_hour = VAR_1->hour;
 VAR_5.tm_min = VAR_1->minute;
 *VAR_3 = FUNC_1(&VAR_5);


 if (VAR_2->hour < VAR_1->hour || (VAR_2->hour == VAR_1->hour && VAR_2->minute < VAR_1->minute))

 {
  VAR_0 += 24 * 3600;
  FUNC_0(&VAR_0, &VAR_5);
  VAR_5.tm_sec = 0;
 }

 VAR_5.tm_hour = VAR_2->hour;
 VAR_5.tm_min = VAR_2->minute;
 *VAR_4 = FUNC_1(&VAR_5);
}
