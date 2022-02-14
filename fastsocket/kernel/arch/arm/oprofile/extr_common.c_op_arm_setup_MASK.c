
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* setup_ctrs ) () ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_2;

 FUNC_0(&VAR_1);
 VAR_2 = VAR_0->setup_ctrs();
 FUNC_1(&VAR_1);
 return VAR_2;
}
