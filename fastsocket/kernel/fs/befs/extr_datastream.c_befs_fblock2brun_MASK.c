
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef scalar_t__ befs_off_t ;
struct TYPE_7__ {scalar_t__ max_direct_range; scalar_t__ max_indirect_range; scalar_t__ max_double_indirect_range; } ;
typedef TYPE_1__ befs_data_stream ;
typedef scalar_t__ befs_blocknr_t ;
typedef int befs_block_run ;
struct TYPE_8__ {scalar_t__ block_shift; } ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,char*,scalar_t__) ;
 int FUNC_2 (struct super_block*,TYPE_1__*,scalar_t__,int *) ;
 int FUNC_3 (struct super_block*,TYPE_1__*,scalar_t__,int *) ;
 int FUNC_4 (struct super_block*,TYPE_1__*,scalar_t__,int *) ;

int
FUNC_5(struct super_block *VAR_1, befs_data_stream * VAR_2,
   befs_blocknr_t VAR_3, befs_block_run * VAR_4)
{
 int VAR_5;
 befs_off_t VAR_6 = VAR_3 << FUNC_0(VAR_1)->block_shift;

 if (VAR_6 < VAR_2->max_direct_range) {
  VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);

 } else if (VAR_6 < VAR_2->max_indirect_range) {
  VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);

 } else if (VAR_6 < VAR_2->max_double_indirect_range) {
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);

 } else {
  FUNC_1(VAR_1,
      "befs_fblock2brun() was asked to find block %lu, "
      "which is not mapped by the datastream\n", VAR_3);
  VAR_5 = VAR_0;
 }
 return VAR_5;
}
