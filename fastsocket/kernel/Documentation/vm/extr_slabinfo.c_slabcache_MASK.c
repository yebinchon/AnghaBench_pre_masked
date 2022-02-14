
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {char* name; int slabs; int partial; unsigned long alloc_fastpath; unsigned long alloc_slowpath; unsigned long free_fastpath; unsigned long free_slowpath; int objects; int order; int object_size; int objs_per_slab; int order_fallback; scalar_t__ trace; scalar_t__ store_user; scalar_t__ sanity_checks; scalar_t__ red_zone; scalar_t__ reclaim_account; scalar_t__ poison; scalar_t__ hwcache_align; scalar_t__ cache_dma; scalar_t__ aliases; scalar_t__ cpu_slabs; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int,int,...) ;
 int FUNC_2 (struct slabinfo*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct slabinfo*) ;
 int FUNC_4 (char*,int,char*,scalar_t__,int,scalar_t__) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(struct slabinfo *VAR_6)
{
 char VAR_7[20];
 char VAR_8[40];
 char VAR_9[20];
 char *VAR_10 = VAR_9;

 if (FUNC_6(VAR_6->name, "*") == 0)
  return;

 if (VAR_0 == 1) {
  FUNC_2(VAR_6);
  return;
 }

 if (VAR_5 && !VAR_4 && !VAR_6->slabs)
  return;

 if (VAR_4 && VAR_6->slabs)
  return;

 FUNC_5(VAR_7, FUNC_3(VAR_6));
 FUNC_4(VAR_8, 40, "%lu/%lu/%d", VAR_6->slabs - VAR_6->cpu_slabs,
      VAR_6->partial, VAR_6->cpu_slabs);

 if (!VAR_1++)
  FUNC_0();

 if (VAR_6->aliases)
  *VAR_10++ = '*';
 if (VAR_6->cache_dma)
  *VAR_10++ = 'd';
 if (VAR_6->hwcache_align)
  *VAR_10++ = 'A';
 if (VAR_6->poison)
  *VAR_10++ = 'P';
 if (VAR_6->reclaim_account)
  *VAR_10++ = 'a';
 if (VAR_6->red_zone)
  *VAR_10++ = 'Z';
 if (VAR_6->sanity_checks)
  *VAR_10++ = 'F';
 if (VAR_6->store_user)
  *VAR_10++ = 'U';
 if (VAR_6->trace)
  *VAR_10++ = 'T';

 *VAR_10 = 0;
 if (VAR_3) {
  unsigned long VAR_11;
  unsigned long VAR_12;

  VAR_11 = VAR_6->alloc_fastpath + VAR_6->alloc_slowpath;
  VAR_12 = VAR_6->free_fastpath + VAR_6->free_slowpath;

  FUNC_1("%-21s %8ld %10ld %10ld %3ld %3ld %5ld %1d\n",
   VAR_6->name, VAR_6->objects,
   VAR_11, VAR_12,
   VAR_11 ? (VAR_6->alloc_fastpath * 100 / VAR_11) : 0,
   VAR_12 ? (VAR_6->free_fastpath * 100 / VAR_12) : 0,
   VAR_6->order_fallback, VAR_6->order);
 }
 else
  FUNC_1("%-21s %8ld %7d %8s %14s %4d %1d %3ld %3ld %s\n",
   VAR_6->name, VAR_6->objects, VAR_6->object_size, VAR_7, VAR_8,
   VAR_6->objs_per_slab, VAR_6->order,
   VAR_6->slabs ? (VAR_6->partial * 100) / VAR_6->slabs : 100,
   VAR_6->slabs ? (VAR_6->objects * VAR_6->object_size * 100) /
    (VAR_6->slabs * (VAR_2 << VAR_6->order)) : 100,
   VAR_9);
}
