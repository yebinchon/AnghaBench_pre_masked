
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int lo_disk; } ;
struct kobject {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 struct kobject* FUNC_0 (int ) ;
 int VAR_1 ;
 struct kobject* FUNC_1 (int ) ;
 int VAR_2 ;
 struct loop_device* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct kobject *FUNC_5(dev_t VAR_3, int *VAR_4, void *VAR_5)
{
 struct loop_device *VAR_6;
 struct kobject *VAR_7;

 FUNC_3(&VAR_2);
 VAR_6 = FUNC_2(VAR_3 & VAR_1);
 VAR_7 = VAR_6 ? FUNC_1(VAR_6->lo_disk) : FUNC_0(-VAR_0);
 FUNC_4(&VAR_2);

 *VAR_4 = 0;
 return VAR_7;
}
