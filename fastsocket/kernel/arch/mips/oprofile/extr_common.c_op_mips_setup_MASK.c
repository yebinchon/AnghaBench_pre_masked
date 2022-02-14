
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpu_setup; int (* reg_setup ) (int ) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void)
{

 VAR_1->reg_setup(VAR_0);


 FUNC_0(VAR_1->cpu_setup, ((void*)0), 1);

        return 0;
}
