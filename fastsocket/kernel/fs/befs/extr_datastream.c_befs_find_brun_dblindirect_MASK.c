
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef size_t off_t ;
struct TYPE_9__ {int block_shift; } ;
typedef TYPE_1__ befs_sb_info ;
typedef int befs_disk_inode_addr ;
struct TYPE_11__ {int len; int start; } ;
struct TYPE_10__ {int max_indirect_range; TYPE_3__ double_indirect; } ;
typedef TYPE_2__ befs_data_stream ;
typedef void* befs_blocknr_t ;
typedef TYPE_3__ befs_block_run ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 struct buffer_head* FUNC_1 (struct super_block*,int) ;
 int FUNC_2 (struct super_block*,char*,void*,...) ;
 int FUNC_3 (struct super_block*,char*,int) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct buffer_head*) ;
 TYPE_3__ FUNC_6 (struct super_block*,int ) ;
 int FUNC_7 (struct super_block*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_8(struct super_block *VAR_3,
      befs_data_stream * VAR_4, befs_blocknr_t VAR_5,
      befs_block_run * VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 off_t VAR_14;
 befs_blocknr_t VAR_15;
 struct buffer_head *VAR_16;
 struct buffer_head *VAR_17;
 befs_block_run VAR_18;
 befs_disk_inode_addr *VAR_19 = ((void*)0);
 befs_sb_info *VAR_20 = FUNC_0(VAR_3);

 befs_blocknr_t VAR_21 =
     VAR_4->max_indirect_range >> VAR_20->block_shift;

 off_t VAR_22 = VAR_5 - VAR_21;




 size_t VAR_23 = VAR_0;




 size_t VAR_24 = VAR_23 * FUNC_4(VAR_3)
     * VAR_0;

 FUNC_2(VAR_3, "---> befs_find_brun_dblindirect() find %lu", VAR_5);







 VAR_7 = VAR_22 / VAR_24;
 VAR_14 = VAR_22 % VAR_24;
 VAR_8 = VAR_14 / VAR_24;


 VAR_10 = VAR_7 / FUNC_4(VAR_3);
 if (VAR_10 > VAR_4->double_indirect.len) {
  FUNC_3(VAR_3, "The double-indirect index calculated by "
      "befs_read_brun_dblindirect(), %d, is outside the range "
      "of the double-indirect block", VAR_7);
  return VAR_1;
 }

 VAR_16 =
     FUNC_1(VAR_3, FUNC_7(VAR_3, &VAR_4->double_indirect) +
     VAR_10);
 if (VAR_16 == ((void*)0)) {
  FUNC_3(VAR_3, "befs_read_brun_dblindirect() couldn't read the "
      "double-indirect block at blockno %lu",
      FUNC_7(VAR_3,
      &VAR_4->double_indirect) +
      VAR_10);
  FUNC_5(VAR_16);
  return VAR_1;
 }

 VAR_12 =
     VAR_7 - (VAR_10 * FUNC_4(VAR_3));
 VAR_19 = (befs_disk_inode_addr *) VAR_16->b_data;
 VAR_18 = FUNC_6(VAR_3, VAR_19[VAR_12]);
 FUNC_5(VAR_16);
 VAR_19 = ((void*)0);


 VAR_11 = VAR_8 / FUNC_4(VAR_3);
 if (VAR_11 > VAR_18.len) {
  FUNC_3(VAR_3, "The indirect index calculated by "
      "befs_read_brun_dblindirect(), %d, is outside the range "
      "of the indirect block", VAR_8);
  return VAR_1;
 }

 VAR_17 =
     FUNC_1(VAR_3, FUNC_7(VAR_3, &VAR_18) + VAR_11);
 if (VAR_17 == ((void*)0)) {
  FUNC_3(VAR_3, "befs_read_brun_dblindirect() couldn't read the "
      "indirect block at blockno %lu",
      FUNC_7(VAR_3, &VAR_18) + VAR_11);
  FUNC_5(VAR_17);
  return VAR_1;
 }

 VAR_13 = VAR_8 - (VAR_11 * FUNC_4(VAR_3));
 VAR_19 = (befs_disk_inode_addr *) VAR_17->b_data;
 *VAR_6 = FUNC_6(VAR_3, VAR_19[VAR_13]);
 FUNC_5(VAR_17);
 VAR_19 = ((void*)0);

 VAR_15 = VAR_21;
 VAR_15 += VAR_24 * VAR_7;
 VAR_15 += VAR_23 * VAR_8;
 VAR_9 = VAR_5 - VAR_15;

 VAR_6->start += VAR_9;
 VAR_6->len -= VAR_9;

 FUNC_2(VAR_3, "Found file block %lu in double_indirect[%d][%d],"
     " double_indirect_leftover = %lu",
     VAR_5, VAR_7, VAR_8, VAR_14);

 return VAR_2;
}
