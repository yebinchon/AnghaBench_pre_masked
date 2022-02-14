
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct srp_target_port {TYPE_3__* srp_host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {TYPE_2__* srp_dev; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (struct device*) ;
 struct srp_target_port* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct srp_target_port *VAR_3 = FUNC_1(FUNC_0(VAR_0));

 return FUNC_2(VAR_2, "%s\n", VAR_3->srp_host->srp_dev->dev->name);
}
