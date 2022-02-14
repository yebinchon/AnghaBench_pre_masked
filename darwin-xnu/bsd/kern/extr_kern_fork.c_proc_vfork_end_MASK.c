
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_5__ {scalar_t__ p_vforkcnt; int p_lflag; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(proc_t VAR_1)
{
 FUNC_1(VAR_1);
 VAR_1->p_vforkcnt--;
 if (VAR_1->p_vforkcnt < 0)
  FUNC_0("vfork cnt is -ve");
 if (VAR_1->p_vforkcnt == 0)
  VAR_1->p_lflag &= ~VAR_0;
 FUNC_2(VAR_1);
}
