
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint ;
struct super_block {int dummy; } ;
struct TYPE_9__ {int block_shift; int block_size; } ;
typedef TYPE_3__ befs_sb_info ;
struct TYPE_8__ {scalar_t__ len; } ;
struct TYPE_7__ {scalar_t__ len; } ;
struct TYPE_10__ {int size; int max_direct_range; int max_indirect_range; int max_double_indirect_range; TYPE_2__ double_indirect; TYPE_1__ indirect; } ;
typedef TYPE_4__ befs_data_stream ;
typedef int befs_blocknr_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,char*,...) ;
 int FUNC_2 (struct super_block*) ;

befs_blocknr_t
FUNC_3(struct super_block * VAR_1, befs_data_stream * VAR_2)
{
 befs_blocknr_t VAR_3;
 befs_blocknr_t VAR_4;
 befs_blocknr_t VAR_5;
 befs_sb_info *VAR_6 = FUNC_0(VAR_1);

 FUNC_1(VAR_1, "---> befs_count_blocks()");

 VAR_4 = VAR_2->size >> VAR_6->block_shift;
 if (VAR_2->size & (VAR_6->block_size - 1))
  VAR_4 += 1;

 VAR_5 = 1;


 if (VAR_2->size > VAR_2->max_direct_range)
  VAR_5 += VAR_2->indirect.len;
 if (VAR_2->size > VAR_2->max_indirect_range && VAR_2->max_indirect_range != 0) {
  uint VAR_7;
  uint VAR_8;
  uint VAR_9;

  VAR_7 =
      VAR_2->max_double_indirect_range - VAR_2->max_indirect_range;
  VAR_8 =
      VAR_7 / (VAR_6->block_size * VAR_0);
  VAR_9 = VAR_8 / FUNC_2(VAR_1);

  VAR_5 += VAR_2->double_indirect.len;
  VAR_5 += VAR_9;
 }

 VAR_3 = VAR_4 + VAR_5;
 FUNC_1(VAR_1, "<--- befs_count_blocks() %u blocks", VAR_3);

 return VAR_3;
}
