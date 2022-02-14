
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* v2_inst2pkg ) (int) ;} ;
struct TYPE_4__ {TYPE_1__ pv_v2devops; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int) ;

int FUNC_4(int VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_0, VAR_4);
 VAR_3 = (*VAR_1->pv_v2devops.v2_inst2pkg)(VAR_2);
 FUNC_0();
 FUNC_2(&VAR_0, VAR_4);
 if (VAR_3 == -1) return 0;
 return VAR_3;
}
