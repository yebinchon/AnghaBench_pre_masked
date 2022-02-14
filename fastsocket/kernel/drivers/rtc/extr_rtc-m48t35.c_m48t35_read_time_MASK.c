
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;
struct m48t35_priv {int lock; TYPE_1__* reg; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int control; int year; int month; int date; int hour; int min; int sec; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 struct m48t35_priv* FUNC_1 (struct device*) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (struct rtc_time*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct m48t35_priv *VAR_3 = FUNC_1(VAR_1);
 u8 VAR_4;







 FUNC_4(&VAR_3->lock);
 VAR_4 = FUNC_2(&VAR_3->reg->control);
 FUNC_6(VAR_4 | VAR_0, &VAR_3->reg->control);
 VAR_2->tm_sec = FUNC_2(&VAR_3->reg->sec);
 VAR_2->tm_min = FUNC_2(&VAR_3->reg->min);
 VAR_2->tm_hour = FUNC_2(&VAR_3->reg->hour);
 VAR_2->tm_mday = FUNC_2(&VAR_3->reg->date);
 VAR_2->tm_mon = FUNC_2(&VAR_3->reg->month);
 VAR_2->tm_year = FUNC_2(&VAR_3->reg->year);
 FUNC_6(VAR_4, &VAR_3->reg->control);
 FUNC_5(&VAR_3->lock);

 VAR_2->tm_sec = FUNC_0(VAR_2->tm_sec);
 VAR_2->tm_min = FUNC_0(VAR_2->tm_min);
 VAR_2->tm_hour = FUNC_0(VAR_2->tm_hour);
 VAR_2->tm_mday = FUNC_0(VAR_2->tm_mday);
 VAR_2->tm_mon = FUNC_0(VAR_2->tm_mon);
 VAR_2->tm_year = FUNC_0(VAR_2->tm_year);





 VAR_2->tm_year += 70;
 if (VAR_2->tm_year <= 69)
  VAR_2->tm_year += 100;

 VAR_2->tm_mon--;
 return FUNC_3(VAR_2);
}
