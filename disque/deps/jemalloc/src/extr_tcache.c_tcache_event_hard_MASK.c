
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_10__ {size_t next_gc_bin; scalar_t__ ev_cnt; TYPE_2__* tbins; } ;
typedef TYPE_1__ tcache_t ;
struct TYPE_11__ {int low_water; int ncached; int lg_fill_div; } ;
typedef TYPE_2__ tcache_bin_t ;
struct TYPE_12__ {int ncached_max; } ;
typedef TYPE_3__ tcache_bin_info_t ;
typedef size_t szind_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,size_t,int,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_2__*,size_t,int) ;
 TYPE_3__* VAR_2 ;

void
FUNC_2(tsd_t *VAR_3, tcache_t *VAR_4)
{
 szind_t VAR_5 = VAR_4->next_gc_bin;
 tcache_bin_t *VAR_6 = &VAR_4->tbins[VAR_5];
 tcache_bin_info_t *VAR_7 = &VAR_2[VAR_5];

 if (VAR_6->low_water > 0) {



  if (VAR_5 < VAR_0) {
   FUNC_1(VAR_3, VAR_4, VAR_6, VAR_5,
       VAR_6->ncached - VAR_6->low_water + (VAR_6->low_water
       >> 2));
  } else {
   FUNC_0(VAR_3, VAR_6, VAR_5, VAR_6->ncached
       - VAR_6->low_water + (VAR_6->low_water >> 2), VAR_4);
  }




  if ((VAR_7->ncached_max >> (VAR_6->lg_fill_div+1)) >= 1)
   VAR_6->lg_fill_div++;
 } else if (VAR_6->low_water < 0) {




  if (VAR_6->lg_fill_div > 1)
   VAR_6->lg_fill_div--;
 }
 VAR_6->low_water = VAR_6->ncached;

 VAR_4->next_gc_bin++;
 if (VAR_4->next_gc_bin == VAR_1)
  VAR_4->next_gc_bin = 0;
 VAR_4->ev_cnt = 0;
}
