
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_cs_reloc {int dummy; } ;
struct radeon_cs_parser {int chunk_relocs_idx; unsigned int dma_reloc_idx; unsigned int nrelocs; struct radeon_cs_reloc** relocs_ptr; struct radeon_cs_chunk* chunks; } ;
struct radeon_cs_chunk {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;

int FUNC_1(struct radeon_cs_parser *VAR_1,
      struct radeon_cs_reloc **VAR_2)
{
 struct radeon_cs_chunk *VAR_3;
 unsigned VAR_4;

 *VAR_2 = ((void*)0);
 if (VAR_1->chunk_relocs_idx == -1) {
  FUNC_0("No relocation chunk !\n");
  return -VAR_0;
 }
 VAR_3 = &VAR_1->chunks[VAR_1->chunk_relocs_idx];
 VAR_4 = VAR_1->dma_reloc_idx;
 if (VAR_4 >= VAR_1->nrelocs) {
  FUNC_0("Relocs at %d after relocations chunk end %d !\n",
     VAR_4, VAR_1->nrelocs);
  return -VAR_0;
 }
 *VAR_2 = VAR_1->relocs_ptr[VAR_4];
 VAR_1->dma_reloc_idx++;
 return 0;
}
