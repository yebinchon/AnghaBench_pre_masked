
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_5 = -VAR_1;

 if (FUNC_1(VAR_0)) {
  VAR_5 = FUNC_0(&VAR_2->dev,
   &VAR_4);
  if (VAR_5)
   goto error_sysfs;
 }

 VAR_5 = FUNC_0(&VAR_2->dev,
  &VAR_3);
 if (VAR_5)
  goto error_sysfs;

 return 0;

error_sysfs:
  FUNC_2(VAR_2);
 return VAR_5;
}
