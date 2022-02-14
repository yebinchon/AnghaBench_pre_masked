
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct string_list {scalar_t__ size; TYPE_1__* elems; } ;
struct TYPE_7__ {scalar_t__ crc; scalar_t__ archive_crc; scalar_t__ entry_index; scalar_t__ list_index; } ;
typedef TYPE_2__ database_state_handle_t ;
struct TYPE_8__ {int list; } ;
typedef TYPE_3__ database_info_handle_t ;
struct TYPE_6__ {char const* data; int attr; } ;


 int VAR_0 ;
 struct string_list* FUNC_0 (char const*,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct string_list*) ;
 int FUNC_7 (char*,char const*,size_t) ;
 size_t FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(
      database_info_handle_t *VAR_1,
      database_state_handle_t *VAR_2,
      const char *VAR_3)
{






   if (FUNC_4(VAR_3) && !FUNC_3(VAR_3))
   {
      struct string_list *VAR_4 =
         FUNC_0(VAR_3, ((void*)0));

      if (VAR_4 && VAR_4->size > 0)
      {
         unsigned VAR_5;

         for (VAR_5 = 0; VAR_5 < VAR_4->size; VAR_5++)
         {
            char *VAR_6 = (char*)FUNC_2(
               VAR_0 * sizeof(char));
            size_t VAR_7 = VAR_0 * sizeof(char);
            size_t VAR_8 = FUNC_8(VAR_3);

            VAR_6[0] = '\0';

            FUNC_7(VAR_6, VAR_3, VAR_7);

            if (VAR_8 + FUNC_8(VAR_4->elems[VAR_5].data)
                     + 1 < VAR_0)
            {
               VAR_6[VAR_8] = '#';
               FUNC_7(VAR_6 + VAR_8 + 1,
                  VAR_4->elems[VAR_5].data,
                  VAR_7 - VAR_8);
            }

            FUNC_5(VAR_1->list, VAR_6,
               VAR_4->elems[VAR_5].attr);

            FUNC_1(VAR_6);
         }

         FUNC_6(VAR_4);
      }
   }

   VAR_2->list_index = 0;
   VAR_2->entry_index = 0;

   if (VAR_2->crc != 0)
      VAR_2->crc = 0;

   if (VAR_2->archive_crc != 0)
      VAR_2->archive_crc = 0;

   return 0;
}
