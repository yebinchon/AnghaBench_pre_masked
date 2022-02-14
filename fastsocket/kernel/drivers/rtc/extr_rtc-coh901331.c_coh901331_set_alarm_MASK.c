
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {unsigned long enabled; int time; } ;
struct device {int dummy; } ;
struct coh901331_port {int clk; scalar_t__ virtbase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct coh901331_port* FUNC_2 (struct device*) ;
 int FUNC_3 (int *,unsigned long*) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 struct coh901331_port *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;

 FUNC_3(&VAR_3->time, &VAR_5);
 FUNC_1(VAR_4->clk);
 FUNC_4(VAR_5, VAR_4->virtbase + VAR_0);
 FUNC_4(VAR_3->enabled, VAR_4->virtbase + VAR_1);
 FUNC_0(VAR_4->clk);

 return 0;
}
