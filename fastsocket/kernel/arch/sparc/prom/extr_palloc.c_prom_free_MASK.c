
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* v2_dumb_mem_free ) (char*,unsigned int) ;} ;
struct TYPE_4__ {TYPE_1__ pv_v2devops; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (char*,unsigned int) ;

void
FUNC_1(char *VAR_3, unsigned int VAR_4)
{
 if((VAR_1 == VAR_0) || (VAR_4 == 0x0)) return;
 (*(VAR_2->pv_v2devops.v2_dumb_mem_free))(VAR_3, VAR_4);
 return;
}
