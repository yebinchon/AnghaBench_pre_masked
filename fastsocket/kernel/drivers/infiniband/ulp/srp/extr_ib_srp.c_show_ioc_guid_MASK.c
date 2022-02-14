
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {int ioc_guid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 struct srp_target_port* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct srp_target_port *VAR_3 = FUNC_2(FUNC_1(VAR_0));

 return FUNC_3(VAR_2, "0x%016llx\n",
         (unsigned long long) FUNC_0(VAR_3->ioc_guid));
}
