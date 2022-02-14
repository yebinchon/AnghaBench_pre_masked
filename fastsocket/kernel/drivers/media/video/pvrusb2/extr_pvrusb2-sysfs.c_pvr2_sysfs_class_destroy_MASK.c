
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_sysfs_class {int class; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct pvr2_sysfs_class*) ;

void FUNC_2(struct pvr2_sysfs_class *VAR_0)
{
 FUNC_1("Unregistering pvr2_sysfs_class id=%p", VAR_0);
 FUNC_0(&VAR_0->class);
}
