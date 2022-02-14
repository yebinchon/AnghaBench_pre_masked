
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp2_target {int dummy; } ;
struct fw_unit {int device; } ;
struct device {int dummy; } ;


 struct sbp2_target* FUNC_0 (int *) ;
 struct fw_unit* FUNC_1 (struct device*) ;
 int FUNC_2 (struct sbp2_target*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct fw_unit *VAR_1 = FUNC_1(VAR_0);
 struct sbp2_target *VAR_2 = FUNC_0(&VAR_1->device);

 FUNC_2(VAR_2);
 return 0;
}
