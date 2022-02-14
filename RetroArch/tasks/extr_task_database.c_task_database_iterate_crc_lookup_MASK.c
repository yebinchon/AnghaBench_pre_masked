
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int query ;
struct TYPE_17__ {int scan_without_core_match; } ;
typedef TYPE_3__ db_handle_t ;
struct TYPE_18__ {size_t list_index; int crc; size_t entry_index; int archive_crc; TYPE_8__* info; TYPE_2__* list; } ;
typedef TYPE_4__ database_state_handle_t ;
struct TYPE_19__ {scalar_t__ crc32; int name; } ;
typedef TYPE_5__ database_info_t ;
typedef int database_info_handle_t ;
struct TYPE_20__ {size_t count; TYPE_5__* list; } ;
struct TYPE_16__ {size_t size; TYPE_1__* elems; } ;
struct TYPE_15__ {int data; } ;


 int FUNC_0 (char*,int,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (int *,TYPE_4__*,char const*) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*,int *,char const*) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*,int,char*,int,int) ;

__attribute__((used)) static int FUNC_12(
      db_handle_t *VAR_0,
      database_state_handle_t *VAR_1,
      database_info_handle_t *VAR_2,
      const char *VAR_3,
      const char *VAR_4)
{

   if (!VAR_1->list ||
         (unsigned)VAR_1->list_index == (unsigned)VAR_1->list->size)
      return FUNC_4(VAR_2, VAR_1, VAR_3);


   if (!VAR_1->crc)
   {
      VAR_1->crc = FUNC_8(VAR_3);

      if (!VAR_1->crc)
         return FUNC_7(VAR_1);
   }

   if (VAR_1->entry_index == 0)
   {
      char VAR_5[50];

      VAR_5[0] = '\0';

      if (!VAR_0->scan_without_core_match)
      {





         if (!FUNC_2(
               VAR_1->list->elems[VAR_1->list_index].data, VAR_3))
            return FUNC_7(VAR_1);

         if (!FUNC_10(VAR_3))
         {
            if (FUNC_1(
                  VAR_1->list->elems[VAR_1->list_index].data))
               return FUNC_7(VAR_1);
         }
      }

      FUNC_11(VAR_5, sizeof(VAR_5),
            "{crc:or(b\"%08X\",b\"%08X\")}",
            VAR_1->crc, VAR_1->archive_crc);

      FUNC_6(VAR_1, VAR_5);
   }

   if (VAR_1->info)
   {
      database_info_t *VAR_6 =
         &VAR_1->info->list[VAR_1->entry_index];

      if (VAR_6 && VAR_6->crc32)
      {




         if (VAR_1->archive_crc == VAR_6->crc32)
            return FUNC_5(
                  VAR_0,
                  VAR_1, VAR_2, ((void*)0));
         if (VAR_1->crc == VAR_6->crc32)
            return FUNC_5(
                  VAR_0,
                  VAR_1, VAR_2, VAR_4);
      }
   }

   VAR_1->entry_index++;

   if (VAR_1->info)
   {
      if (VAR_1->entry_index >= VAR_1->info->count)
         return FUNC_7(VAR_1);
   }



   if (VAR_1->list_index < VAR_1->list->size)
      return 1;

   FUNC_3(VAR_1->info);

   if (VAR_1->info)
      FUNC_9(VAR_1->info);

   return 0;
}
