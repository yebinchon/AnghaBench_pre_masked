
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_8__ {int len; int start; int allocation_group; } ;
typedef TYPE_1__ befs_disk_block_run ;
struct TYPE_10__ {int len; int start; int allocation_group; } ;
struct TYPE_9__ {scalar_t__ max_direct_range; TYPE_3__ indirect; } ;
typedef TYPE_2__ befs_data_stream ;
typedef scalar_t__ befs_blocknr_t ;
typedef TYPE_3__ befs_block_run ;
struct TYPE_11__ {scalar_t__ block_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_0 (struct super_block*) ;
 struct buffer_head* FUNC_1 (struct super_block*,scalar_t__) ;
 int FUNC_2 (struct super_block*,char*,...) ;
 int FUNC_3 (struct super_block*,char*,scalar_t__) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct super_block*,int ) ;
 int FUNC_7 (struct super_block*,int ) ;
 scalar_t__ FUNC_8 (struct super_block*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_9(struct super_block *VAR_2,
   befs_data_stream * VAR_3, befs_blocknr_t VAR_4,
   befs_block_run * VAR_5)
{
 int VAR_6, VAR_7;
 befs_blocknr_t VAR_8 = 0;
 befs_blocknr_t VAR_9;
 befs_blocknr_t VAR_10;
 struct buffer_head *VAR_11;
 befs_disk_block_run *VAR_12;

 befs_block_run VAR_13 = VAR_3->indirect;
 befs_blocknr_t VAR_14 = FUNC_8(VAR_2, &VAR_13);
 int VAR_15 = FUNC_4(VAR_2);

 FUNC_2(VAR_2, "---> befs_find_brun_indirect(), find %lu", VAR_4);

 VAR_9 = VAR_3->max_direct_range >> FUNC_0(VAR_2)->block_shift;
 VAR_10 = VAR_4 - VAR_9;


 for (VAR_6 = 0; VAR_6 < VAR_13.len; VAR_6++) {
  VAR_11 = FUNC_1(VAR_2, VAR_14 + VAR_6);
  if (VAR_11 == ((void*)0)) {
   FUNC_2(VAR_2,
       "---> befs_find_brun_indirect() failed to "
       "read disk block %lu from the indirect brun",
       VAR_14 + VAR_6);
   return VAR_0;
  }

  VAR_12 = (befs_disk_block_run *) VAR_11->b_data;

  for (VAR_7 = 0; VAR_7 < VAR_15; ++VAR_7) {
   int VAR_16 = FUNC_6(VAR_2, VAR_12[VAR_7].len);

   if (VAR_10 >= VAR_8 && VAR_10 < VAR_8 + VAR_16) {
    int VAR_17 = VAR_10 - VAR_8;
    VAR_5->allocation_group =
        FUNC_7(VAR_2, VAR_12[VAR_7].allocation_group);
    VAR_5->start =
        FUNC_6(VAR_2, VAR_12[VAR_7].start) + VAR_17;
    VAR_5->len =
        FUNC_6(VAR_2, VAR_12[VAR_7].len) - VAR_17;

    FUNC_5(VAR_11);
    FUNC_2(VAR_2,
        "<--- befs_find_brun_indirect() found "
        "file block %lu at indirect[%d]",
        VAR_4, VAR_7 + (VAR_6 * VAR_15));
    return VAR_1;
   }
   VAR_8 += VAR_16;
  }

  FUNC_5(VAR_11);
 }


 FUNC_3(VAR_2, "BeFS: befs_find_brun_indirect() failed to find "
     "file block %lu", VAR_4);

 FUNC_2(VAR_2, "<--- befs_find_brun_indirect() ERROR");
 return VAR_0;
}
