
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mb_cache_entry {int dummy; } ;
struct buffer_head {int b_blocknr; int b_bdev; } ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {int h_hash; } ;


 TYPE_1__* FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*,char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 struct mb_cache_entry* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mb_cache_entry*) ;
 int FUNC_5 (struct mb_cache_entry*,int ,int ,scalar_t__*) ;
 int FUNC_6 (struct mb_cache_entry*) ;

__attribute__((used)) static void
FUNC_7(struct buffer_head *VAR_3)
{
 __u32 VAR_4 = FUNC_2(FUNC_0(VAR_3)->h_hash);
 struct mb_cache_entry *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_2, VAR_1);
 if (!VAR_5) {
  FUNC_1(VAR_3, "out of memory");
  return;
 }
 VAR_6 = FUNC_5(VAR_5, VAR_3->b_bdev, VAR_3->b_blocknr, &VAR_4);
 if (VAR_6) {
  FUNC_4(VAR_5);
  if (VAR_6 == -VAR_0) {
   FUNC_1(VAR_3, "already in cache");
   VAR_6 = 0;
  }
 } else {
  FUNC_1(VAR_3, "inserting [%x]", (int)VAR_4);
  FUNC_6(VAR_5);
 }
}
