
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pkey; } ;
struct srp_target_port {TYPE_1__ path; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 struct srp_target_port* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct srp_target_port *VAR_3 = FUNC_2(FUNC_1(VAR_0));

 return FUNC_3(VAR_2, "0x%04x\n", FUNC_0(VAR_3->path.pkey));
}
