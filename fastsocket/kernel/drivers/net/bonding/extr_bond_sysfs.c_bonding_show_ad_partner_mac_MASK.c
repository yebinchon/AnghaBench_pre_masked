
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ mode; } ;
struct bonding {TYPE_1__ params; } ;
struct ad_info {int partner_system; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bonding*,struct ad_info*) ;
 int FUNC_1 (char*,char*,int ) ;
 struct bonding* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 int VAR_4 = 0;
 struct bonding *VAR_5 = FUNC_2(VAR_1);

 if (VAR_5->params.mode == VAR_0) {
  struct ad_info VAR_6;
  if (!FUNC_0(VAR_5, &VAR_6))
   VAR_4 = FUNC_1(VAR_3, "%pM\n", VAR_6.partner_system);
 }

 return VAR_4;
}
