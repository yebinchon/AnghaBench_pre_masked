
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int,int,int ,int ,int ) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (unsigned long,struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_time *VAR_2)
{
 unsigned long VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_0, 1, 1, 0, 0, 0);
 VAR_4 = FUNC_1();

 FUNC_2(VAR_3 + VAR_4, VAR_2);

 return 0;
}
