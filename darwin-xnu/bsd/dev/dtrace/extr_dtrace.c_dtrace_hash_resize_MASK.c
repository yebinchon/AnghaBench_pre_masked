
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* dthb_next; void* dthb_chain; } ;
typedef TYPE_1__ dtrace_hashbucket_t ;
struct TYPE_8__ {int dth_size; int dth_mask; TYPE_1__** dth_tab; } ;
typedef TYPE_2__ dtrace_hash_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,void*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__**,int) ;
 TYPE_1__** FUNC_3 (int,int ) ;

__attribute__((used)) static void
FUNC_4(dtrace_hash_t *VAR_1)
{
 int VAR_2 = VAR_1->dth_size, VAR_3, VAR_4;
 int VAR_5 = VAR_1->dth_size << 1;
 int VAR_6 = VAR_5 - 1;
 dtrace_hashbucket_t **VAR_7, *VAR_8, *VAR_9;

 FUNC_0((VAR_5 & VAR_6) == 0);

 VAR_7 = FUNC_3(VAR_5 * sizeof (void *), VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  for (VAR_8 = VAR_1->dth_tab[VAR_3]; VAR_8 != ((void*)0); VAR_8 = VAR_9) {
   void *VAR_10 = VAR_8->dthb_chain;

   FUNC_0(VAR_10 != ((void*)0));
   VAR_4 = FUNC_1(VAR_1, VAR_10) & VAR_6;

   VAR_9 = VAR_8->dthb_next;
   VAR_8->dthb_next = VAR_7[VAR_4];
   VAR_7[VAR_4] = VAR_8;
  }
 }

 FUNC_2(VAR_1->dth_tab, VAR_1->dth_size * sizeof (void *));
 VAR_1->dth_tab = VAR_7;
 VAR_1->dth_size = VAR_5;
 VAR_1->dth_mask = VAR_6;
}
