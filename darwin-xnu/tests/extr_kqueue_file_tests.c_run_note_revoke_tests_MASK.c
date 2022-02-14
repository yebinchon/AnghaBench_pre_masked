
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t_helpthreadact; int * t_prep_actions; int * t_cleanup_actions; } ;
typedef TYPE_1__ test_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int ,int,void*) ;
 int FUNC_2 (TYPE_1__*,char*,scalar_t__,int,int,int ,int ) ;

void
FUNC_3()
{
 test_t VAR_9;
 FUNC_2(&VAR_9, "7.1.1: revoke file", VAR_1, 1, 1, VAR_3, VAR_8);
 FUNC_1(&(VAR_9.t_prep_actions[0]), VAR_2, VAR_0, 1, (void*)VAR_1);
 FUNC_1(&VAR_9.t_helpthreadact, VAR_6, VAR_5, 1, (void*)VAR_1);
 FUNC_1(&(VAR_9.t_cleanup_actions[0]), VAR_2, VAR_7, 1, (void*)VAR_1);
 FUNC_0(&VAR_9);

 FUNC_2(&VAR_9, "7.2.1: delete file", VAR_1, 1, 0, VAR_3, VAR_4);
 FUNC_1(&(VAR_9.t_prep_actions[0]), VAR_2, VAR_0, 1, (void*)VAR_1);
 FUNC_1(&VAR_9.t_helpthreadact, VAR_6, VAR_7, 1, (void*)VAR_1);
 FUNC_0(&VAR_9);
}
