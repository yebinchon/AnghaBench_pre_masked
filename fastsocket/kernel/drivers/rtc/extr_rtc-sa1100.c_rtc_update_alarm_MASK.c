
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtc_time*,struct rtc_time*,struct rtc_time*) ;
 int FUNC_1 (unsigned long,struct rtc_time*) ;
 int FUNC_2 (struct rtc_time*,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct rtc_time *VAR_6)
{
 struct rtc_time VAR_7, VAR_8;
 unsigned long VAR_9, VAR_10;
 int VAR_11;

 do {
  VAR_9 = VAR_0;
  FUNC_1(VAR_9, &VAR_8);
  FUNC_0(&VAR_7, &VAR_8, VAR_6);
  VAR_11 = FUNC_2(&VAR_7, &VAR_10);
  if (VAR_11 != 0)
   break;

  VAR_2 = VAR_2 & (VAR_5|VAR_4|VAR_3);
  VAR_1 = VAR_10;
 } while (VAR_9 != VAR_0);

 return VAR_11;
}
