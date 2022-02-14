
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dthb_len; int dthb_chain; struct TYPE_6__* dthb_next; } ;
typedef TYPE_1__ dtrace_hashbucket_t ;
struct TYPE_7__ {int dth_mask; TYPE_1__** dth_tab; } ;
typedef TYPE_2__ dtrace_hash_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ,void*) ;
 int FUNC_1 (TYPE_2__*,void*) ;

__attribute__((used)) static int
FUNC_2(dtrace_hash_t *VAR_0, void *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);
 int VAR_3 = VAR_2 & VAR_0->dth_mask;
 dtrace_hashbucket_t *VAR_4 = VAR_0->dth_tab[VAR_3];

 for (; VAR_4 != ((void*)0); VAR_4 = VAR_4->dthb_next) {
  if (FUNC_0(VAR_0, VAR_4->dthb_chain, VAR_1))
   return (VAR_4->dthb_len);
 }

 return (0);
}
