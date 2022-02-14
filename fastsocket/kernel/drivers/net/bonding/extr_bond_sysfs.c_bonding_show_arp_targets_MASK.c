
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__* arp_targets; } ;
struct bonding {TYPE_1__ params; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,scalar_t__*) ;
 struct bonding* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 struct bonding *VAR_6 = FUNC_1(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_6->params.arp_targets[VAR_4])
   VAR_5 += FUNC_0(VAR_3 + VAR_5, "%pI4 ",
           &VAR_6->params.arp_targets[VAR_4]);
 }
 if (VAR_5)
  VAR_3[VAR_5-1] = '\n';
 return VAR_5;
}
