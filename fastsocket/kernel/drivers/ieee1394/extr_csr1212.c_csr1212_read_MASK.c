
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct csr1212_csr_rom_cache {scalar_t__ offset; scalar_t__ size; int * data; struct csr1212_csr_rom_cache* next; } ;
struct csr1212_csr {struct csr1212_csr_rom_cache* cache_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*,int *,scalar_t__) ;

int FUNC_2(struct csr1212_csr *VAR_2, u32 VAR_3, void *VAR_4, u32 VAR_5)
{
 struct csr1212_csr_rom_cache *VAR_6;

 for (VAR_6 = VAR_2->cache_head; VAR_6; VAR_6 = VAR_6->next)
  if (VAR_3 >= VAR_6->offset &&
      (VAR_3 + VAR_5) <= (VAR_6->offset + VAR_6->size)) {
   FUNC_1(VAR_4, &VAR_6->data[
     FUNC_0(VAR_3 - VAR_6->offset)],
          VAR_5);
   return VAR_0;
  }

 return -VAR_1;
}
