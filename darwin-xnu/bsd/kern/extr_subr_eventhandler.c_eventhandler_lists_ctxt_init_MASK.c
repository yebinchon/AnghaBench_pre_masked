
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventhandler_lists_ctxt {int eventhandler_lists_initted; int eventhandler_mutex; int eventhandler_lists; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ) ;

void
FUNC_3(struct eventhandler_lists_ctxt *VAR_2)
{
 FUNC_1(VAR_2 != ((void*)0));

 FUNC_0(&VAR_2->eventhandler_lists);
 VAR_2->eventhandler_lists_initted = 1;
 FUNC_2(&VAR_2->eventhandler_mutex,
     VAR_1, VAR_0);
}
