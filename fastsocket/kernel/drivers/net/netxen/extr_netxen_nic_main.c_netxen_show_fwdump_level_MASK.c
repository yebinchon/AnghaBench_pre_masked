
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int md_capture_mask; } ;
struct netxen_adapter {TYPE_1__ mdump; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct netxen_adapter* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct netxen_adapter *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4 = VAR_3->mdump.md_capture_mask;
 return FUNC_1(VAR_2, "%u\n", VAR_4);
}
