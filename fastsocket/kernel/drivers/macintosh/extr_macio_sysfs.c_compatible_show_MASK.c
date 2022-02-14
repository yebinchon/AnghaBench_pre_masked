
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_device {int node; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct of_device ofdev; } ;


 char* FUNC_0 (int ,char*,int*) ;
 scalar_t__ FUNC_1 (char*,char*,char const*) ;
 int FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4 (struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct of_device *VAR_3;
 const char *VAR_4;
 int VAR_5;
 int VAR_6 = 0;

 VAR_3 = &FUNC_3 (VAR_0)->ofdev;
 VAR_4 = FUNC_0(VAR_3->node, "compatible", &VAR_5);
 if (!VAR_4) {
  *VAR_2 = '\0';
  return 0;
 }
 while (VAR_5 > 0) {
  int VAR_7;
  VAR_6 += FUNC_1 (VAR_2, "%s\n", VAR_4);
  VAR_2 += VAR_6;
  VAR_7 = FUNC_2 (VAR_4) + 1;
  VAR_4 += VAR_7;
  VAR_5 -= VAR_7;
 }

 return VAR_6;
}
