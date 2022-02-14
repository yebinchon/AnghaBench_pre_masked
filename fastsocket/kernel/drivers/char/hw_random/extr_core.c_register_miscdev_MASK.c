
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int this_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_3;

 VAR_3 = FUNC_3(&VAR_2);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_0(VAR_2.this_device,
     &VAR_1);
 if (VAR_3)
  goto err_misc_dereg;
 VAR_3 = FUNC_0(VAR_2.this_device,
     &VAR_0);
 if (VAR_3)
  goto err_remove_current;
out:
 return VAR_3;

err_remove_current:
 FUNC_1(VAR_2.this_device, &VAR_1);
err_misc_dereg:
 FUNC_2(&VAR_2);
 goto out;
}
