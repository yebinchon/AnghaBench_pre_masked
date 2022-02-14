
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* nfsnode_t ;
struct TYPE_6__ {int n_datalockowner; int n_flag; int n_datalock; } ;


 int FUNC_0 (int,TYPE_1__*,int,int ,int ) ;
 int FUNC_1 (int,TYPE_1__*,int,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int) ;

void
FUNC_7(nfsnode_t VAR_2, int VAR_3, int VAR_4)
{
 FUNC_1(270, VAR_2, VAR_3, VAR_2->n_datalockowner, 0);
 if (VAR_3 == VAR_0) {
  if (VAR_4 && FUNC_2(VAR_2->n_flag, VAR_1))
   FUNC_6(VAR_2, 0);
  FUNC_5(&VAR_2->n_datalock);
 } else {
  FUNC_4(&VAR_2->n_datalock);
  VAR_2->n_datalockowner = FUNC_3();
  if (VAR_4 && FUNC_2(VAR_2->n_flag, VAR_1))
   FUNC_6(VAR_2, 1);
 }
 FUNC_0(270, VAR_2, VAR_3, VAR_2->n_datalockowner, 0);
}
