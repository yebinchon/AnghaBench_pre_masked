
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ipc_importance_task_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int iit_donor; int iit_task; int iit_transitions; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int ,scalar_t__,int,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

void
FUNC_6(ipc_importance_task_t VAR_4, boolean_t VAR_5)
{
 FUNC_2(VAR_4 != ((void*)0));

 FUNC_3();

 int VAR_6 = VAR_4->iit_donor;

 VAR_4->iit_donor = (VAR_5 ? 1 : 0);

 if (VAR_4->iit_donor > 0 && VAR_6 == 0)
  VAR_4->iit_transitions++;

 FUNC_1(VAR_3,
                           (FUNC_0(VAR_1, VAR_2)) | VAR_0,
                           FUNC_5(VAR_4->iit_task), VAR_5,
                           VAR_6, VAR_4->iit_donor, 0);

 FUNC_4();
}
