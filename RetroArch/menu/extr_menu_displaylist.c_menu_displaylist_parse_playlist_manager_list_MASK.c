
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct string_list {unsigned int size; TYPE_3__* elems; } ;
struct TYPE_13__ {scalar_t__ history_list_enable; } ;
struct TYPE_10__ {int directory_playlist; } ;
struct TYPE_14__ {TYPE_4__ bools; TYPE_1__ paths; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_15__ {int list; } ;
typedef TYPE_6__ menu_displaylist_info_t ;
struct TYPE_16__ {scalar_t__ content_favorites; scalar_t__ content_history; } ;
struct TYPE_11__ {scalar_t__ i; } ;
struct TYPE_12__ {char* data; TYPE_2__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_5__* FUNC_0 () ;
 struct string_list* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct string_list*,int) ;
 int FUNC_3 (int ) ;
 TYPE_8__ VAR_9 ;
 scalar_t__ FUNC_4 (int ,char const*,char*,int ,int ,int ,int ) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;
 char const* FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (struct string_list*) ;

__attribute__((used)) static unsigned FUNC_13(
      menu_displaylist_info_t *VAR_10)
{
   settings_t *VAR_11 = FUNC_0();
   unsigned VAR_12 = 0;
   struct string_list *VAR_13 = ((void*)0);

   if (!VAR_11)
      return VAR_12;


   VAR_13 = FUNC_1(
         VAR_11->paths.directory_playlist,
         VAR_0, ((void*)0));

   if (VAR_13 && VAR_13->size)
   {
      unsigned VAR_14;

      FUNC_2(VAR_13, 1);

      for (VAR_14 = 0; VAR_14 < VAR_13->size; VAR_14++)
      {
         const char *VAR_15 = VAR_13->elems[VAR_14].data;
         const char *VAR_16 = ((void*)0);

         if (VAR_13->elems[VAR_14].attr.i == VAR_6)
            continue;

         if (FUNC_9(VAR_15))
            continue;

         VAR_16 = FUNC_5(VAR_15);

         if (FUNC_9(VAR_16))
            continue;


         if (!FUNC_11(FUNC_6(VAR_16),
                  "lpl"))
            continue;




         if (FUNC_10(VAR_16, FUNC_3(VAR_2)) ||
             FUNC_10(VAR_16, FUNC_3(VAR_4)) ||
             FUNC_10(VAR_16, FUNC_3(VAR_5)) ||
             FUNC_10(VAR_16, FUNC_3(VAR_3)) ||
             FUNC_10(VAR_16, FUNC_3(VAR_1)))
            continue;

         FUNC_4(VAR_10->list,
               VAR_15,
               "",
               VAR_7,
               VAR_8,
               0, 0);
         VAR_12++;
      }
   }


   FUNC_12(VAR_13);


   if (VAR_11->bools.history_list_enable)
      if (VAR_9.content_history)
         if (FUNC_8(VAR_9.content_history) > 0)
            if (FUNC_4(VAR_10->list,
                  FUNC_7(VAR_9.content_history),
                  "",
                  VAR_7,
                  VAR_8,
                  0, 0))
               VAR_12++;


   if (VAR_9.content_favorites)
      if (FUNC_8(VAR_9.content_favorites) > 0)
         if (FUNC_4(VAR_10->list,
               FUNC_7(VAR_9.content_favorites),
               "",
               VAR_7,
               VAR_8,
               0, 0))
            VAR_12++;

   return VAR_12;
}
