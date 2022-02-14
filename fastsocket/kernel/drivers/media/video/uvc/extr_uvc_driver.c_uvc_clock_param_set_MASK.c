
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(const char *VAR_4, struct kernel_param *VAR_5)
{
 if (FUNC_2(VAR_4, "clock_", FUNC_1("clock_")) == 0)
  VAR_4 += FUNC_1("clock_");

 if (FUNC_0(VAR_4, "monotonic") == 0)
  VAR_3 = VAR_0;
 else if (FUNC_0(VAR_4, "realtime") == 0)
  VAR_3 = VAR_1;
 else
  return -VAR_2;

 return 0;
}
