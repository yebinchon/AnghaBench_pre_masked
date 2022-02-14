
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csr1212_csr_rom_cache {scalar_t__ ext_rom; struct csr1212_csr_rom_cache* prev; struct csr1212_csr_rom_cache* next; } ;
struct csr1212_csr {int root_kv; struct csr1212_csr_rom_cache* cache_tail; struct csr1212_csr_rom_cache* cache_head; } ;


 int FUNC_0 (struct csr1212_csr_rom_cache*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct csr1212_csr *VAR_0,
     struct csr1212_csr_rom_cache *VAR_1)
{
 if (VAR_0->cache_head == VAR_1)
  VAR_0->cache_head = VAR_1->next;
 if (VAR_0->cache_tail == VAR_1)
  VAR_0->cache_tail = VAR_1->prev;

 if (VAR_1->prev)
  VAR_1->prev->next = VAR_1->next;
 if (VAR_1->next)
  VAR_1->next->prev = VAR_1->prev;

 if (VAR_1->ext_rom) {
  FUNC_1(VAR_0->root_kv,
           VAR_1->ext_rom);
  FUNC_2(VAR_1->ext_rom);
 }

 FUNC_0(VAR_1);
}
