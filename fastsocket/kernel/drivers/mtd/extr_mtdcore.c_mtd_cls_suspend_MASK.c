
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int (* suspend ) (struct mtd_info*) ;} ;
struct device {int dummy; } ;
typedef int pm_message_t ;


 struct mtd_info* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, pm_message_t VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2 && VAR_2->suspend)
  return VAR_2->suspend(VAR_2);
 else
  return 0;
}
