
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* md5; struct TYPE_5__* sha1; struct TYPE_5__* bbfc_rating; struct TYPE_5__* esrb_rating; struct TYPE_5__* elspa_rating; struct TYPE_5__* enhancement_hw; struct TYPE_5__* pegi_rating; struct TYPE_5__* cero_rating; struct TYPE_5__* edge_magazine_review; struct TYPE_5__* franchise; struct TYPE_5__* origin; int * developer; struct TYPE_5__* publisher; struct TYPE_5__* description; struct TYPE_5__* genre; struct TYPE_5__* serial; struct TYPE_5__* rom_name; struct TYPE_5__* name; } ;
typedef TYPE_1__ database_info_t ;
struct TYPE_6__ {size_t count; TYPE_1__* list; } ;
typedef TYPE_2__ database_info_list_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(database_info_list_t *VAR_0)
{
   size_t VAR_1;

   if (!VAR_0)
      return;

   for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
   {
      database_info_t *VAR_2 = &VAR_0->list[VAR_1];

      if (VAR_2->name)
         FUNC_0(VAR_2->name);
      if (VAR_2->rom_name)
         FUNC_0(VAR_2->rom_name);
      if (VAR_2->serial)
         FUNC_0(VAR_2->serial);
      if (VAR_2->genre)
         FUNC_0(VAR_2->genre);
      if (VAR_2->description)
         FUNC_0(VAR_2->description);
      if (VAR_2->publisher)
         FUNC_0(VAR_2->publisher);
      if (VAR_2->developer)
         FUNC_1(VAR_2->developer);
      VAR_2->developer = ((void*)0);
      if (VAR_2->origin)
         FUNC_0(VAR_2->origin);
      if (VAR_2->franchise)
         FUNC_0(VAR_2->franchise);
      if (VAR_2->edge_magazine_review)
         FUNC_0(VAR_2->edge_magazine_review);

      if (VAR_2->cero_rating)
         FUNC_0(VAR_2->cero_rating);
      if (VAR_2->pegi_rating)
         FUNC_0(VAR_2->pegi_rating);
      if (VAR_2->enhancement_hw)
         FUNC_0(VAR_2->enhancement_hw);
      if (VAR_2->elspa_rating)
         FUNC_0(VAR_2->elspa_rating);
      if (VAR_2->esrb_rating)
         FUNC_0(VAR_2->esrb_rating);
      if (VAR_2->bbfc_rating)
         FUNC_0(VAR_2->bbfc_rating);
      if (VAR_2->sha1)
         FUNC_0(VAR_2->sha1);
      if (VAR_2->md5)
         FUNC_0(VAR_2->md5);
   }

   FUNC_0(VAR_0->list);
}
