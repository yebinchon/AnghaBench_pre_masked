
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventhandler_lists_ctxt {int eventhandler_mutex; int eventhandler_lists_initted; } ;
struct eventhandler_list {int dummy; } ;


 int FUNC_0 (struct eventhandler_list*) ;
 struct eventhandler_list* FUNC_1 (struct eventhandler_lists_ctxt*,char const*) ;
 struct eventhandler_lists_ctxt VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct eventhandler_list *
FUNC_5(struct eventhandler_lists_ctxt *VAR_1,
    const char *VAR_2)
{
 struct eventhandler_list *VAR_3;

 if (VAR_1 == ((void*)0))
  VAR_1 = &VAR_0;

 if (!VAR_1->eventhandler_lists_initted)
  return(((void*)0));


 FUNC_3(&VAR_1->eventhandler_mutex);
 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_2(&VAR_1->eventhandler_mutex);
  FUNC_0(VAR_3);
 }
 FUNC_4(&VAR_1->eventhandler_mutex);

 return(VAR_3);
}
