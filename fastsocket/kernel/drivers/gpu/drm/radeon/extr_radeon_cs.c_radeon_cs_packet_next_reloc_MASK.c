
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int gpu_offset; } ;
struct radeon_cs_reloc {TYPE_1__ lobj; } ;
struct radeon_cs_parser {int chunk_relocs_idx; struct radeon_cs_reloc** relocs_ptr; struct radeon_cs_reloc* relocs; int idx; struct radeon_cs_chunk* chunks; } ;
struct radeon_cs_packet {scalar_t__ type; scalar_t__ opcode; int idx; scalar_t__ count; } ;
struct radeon_cs_chunk {unsigned int length_dw; int* kdata; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct radeon_cs_parser*,struct radeon_cs_packet*) ;
 int FUNC_2 (struct radeon_cs_parser*,struct radeon_cs_packet*,int ) ;
 unsigned int FUNC_3 (struct radeon_cs_parser*,int) ;

int FUNC_4(struct radeon_cs_parser *VAR_3,
    struct radeon_cs_reloc **VAR_4,
    int VAR_5)
{
 struct radeon_cs_chunk *VAR_6;
 struct radeon_cs_packet VAR_7;
 unsigned VAR_8;
 int VAR_9;

 if (VAR_3->chunk_relocs_idx == -1) {
  FUNC_0("No relocation chunk !\n");
  return -VAR_0;
 }
 *VAR_4 = ((void*)0);
 VAR_6 = &VAR_3->chunks[VAR_3->chunk_relocs_idx];
 VAR_9 = FUNC_2(VAR_3, &VAR_7, VAR_3->idx);
 if (VAR_9)
  return VAR_9;
 VAR_3->idx += VAR_7.count + 2;
 if (VAR_7.type != VAR_2 ||
     VAR_7.opcode != VAR_1) {
  FUNC_0("No packet3 for relocation for packet at %d.\n",
     VAR_7.idx);
  FUNC_1(VAR_3, &VAR_7);
  return -VAR_0;
 }
 VAR_8 = FUNC_3(VAR_3, VAR_7.idx + 1);
 if (VAR_8 >= VAR_6->length_dw) {
  FUNC_0("Relocs at %d after relocations chunk end %d !\n",
     VAR_8, VAR_6->length_dw);
  FUNC_1(VAR_3, &VAR_7);
  return -VAR_0;
 }

 if (VAR_5) {
  *VAR_4 = VAR_3->relocs;
  (*VAR_4)->lobj.gpu_offset =
   (u64)VAR_6->kdata[VAR_8 + 3] << 32;
  (*VAR_4)->lobj.gpu_offset |= VAR_6->kdata[VAR_8 + 0];
 } else
  *VAR_4 = VAR_3->relocs_ptr[(VAR_8 / 4)];
 return 0;
}
