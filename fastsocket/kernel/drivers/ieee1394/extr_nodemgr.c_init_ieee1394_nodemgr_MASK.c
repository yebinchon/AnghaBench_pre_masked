
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * driver; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_4(void)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_3);
 if (VAR_5)
  goto fail_ne;
 VAR_5 = FUNC_0(&VAR_4);
 if (VAR_5)
  goto fail_ud;
 VAR_5 = FUNC_2(&VAR_2);
 if (VAR_5)
  goto fail_ml;

 VAR_0.driver = &VAR_2;

 FUNC_3(&VAR_1);
 return 0;

fail_ml:
 FUNC_1(&VAR_4);
fail_ud:
 FUNC_1(&VAR_3);
fail_ne:
 return VAR_5;
}
