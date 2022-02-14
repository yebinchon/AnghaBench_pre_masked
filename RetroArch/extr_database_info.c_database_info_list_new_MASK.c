
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int libretrodb_t ;
typedef int libretrodb_cursor_t ;
struct TYPE_10__ {unsigned int count; struct TYPE_10__* list; struct TYPE_10__* serial; struct TYPE_10__* rom_name; struct TYPE_10__* publisher; struct TYPE_10__* pegi_rating; struct TYPE_10__* origin; struct TYPE_10__* name; struct TYPE_10__* genre; struct TYPE_10__* franchise; struct TYPE_10__* esrb_rating; struct TYPE_10__* enhancement_hw; struct TYPE_10__* elspa_rating; struct TYPE_10__* edge_magazine_review; struct TYPE_10__* description; struct TYPE_10__* cero_rating; struct TYPE_10__* bbfc_rating; int member_0; } ;
typedef TYPE_1__ database_info_t ;
typedef TYPE_1__ database_info_list_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int *,char const*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_11 (TYPE_1__*,unsigned int) ;

database_info_list_t *FUNC_12(
      const char *VAR_0, const char *VAR_1)
{
   int VAR_2 = 0;
   unsigned VAR_3 = 0;
   database_info_t *VAR_4 = ((void*)0);
   database_info_list_t *VAR_5 = ((void*)0);
   libretrodb_t *VAR_6 = FUNC_8();
   libretrodb_cursor_t *VAR_7 = FUNC_6();

   if (!VAR_6 || !VAR_7)
      goto end;

   if ((FUNC_2(VAR_6, VAR_7, VAR_0, VAR_1) != 0))
      goto end;

   VAR_5 = (database_info_list_t*)
      FUNC_9(sizeof(*VAR_5));

   if (!VAR_5)
      goto end;

   VAR_5->count = 0;
   VAR_5->list = ((void*)0);

   while (VAR_2 != -1)
   {
      database_info_t VAR_8 = {0};
      VAR_2 = FUNC_1(VAR_7, &VAR_8);

      if (VAR_2 == 0)
      {
         database_info_t *VAR_9 = ((void*)0);
         database_info_t *VAR_10 = (database_info_t*)
            FUNC_11(VAR_4, (VAR_3+1) * sizeof(database_info_t));

         if (!VAR_10)
         {
            if (VAR_8.bbfc_rating)
               FUNC_4(VAR_8.bbfc_rating);
            if (VAR_8.cero_rating)
               FUNC_4(VAR_8.cero_rating);
            if (VAR_8.description)
               FUNC_4(VAR_8.description);
            if (VAR_8.edge_magazine_review)
               FUNC_4(VAR_8.edge_magazine_review);
            if (VAR_8.elspa_rating)
               FUNC_4(VAR_8.elspa_rating);
            if (VAR_8.enhancement_hw)
               FUNC_4(VAR_8.enhancement_hw);
            if (VAR_8.esrb_rating)
               FUNC_4(VAR_8.esrb_rating);
            if (VAR_8.franchise)
               FUNC_4(VAR_8.franchise);
            if (VAR_8.genre)
               FUNC_4(VAR_8.genre);
            if (VAR_8.name)
               FUNC_4(VAR_8.name);
            if (VAR_8.origin)
               FUNC_4(VAR_8.origin);
            if (VAR_8.pegi_rating)
               FUNC_4(VAR_8.pegi_rating);
            if (VAR_8.publisher)
               FUNC_4(VAR_8.publisher);
            if (VAR_8.rom_name)
               FUNC_4(VAR_8.rom_name);
            if (VAR_8.serial)
               FUNC_4(VAR_8.serial);
            FUNC_3(VAR_5);
            FUNC_4(VAR_4);
            FUNC_4(VAR_5);
            VAR_5 = ((void*)0);
            goto end;
         }

         VAR_4 = VAR_10;
         VAR_9 = &VAR_4[VAR_3];

         FUNC_10(VAR_9, &VAR_8, sizeof(*VAR_9));

         VAR_3++;
      }
   }

   VAR_5->list = VAR_4;
   VAR_5->count = VAR_3;

end:
   if (VAR_6)
   {
      FUNC_0(VAR_6, VAR_7);
      FUNC_7(VAR_6);
   }
   if (VAR_7)
      FUNC_5(VAR_7);

   return VAR_5;
}
