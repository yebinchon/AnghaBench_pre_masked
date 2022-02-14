
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int menu_list_t ;
struct TYPE_8__ {scalar_t__ idx; scalar_t__ list_size; TYPE_2__* list; scalar_t__ action; int type; } ;
typedef TYPE_1__ menu_ctx_list_t ;
struct TYPE_9__ {scalar_t__ size; } ;
typedef TYPE_2__ file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,size_t*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int*) ;
 TYPE_2__* FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,size_t) ;

__attribute__((used)) static bool FUNC_7(menu_list_t *VAR_3,
      size_t VAR_4, size_t *VAR_5, bool VAR_6)
{
   menu_ctx_list_t VAR_7;
   bool VAR_8 = 0;
   file_list_t *VAR_9 = FUNC_5(VAR_3, (unsigned)VAR_4);

   if (FUNC_6(VAR_3, VAR_4) <= 1)
      return 0;

   VAR_7.type = VAR_1;
   VAR_7.action = 0;

   if (VAR_6)
      FUNC_2(&VAR_7);

   if (VAR_9->size != 0)
   {
      menu_ctx_list_t VAR_10;

      VAR_10.list = VAR_9;
      VAR_10.idx = VAR_9->size - 1;
      VAR_10.list_size = VAR_9->size - 1;

      FUNC_1(VAR_2, &VAR_10);
   }

   FUNC_0(VAR_9, VAR_5);
   FUNC_3(VAR_9);
   if (VAR_6)
      FUNC_4(VAR_0, &VAR_8);

   return 1;
}
