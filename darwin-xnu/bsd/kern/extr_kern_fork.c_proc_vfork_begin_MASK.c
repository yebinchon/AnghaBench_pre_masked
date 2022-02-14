
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_5__ {int p_vforkcnt; int p_lflag; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(proc_t VAR_1)
{
 FUNC_0(VAR_1);
 VAR_1->p_lflag |= VAR_0;
 VAR_1->p_vforkcnt++;
 FUNC_1(VAR_1);
}
