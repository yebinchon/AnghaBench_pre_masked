
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mb_cache_entry {int dummy; } ;
struct buffer_head {int b_blocknr; int b_bdev; } ;
typedef scalar_t__ __u32 ;
struct TYPE_5__ {int h_hash; } ;
struct TYPE_4__ {int c_entry_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct buffer_head*,char*,int,...) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 struct mb_cache_entry* FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct mb_cache_entry*) ;
 int FUNC_6 (struct mb_cache_entry*,int ,int ,scalar_t__*) ;
 int FUNC_7 (struct mb_cache_entry*) ;

__attribute__((used)) static int
FUNC_8(struct buffer_head *VAR_4)
{
 __u32 VAR_5 = FUNC_3(FUNC_0(VAR_4)->h_hash);
 struct mb_cache_entry *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_3, VAR_2);
 if (!VAR_6)
  return -VAR_1;
 VAR_7 = FUNC_6(VAR_6, VAR_4->b_bdev, VAR_4->b_blocknr, &VAR_5);
 if (VAR_7) {
  FUNC_5(VAR_6);
  if (VAR_7 == -VAR_0) {
   FUNC_2(VAR_4, "already in cache (%d cache entries)",
    FUNC_1(&VAR_3->c_entry_count));
   VAR_7 = 0;
  }
 } else {
  FUNC_2(VAR_4, "inserting [%x] (%d cache entries)", (int)VAR_5,
     FUNC_1(&VAR_3->c_entry_count));
  FUNC_7(VAR_6);
 }
 return VAR_7;
}
