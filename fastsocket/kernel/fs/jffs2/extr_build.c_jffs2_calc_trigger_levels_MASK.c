
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jffs2_sb_info {int resv_blocks_deletion; int flash_size; int nr_blocks; int sector_size; int resv_blocks_write; int resv_blocks_gctrigger; int resv_blocks_gcmerge; int resv_blocks_gcbad; int vdirty_blocks_gctrigger; int nospc_dirty_size; } ;


 int FUNC_0 (char*,int,...) ;
 scalar_t__ FUNC_1 (struct jffs2_sb_info*) ;

__attribute__((used)) static void FUNC_2(struct jffs2_sb_info *VAR_0)
{
 uint32_t VAR_1;




 VAR_0->resv_blocks_deletion = 2;






 VAR_1 = VAR_0->flash_size / 50;
 VAR_1 += VAR_0->nr_blocks * 100;
 VAR_1 += VAR_0->sector_size - 1;

 VAR_0->resv_blocks_write = VAR_0->resv_blocks_deletion + (VAR_1 / VAR_0->sector_size);



 VAR_0->resv_blocks_gctrigger = VAR_0->resv_blocks_write + 1;



 VAR_0->resv_blocks_gcmerge = VAR_0->resv_blocks_deletion + 1;



 VAR_0->resv_blocks_gcbad = 0;





 VAR_0->vdirty_blocks_gctrigger = VAR_0->resv_blocks_gctrigger;
 if (FUNC_1(VAR_0))
  VAR_0->vdirty_blocks_gctrigger *= 10;



 VAR_0->nospc_dirty_size = VAR_0->sector_size + (VAR_0->flash_size / 100);

 FUNC_0("JFFS2 trigger levels (size %d KiB, block size %d KiB, %d blocks)\n",
    VAR_0->flash_size / 1024, VAR_0->sector_size / 1024, VAR_0->nr_blocks);
 FUNC_0("Blocks required to allow deletion:    %d (%d KiB)\n",
    VAR_0->resv_blocks_deletion, VAR_0->resv_blocks_deletion*VAR_0->sector_size/1024);
 FUNC_0("Blocks required to allow writes:      %d (%d KiB)\n",
    VAR_0->resv_blocks_write, VAR_0->resv_blocks_write*VAR_0->sector_size/1024);
 FUNC_0("Blocks required to quiesce GC thread: %d (%d KiB)\n",
    VAR_0->resv_blocks_gctrigger, VAR_0->resv_blocks_gctrigger*VAR_0->sector_size/1024);
 FUNC_0("Blocks required to allow GC merges:   %d (%d KiB)\n",
    VAR_0->resv_blocks_gcmerge, VAR_0->resv_blocks_gcmerge*VAR_0->sector_size/1024);
 FUNC_0("Blocks required to GC bad blocks:     %d (%d KiB)\n",
    VAR_0->resv_blocks_gcbad, VAR_0->resv_blocks_gcbad*VAR_0->sector_size/1024);
 FUNC_0("Amount of dirty space required to GC: %d bytes\n",
    VAR_0->nospc_dirty_size);
 FUNC_0("Very dirty blocks before GC triggered: %d\n",
    VAR_0->vdirty_blocks_gctrigger);
}
