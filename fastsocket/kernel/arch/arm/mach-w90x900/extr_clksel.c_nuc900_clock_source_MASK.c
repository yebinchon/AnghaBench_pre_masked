
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*,unsigned int) ;
 char* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (unsigned char*,char*) ;

void FUNC_6(struct device *VAR_5, unsigned char *VAR_6)
{
 unsigned int VAR_7;
 const char *VAR_8;

 FUNC_0(!VAR_6);
 VAR_7 = 0;

 FUNC_3(&VAR_4);

 if (VAR_5)
  VAR_8 = FUNC_2(VAR_5);
 else
  VAR_8 = "cpufreq";

 if (FUNC_5(VAR_6, "pll0") == 0)
  VAR_7 = VAR_2;
 else if (FUNC_5(VAR_6, "pll1") == 0)
  VAR_7 = VAR_3;
 else if (FUNC_5(VAR_6, "ext") == 0)
  VAR_7 = VAR_0;
 else if (FUNC_5(VAR_6, "oth") == 0)
  VAR_7 = VAR_1;

 FUNC_1(VAR_8, VAR_7);

 FUNC_4(&VAR_4);
}
