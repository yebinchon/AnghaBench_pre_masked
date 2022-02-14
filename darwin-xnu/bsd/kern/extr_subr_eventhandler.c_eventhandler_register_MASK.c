
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eventhandler_lists_ctxt {int dummy; } ;
struct eventhandler_list {int dummy; } ;
struct eventhandler_entry_arg {int dummy; } ;
struct TYPE_2__ {int ee_priority; struct eventhandler_entry_arg ee_arg; } ;
struct eventhandler_entry_generic {TYPE_1__ ee; void* func; } ;
typedef int eventhandler_tag ;


 int VAR_0 ;
 int FUNC_0 (struct eventhandler_entry_generic*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct eventhandler_lists_ctxt*,struct eventhandler_list*,char const*,TYPE_1__*) ;
 struct eventhandler_entry_generic* FUNC_2 (int ,int ) ;

eventhandler_tag
FUNC_3(struct eventhandler_lists_ctxt *VAR_3,
    struct eventhandler_list *VAR_4, const char *VAR_5,
    void *VAR_6, struct eventhandler_entry_arg VAR_7, int VAR_8)
{
 struct eventhandler_entry_generic *VAR_9;


 VAR_9 = FUNC_2(VAR_1, VAR_0);
 FUNC_0(VAR_9, VAR_2);
 VAR_9->func = VAR_6;
 VAR_9->ee.ee_arg = VAR_7;
 VAR_9->ee.ee_priority = VAR_8;

 return (FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_9->ee));
}
