
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int (* action_content_list_switch ) (TYPE_4__*,TYPE_4__*,char*,char*,int ) ;} ;
typedef TYPE_2__ menu_file_list_cbs_t ;
struct TYPE_12__ {int action; int type; } ;
typedef TYPE_3__ menu_ctx_list_t ;
struct TYPE_13__ {TYPE_1__* list; } ;
typedef TYPE_4__ file_list_t ;
struct TYPE_10__ {scalar_t__ actiondata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_4__* FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (int ) ;
 size_t FUNC_3 () ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*,char*,char*,int ) ;

__attribute__((used)) static int FUNC_5(void)
{
   menu_ctx_list_t VAR_2;
   file_list_t *VAR_3 = FUNC_2(0);
   file_list_t *VAR_4 = FUNC_1(0);
   size_t VAR_5 = FUNC_3();
   menu_file_list_cbs_t *VAR_6 = VAR_3 ? (menu_file_list_cbs_t*)
      VAR_3->list[VAR_5].actiondata : ((void*)0);

   VAR_2.type = VAR_1;
   VAR_2.action = VAR_0;

   FUNC_0(&VAR_2);

   if (VAR_6 && VAR_6->action_content_list_switch)
      return VAR_6->action_content_list_switch(VAR_3, VAR_4,
            "", "", 0);

   return 0;
}
