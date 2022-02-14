
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csr1212_csr_rom_cache {struct csr1212_csr_rom_cache* next; struct csr1212_csr_rom_cache* filled_head; struct csr1212_csr_rom_cache* cache_head; int root_kv; } ;
struct csr1212_csr {struct csr1212_csr* next; struct csr1212_csr* filled_head; struct csr1212_csr* cache_head; int root_kv; } ;
struct csr1212_cache_region {struct csr1212_cache_region* next; struct csr1212_cache_region* filled_head; struct csr1212_cache_region* cache_head; int root_kv; } ;


 int FUNC_0 (struct csr1212_csr_rom_cache*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct csr1212_csr *VAR_0)
{
 struct csr1212_csr_rom_cache *VAR_1, *VAR_2;
 struct csr1212_cache_region *VAR_3, *VAR_4;

 FUNC_1(VAR_0->root_kv);

 VAR_1 = VAR_0->cache_head;
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_3 = VAR_1->filled_head;
  while (VAR_3) {
   VAR_4 = VAR_3;
   VAR_3 = VAR_3->next;
   FUNC_0(VAR_4);
  }
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }

 FUNC_0(VAR_0);
}
