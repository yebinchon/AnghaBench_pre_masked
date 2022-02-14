
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int id; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct rtc_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 struct rtc_device* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_2)
{
 struct rtc_device *VAR_3 = FUNC_4(VAR_2);
 FUNC_2(&VAR_0);
 FUNC_0(&VAR_1, VAR_3->id);
 FUNC_3(&VAR_0);
 FUNC_1(VAR_3);
}
