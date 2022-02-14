
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {size_t cur_prio; int * ready; int priomap; } ;
typedef TYPE_1__ lwp_cntrl ;


 int FUNC_0 (int *,size_t) ;
 int * VAR_0 ;
 int FUNC_1 (char*,TYPE_1__*,size_t,int *) ;

void FUNC_2(lwp_cntrl *VAR_1,u32 VAR_2)
{
 VAR_1->cur_prio = VAR_2;
 VAR_1->ready = &VAR_0[VAR_2];
 FUNC_0(&VAR_1->priomap,VAR_2);



}
