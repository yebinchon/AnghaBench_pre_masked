
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_6__ {scalar_t__ max_direct_range; TYPE_2__* direct; } ;
typedef TYPE_1__ befs_data_stream ;
typedef scalar_t__ befs_blocknr_t ;
struct TYPE_7__ {scalar_t__ len; scalar_t__ start; int allocation_group; } ;
typedef TYPE_2__ befs_block_run ;
struct TYPE_8__ {scalar_t__ block_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,char*,...) ;
 int FUNC_2 (struct super_block*,char*) ;

__attribute__((used)) static int
FUNC_3(struct super_block *VAR_3, befs_data_stream * VAR_4,
        befs_blocknr_t VAR_5, befs_block_run * VAR_6)
{
 int VAR_7;
 befs_block_run *VAR_8 = VAR_4->direct;
 befs_blocknr_t VAR_9;
 befs_blocknr_t VAR_10 =
     VAR_4->max_direct_range >> FUNC_0(VAR_3)->block_shift;

 FUNC_1(VAR_3, "---> befs_find_brun_direct(), find %lu", VAR_5);

 if (VAR_5 > VAR_10) {
  FUNC_2(VAR_3, "befs_find_brun_direct() passed block outside of"
      "direct region");
  return VAR_0;
 }

 for (VAR_7 = 0, VAR_9 = 0; VAR_7 < VAR_1;
      VAR_9 += VAR_8[VAR_7].len, VAR_7++) {
  if (VAR_5 >= VAR_9 && VAR_5 < VAR_9 + (VAR_8[VAR_7].len)) {
   int VAR_11 = VAR_5 - VAR_9;
   VAR_6->allocation_group = VAR_8[VAR_7].allocation_group;
   VAR_6->start = VAR_8[VAR_7].start + VAR_11;
   VAR_6->len = VAR_8[VAR_7].len - VAR_11;

   FUNC_1(VAR_3, "---> befs_find_brun_direct(), "
       "found %lu at direct[%d]", VAR_5, VAR_7);
   return VAR_2;
  }
 }

 FUNC_1(VAR_3, "---> befs_find_brun_direct() ERROR");
 return VAR_0;
}
