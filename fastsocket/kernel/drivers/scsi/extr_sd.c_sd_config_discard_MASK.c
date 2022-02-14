
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct scsi_disk {int lbprz; unsigned int unmap_alignment; unsigned int unmap_granularity; unsigned int provisioning_mode; int max_ws_blocks; int max_unmap_blocks; int physical_block_size; TYPE_2__* device; TYPE_1__* disk; } ;
struct TYPE_6__ {int discard_zeroes_data; unsigned int discard_alignment; unsigned int max_discard_sectors; int discard_granularity; } ;
struct request_queue {TYPE_3__ limits; } ;
struct TYPE_5__ {unsigned int sector_size; } ;
struct TYPE_4__ {struct request_queue* queue; } ;


 int VAR_0 ;





 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct request_queue*) ;
 int FUNC_3 (int ,struct request_queue*) ;

__attribute__((used)) static void FUNC_4(struct scsi_disk *VAR_1, unsigned int VAR_2)
{
 struct request_queue *VAR_3 = VAR_1->disk->queue;
 unsigned int VAR_4 = VAR_1->device->sector_size;
 unsigned int VAR_5 = 0;

 VAR_3->limits.discard_zeroes_data = VAR_1->lbprz;
 VAR_3->limits.discard_alignment = VAR_1->unmap_alignment *
  VAR_4;
 VAR_3->limits.discard_granularity =
  FUNC_0(VAR_1->physical_block_size,
      VAR_1->unmap_granularity * VAR_4);

 VAR_1->provisioning_mode = VAR_2;

 switch (VAR_2) {

 case 132:
  VAR_3->limits.max_discard_sectors = 0;
  FUNC_2(VAR_0, VAR_3);
  return;

 case 131:
  VAR_5 = FUNC_1(VAR_1->max_unmap_blocks, 0xffffffff);
  break;

 case 129:
  VAR_5 = FUNC_1(VAR_1->max_ws_blocks, 0xffffffff);
  break;

 case 130:
  VAR_5 = FUNC_1(VAR_1->max_ws_blocks, (u32)0xffff);
  break;

 case 128:
  VAR_5 = FUNC_1(VAR_1->max_ws_blocks, (u32)0xffff);
  VAR_3->limits.discard_zeroes_data = 1;
  break;
 }

 VAR_3->limits.max_discard_sectors = VAR_5 * (VAR_4 >> 9);
 FUNC_3(VAR_0, VAR_3);
}
