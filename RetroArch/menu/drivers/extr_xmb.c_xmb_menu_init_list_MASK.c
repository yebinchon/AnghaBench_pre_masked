
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int need_push; int * list; int flags; int type; void* label; int path; int enum_idx; int type_default; void* exts; } ;
typedef TYPE_1__ menu_displaylist_info_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,void*,int ,int ,int ,int ) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 void* FUNC_8 (char*) ;

__attribute__((used)) static bool FUNC_9(void *VAR_3)
{
   menu_displaylist_info_t VAR_4;

   file_list_t *VAR_5 = FUNC_5(0);
   file_list_t *VAR_6 = FUNC_6(0);

   FUNC_2(&VAR_4);

   VAR_4.label = FUNC_8(
         FUNC_7(VAR_2));
   VAR_4.exts = FUNC_8("lpl");
   VAR_4.type_default = VAR_1;
   VAR_4.enum_idx = VAR_2;

   FUNC_4(VAR_5, VAR_4.path,
         VAR_4.label,
         VAR_2,
         VAR_4.type, VAR_4.flags, 0);

   VAR_4.list = VAR_6;

   if (!FUNC_0(VAR_0, &VAR_4))
      goto error;

   VAR_4.need_push = 1;

   if (!FUNC_3(&VAR_4))
      goto error;

   FUNC_1(&VAR_4);
   return 1;

error:
   FUNC_1(&VAR_4);
   return 0;
}
