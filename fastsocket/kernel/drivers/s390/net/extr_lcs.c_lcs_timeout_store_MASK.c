
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_card {int lancmd_timeout; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct lcs_card* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char*,int*) ;

__attribute__((used)) static ssize_t
FUNC_2 (struct device *VAR_0, struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
        struct lcs_card *VAR_4;
        int VAR_5;

 VAR_4 = FUNC_0(VAR_0);

        if (!VAR_4)
                return 0;

        FUNC_1(VAR_2, "%u", &VAR_5);

        VAR_4->lancmd_timeout = VAR_5;

        return VAR_3;

}
