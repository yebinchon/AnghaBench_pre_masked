
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct eventhandler_list {int dummy; } ;
struct eventhandler_entry_generic {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_1 () ;
 void* FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 void* FUNC_4 (char*,int,int,int ,int ) ;

void
FUNC_5(void)
{
 VAR_10 = FUNC_3();
 VAR_9 = FUNC_2("eventhandler",
     VAR_10);
 VAR_8 = FUNC_1();

 VAR_6 = FUNC_3();
 VAR_5 = FUNC_2("eventhandler list",
     VAR_6);
 VAR_4 = FUNC_1();

 FUNC_0(&VAR_11);

 VAR_2 = sizeof (struct eventhandler_entry_generic);
 VAR_1 = FUNC_4("eventhdlr_generic", VAR_2,
     sizeof (uint64_t), 0, VAR_0);

 VAR_7 = sizeof (struct eventhandler_list);
 VAR_3 = FUNC_4("eventhdlr_list", VAR_7,
     sizeof (uint64_t), 0, VAR_0);
}
