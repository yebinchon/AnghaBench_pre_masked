
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* nfsnode_t ;
struct TYPE_6__ {int * n_datalockowner; int n_flag; int n_datalock; } ;


 int FUNC_0 (int,TYPE_1__*,int *,int *,int ) ;
 int FUNC_1 (int,TYPE_1__*,int *,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int) ;

void
FUNC_6(nfsnode_t VAR_1, int VAR_2)
{
 int VAR_3 = (VAR_1->n_datalockowner == FUNC_3());
 FUNC_1(271, VAR_1, VAR_1->n_datalockowner, FUNC_3(), 0);
 if (VAR_2 && VAR_3 && FUNC_2(VAR_1->n_flag, VAR_0))
  FUNC_5(VAR_1, 1);
 VAR_1->n_datalockowner = ((void*)0);
 FUNC_4(&VAR_1->n_datalock);
 if (VAR_2 && !VAR_3 && FUNC_2(VAR_1->n_flag, VAR_0))
  FUNC_5(VAR_1, 0);
 FUNC_0(271, VAR_1, VAR_1->n_datalockowner, FUNC_3(), 0);
}
