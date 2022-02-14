
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_internal {int iscsi_transport; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct iscsi_internal* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,unsigned long long) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct iscsi_internal *VAR_3 = FUNC_0(VAR_0);
 return FUNC_2(VAR_2, "%llu\n", (unsigned long long)FUNC_1(VAR_3->iscsi_transport));
}
