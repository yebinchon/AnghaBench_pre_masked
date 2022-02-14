
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* dthb_chain; struct TYPE_9__* dthb_next; } ;
typedef TYPE_1__ dtrace_hashbucket_t ;
struct TYPE_10__ {int dth_mask; scalar_t__ dth_nbuckets; TYPE_1__** dth_tab; } ;
typedef TYPE_2__ dtrace_hash_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,void*,void*) ;
 void** FUNC_2 (TYPE_2__*,void*) ;
 void** FUNC_3 (TYPE_2__*,void*) ;
 int FUNC_4 (TYPE_2__*,void*) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_6(dtrace_hash_t *VAR_0, void *VAR_1)
{
 int VAR_2 = FUNC_4(VAR_0, VAR_1) & VAR_0->dth_mask;
 dtrace_hashbucket_t *VAR_3 = VAR_0->dth_tab[VAR_2];

 void **VAR_4 = FUNC_3(VAR_0, VAR_1);
 void **VAR_5 = FUNC_2(VAR_0, VAR_1);




 for (; VAR_3 != ((void*)0); VAR_3 = VAR_3->dthb_next) {
  if (FUNC_1(VAR_0, VAR_3->dthb_chain, VAR_1))
   break;
 }

 FUNC_0(VAR_3 != ((void*)0));

 if (*VAR_4 == ((void*)0)) {
  if (*VAR_5 == ((void*)0)) {




   dtrace_hashbucket_t *VAR_6 = VAR_0->dth_tab[VAR_2];

   FUNC_0(VAR_3->dthb_chain == VAR_1);
   FUNC_0(VAR_6 != ((void*)0));

   if (VAR_6 == VAR_3) {
    VAR_0->dth_tab[VAR_2] = VAR_3->dthb_next;
   } else {
    while (VAR_6->dthb_next != VAR_3)
     VAR_6 = VAR_6->dthb_next;
    VAR_6->dthb_next = VAR_3->dthb_next;
   }

   FUNC_0(VAR_0->dth_nbuckets > 0);
   VAR_0->dth_nbuckets--;
   FUNC_5(VAR_3, sizeof (dtrace_hashbucket_t));
   return;
  }

  VAR_3->dthb_chain = *VAR_5;
 } else {
  *(FUNC_2(VAR_0, *VAR_4)) = *VAR_5;
 }

 if (*VAR_5 != ((void*)0))
  *(FUNC_3(VAR_0, *VAR_5)) = *VAR_4;
}
