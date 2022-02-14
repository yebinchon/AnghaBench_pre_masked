
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(char *VAR_2, struct kernel_param *VAR_3)
{
 if (VAR_1 == VAR_0)
  return FUNC_0(VAR_2, "CLOCK_MONOTONIC");
 else
  return FUNC_0(VAR_2, "CLOCK_REALTIME");
}
