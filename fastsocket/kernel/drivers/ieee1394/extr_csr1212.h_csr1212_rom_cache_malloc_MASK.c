
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct csr1212_csr_rom_cache {size_t size; int * ext_rom; int offset; int * layout_tail; int * layout_head; int * filled_tail; int * filled_head; int * prev; int * next; } ;


 struct csr1212_csr_rom_cache* FUNC_0 (int) ;

__attribute__((used)) static inline struct csr1212_csr_rom_cache *
FUNC_1(u32 VAR_0, size_t VAR_1)
{
 struct csr1212_csr_rom_cache *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2) + VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->next = ((void*)0);
 VAR_2->prev = ((void*)0);
 VAR_2->filled_head = ((void*)0);
 VAR_2->filled_tail = ((void*)0);
 VAR_2->layout_head = ((void*)0);
 VAR_2->layout_tail = ((void*)0);
 VAR_2->offset = VAR_0;
 VAR_2->size = VAR_1;
 VAR_2->ext_rom = ((void*)0);

 return VAR_2;
}
