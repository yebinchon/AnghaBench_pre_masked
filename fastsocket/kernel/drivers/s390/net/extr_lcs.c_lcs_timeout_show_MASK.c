
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_card {int lancmd_timeout; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct lcs_card* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct lcs_card *VAR_3;

 VAR_3 = FUNC_0(VAR_0);

 return VAR_3 ? FUNC_1(VAR_2, "%u\n", VAR_3->lancmd_timeout) : 0;
}
