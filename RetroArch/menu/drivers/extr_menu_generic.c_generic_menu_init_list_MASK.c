
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * list; int flags; int type; int label; int path; int enum_idx; } ;
typedef TYPE_1__ menu_displaylist_info_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ,int ) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

bool FUNC_9(void *VAR_2)
{
   menu_displaylist_info_t VAR_3;
   file_list_t *VAR_4 = FUNC_5(0);
   file_list_t *VAR_5 = FUNC_6(0);

   FUNC_2(&VAR_3);

   VAR_3.label = FUNC_8(
         FUNC_7(VAR_1));
   VAR_3.enum_idx = VAR_1;

   FUNC_4(VAR_4,
         VAR_3.path,
         VAR_3.label,
         VAR_1,
         VAR_3.type, VAR_3.flags, 0);

   VAR_3.list = VAR_5;

   if (FUNC_0(VAR_0, &VAR_3))
      FUNC_3(&VAR_3);

   FUNC_1(&VAR_3);

   return 1;
}
