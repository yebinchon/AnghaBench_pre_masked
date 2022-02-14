
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,...) ;

void FUNC_3(struct device *VAR_0, long VAR_1)
{
 if (!VAR_0 || VAR_1 < -1) {
  FUNC_0(1);
  return;
 };

 if (VAR_1 == -1)
  FUNC_2("OMAP PM: remove max MPU wakeup latency constraint: "
    "dev %s\n", FUNC_1(VAR_0));
 else
  FUNC_2("OMAP PM: add max MPU wakeup latency constraint: "
    "dev %s, t = %ld usec\n", FUNC_1(VAR_0), VAR_1);
}
