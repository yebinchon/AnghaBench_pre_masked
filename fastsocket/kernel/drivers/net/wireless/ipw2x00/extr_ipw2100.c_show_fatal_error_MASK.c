
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_priv {int fatal_error; int* fatal_errors; int fatal_index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct ipw2100_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct ipw2100_priv *VAR_4 = FUNC_0(VAR_1);
 char *VAR_5 = VAR_3;
 int VAR_6;

 if (VAR_4->fatal_error)
  VAR_5 += FUNC_1(VAR_5, "0x%08X\n", VAR_4->fatal_error);
 else
  VAR_5 += FUNC_1(VAR_5, "0\n");

 for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++) {
  if (!VAR_4->fatal_errors[(VAR_4->fatal_index - VAR_6) %
     VAR_0])
   continue;

  VAR_5 += FUNC_1(VAR_5, "%d. 0x%08X\n", VAR_6,
          VAR_4->fatal_errors[(VAR_4->fatal_index - VAR_6) %
        VAR_0]);
 }

 return VAR_5 - VAR_3;
}
