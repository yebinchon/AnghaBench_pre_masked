
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {int alloc_slab; unsigned long alloc_fastpath; unsigned long alloc_slowpath; unsigned long free_fastpath; unsigned long free_slowpath; int free_slab; int deactivate_to_head; int deactivate_to_tail; int free_add_partial; int alloc_from_partial; int free_remove_partial; int deactivate_remote_frees; int free_frozen; long cpuslab_flush; long alloc_refill; unsigned long deactivate_full; unsigned long deactivate_empty; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct slabinfo *VAR_0)
{
 unsigned long VAR_1;
 unsigned long VAR_2;
 unsigned long VAR_3;

 if (!VAR_0->alloc_slab)
  return;

 VAR_1 = VAR_0->alloc_fastpath + VAR_0->alloc_slowpath;
 VAR_2 = VAR_0->free_fastpath + VAR_0->free_slowpath;

 if (!VAR_1)
  return;

 FUNC_0("\n");
 FUNC_0("Slab Perf Counter       Alloc     Free %%Al %%Fr\n");
 FUNC_0("--------------------------------------------------\n");
 FUNC_0("Fastpath             %8lu %8lu %3lu %3lu\n",
  VAR_0->alloc_fastpath, VAR_0->free_fastpath,
  VAR_0->alloc_fastpath * 100 / VAR_1,
  VAR_0->free_fastpath * 100 / VAR_2);
 FUNC_0("Slowpath             %8lu %8lu %3lu %3lu\n",
  VAR_1 - VAR_0->alloc_fastpath, VAR_0->free_slowpath,
  (VAR_1 - VAR_0->alloc_fastpath) * 100 / VAR_1,
  VAR_0->free_slowpath * 100 / VAR_2);
 FUNC_0("Page Alloc           %8lu %8lu %3lu %3lu\n",
  VAR_0->alloc_slab, VAR_0->free_slab,
  VAR_0->alloc_slab * 100 / VAR_1,
  VAR_0->free_slab * 100 / VAR_2);
 FUNC_0("Add partial          %8lu %8lu %3lu %3lu\n",
  VAR_0->deactivate_to_head + VAR_0->deactivate_to_tail,
  VAR_0->free_add_partial,
  (VAR_0->deactivate_to_head + VAR_0->deactivate_to_tail) * 100 / VAR_1,
  VAR_0->free_add_partial * 100 / VAR_2);
 FUNC_0("Remove partial       %8lu %8lu %3lu %3lu\n",
  VAR_0->alloc_from_partial, VAR_0->free_remove_partial,
  VAR_0->alloc_from_partial * 100 / VAR_1,
  VAR_0->free_remove_partial * 100 / VAR_2);

 FUNC_0("RemoteObj/SlabFrozen %8lu %8lu %3lu %3lu\n",
  VAR_0->deactivate_remote_frees, VAR_0->free_frozen,
  VAR_0->deactivate_remote_frees * 100 / VAR_1,
  VAR_0->free_frozen * 100 / VAR_2);

 FUNC_0("Total                %8lu %8lu\n\n", VAR_1, VAR_2);

 if (VAR_0->cpuslab_flush)
  FUNC_0("Flushes %8lu\n", VAR_0->cpuslab_flush);

 if (VAR_0->alloc_refill)
  FUNC_0("Refill %8lu\n", VAR_0->alloc_refill);

 VAR_3 = VAR_0->deactivate_full + VAR_0->deactivate_empty +
   VAR_0->deactivate_to_head + VAR_0->deactivate_to_tail;

 if (VAR_3)
  FUNC_0("Deactivate Full=%lu(%lu%%) Empty=%lu(%lu%%) "
   "ToHead=%lu(%lu%%) ToTail=%lu(%lu%%)\n",
   VAR_0->deactivate_full, (VAR_0->deactivate_full * 100) / VAR_3,
   VAR_0->deactivate_empty, (VAR_0->deactivate_empty * 100) / VAR_3,
   VAR_0->deactivate_to_head, (VAR_0->deactivate_to_head * 100) / VAR_3,
   VAR_0->deactivate_to_tail, (VAR_0->deactivate_to_tail * 100) / VAR_3);
}
