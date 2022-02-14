
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int eft ;
struct TYPE_8__ {int hour; int minute; int second; int nanosecond; int year; int month; int day; int daylight; scalar_t__ timezone; int resolution; int accuracy; int sets_to_zero; } ;
typedef TYPE_1__ efi_time_t ;
typedef TYPE_1__ efi_time_cap_t ;
typedef int efi_bool_t ;
typedef int cap ;
typedef int alm ;
struct TYPE_9__ {int (* get_wakeup_time ) (int*,int*,TYPE_1__*) ;int (* get_time ) (TYPE_1__*,TYPE_1__*) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_7__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (int*,int*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(char *VAR_3)
{
 efi_time_t VAR_4, VAR_5;
 efi_time_cap_t VAR_6;
 char *VAR_7 = VAR_3;
 efi_bool_t VAR_8, VAR_9;
 unsigned long VAR_10;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 FUNC_0(&VAR_6, 0, sizeof(VAR_6));

 FUNC_1(&VAR_2, VAR_10);

 VAR_1.get_time(&VAR_4, &VAR_6);
 VAR_1.get_wakeup_time(&VAR_8, &VAR_9, &VAR_5);

 FUNC_2(&VAR_2,VAR_10);

 VAR_7 += FUNC_3(VAR_7,
       "Time           : %u:%u:%u.%09u\n"
       "Date           : %u-%u-%u\n"
       "Daylight       : %u\n",
       VAR_4.hour, VAR_4.minute, VAR_4.second, VAR_4.nanosecond,
       VAR_4.year, VAR_4.month, VAR_4.day,
       VAR_4.daylight);

 if (VAR_4.timezone == VAR_0)
  VAR_7 += FUNC_3(VAR_7, "Timezone       : unspecified\n");
 else

  VAR_7 += FUNC_3(VAR_7, "Timezone       : %u\n", VAR_4.timezone);


 VAR_7 += FUNC_3(VAR_7,
       "Alarm Time     : %u:%u:%u.%09u\n"
       "Alarm Date     : %u-%u-%u\n"
       "Alarm Daylight : %u\n"
       "Enabled        : %s\n"
       "Pending        : %s\n",
       VAR_5.hour, VAR_5.minute, VAR_5.second, VAR_5.nanosecond,
       VAR_5.year, VAR_5.month, VAR_5.day,
       VAR_5.daylight,
       VAR_8 == 1 ? "yes" : "no",
       VAR_9 == 1 ? "yes" : "no");

 if (VAR_4.timezone == VAR_0)
  VAR_7 += FUNC_3(VAR_7, "Timezone       : unspecified\n");
 else

  VAR_7 += FUNC_3(VAR_7, "Timezone       : %u\n", VAR_5.timezone);




 VAR_7 += FUNC_3(VAR_7,
       "Resolution     : %u\n"
       "Accuracy       : %u\n"
       "SetstoZero     : %u\n",
        VAR_6.resolution, VAR_6.accuracy, VAR_6.sets_to_zero);

 return VAR_7 - VAR_3;
}
