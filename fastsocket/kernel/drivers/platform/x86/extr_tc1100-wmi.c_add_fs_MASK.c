
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->dev, &VAR_1);
 if (VAR_3)
  goto add_sysfs_error;

 VAR_3 = FUNC_0(&VAR_2->dev, &VAR_0);
 if (VAR_3)
  goto add_sysfs_error;

 return VAR_3;

add_sysfs_error:
 FUNC_1();
 return VAR_3;
}
