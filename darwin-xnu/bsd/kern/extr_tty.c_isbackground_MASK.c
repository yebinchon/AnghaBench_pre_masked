
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty {TYPE_1__* t_pgrp; int * t_session; } ;
typedef TYPE_2__* proc_t ;
struct TYPE_6__ {TYPE_1__* p_pgrp; } ;
struct TYPE_5__ {int pg_session; } ;


 int FUNC_0 (struct tty*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct tty*,int ) ;

int
FUNC_2(proc_t VAR_0, struct tty *VAR_1)
{
 FUNC_0(VAR_1);

 return (VAR_1->t_session != ((void*)0) && VAR_0->p_pgrp != ((void*)0) && (VAR_0->p_pgrp != VAR_1->t_pgrp) && FUNC_1(VAR_0, VAR_1, VAR_0->p_pgrp->pg_session));
}
