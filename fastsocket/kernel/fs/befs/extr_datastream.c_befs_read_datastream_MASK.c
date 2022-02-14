
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int befs_off_t ;
typedef int befs_data_stream ;
typedef int befs_blocknr_t ;
typedef int befs_block_run ;
struct TYPE_2__ {int block_shift; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 struct buffer_head* FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct super_block*,char*,...) ;
 int FUNC_3 (struct super_block*,char*,int) ;
 scalar_t__ FUNC_4 (struct super_block*,int *,int,int *) ;

struct buffer_head *
FUNC_5(struct super_block *VAR_1, befs_data_stream * VAR_2,
       befs_off_t VAR_3, uint * VAR_4)
{
 struct buffer_head *VAR_5 = ((void*)0);
 befs_block_run VAR_6;
 befs_blocknr_t VAR_7;

 FUNC_2(VAR_1, "---> befs_read_datastream() %Lu", VAR_3);
 VAR_7 = VAR_3 >> FUNC_0(VAR_1)->block_shift;
 if (VAR_4)
  *VAR_4 = VAR_3 - (VAR_7 << FUNC_0(VAR_1)->block_shift);

 if (FUNC_4(VAR_1, VAR_2, VAR_7, &VAR_6) != VAR_0) {
  FUNC_3(VAR_1, "BeFS: Error finding disk addr of block %lu",
      VAR_7);
  FUNC_2(VAR_1, "<--- befs_read_datastream() ERROR");
  return ((void*)0);
 }
 VAR_5 = FUNC_1(VAR_1, VAR_6);
 if (!VAR_5) {
  FUNC_3(VAR_1, "BeFS: Error reading block %lu from datastream",
      VAR_7);
  return ((void*)0);
 }

 FUNC_2(VAR_1, "<--- befs_read_datastream() read data, starting at %Lu",
     VAR_3);

 return VAR_5;
}
