
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_unit {int dummy; } ;
struct fw_driver {int (* update ) (struct fw_unit*) ;} ;
struct device {int sem; scalar_t__ driver; } ;


 int FUNC_0 (int *) ;
 struct fw_unit* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct fw_unit*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, void *VAR_1)
{
 struct fw_unit *VAR_2 = FUNC_1(VAR_0);
 struct fw_driver *VAR_3 = (struct fw_driver *)VAR_0->driver;

 if (FUNC_2(VAR_0) && VAR_3 != ((void*)0) && VAR_3->update != ((void*)0)) {
  FUNC_0(&VAR_0->sem);
  VAR_3->update(VAR_2);
  FUNC_4(&VAR_0->sem);
 }

 return 0;
}
