
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mb_cache_entry {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int b_blocknr; int b_bdev; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ h_refcount; } ;


 TYPE_1__* FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct buffer_head*,char*,...) ;
 int FUNC_4 (int *,int,struct inode*,struct buffer_head*,int ) ;
 int FUNC_5 (int *,struct inode*,int ,int,int ) ;
 int FUNC_6 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct buffer_head*) ;
 int FUNC_9 (int ,int) ;
 int VAR_1 ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (scalar_t__*,int) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct mb_cache_entry*) ;
 struct mb_cache_entry* FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (struct mb_cache_entry*) ;
 int FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (struct inode*,int) ;

__attribute__((used)) static void
FUNC_19(handle_t *VAR_2, struct inode *VAR_3,
    struct buffer_head *VAR_4)
{
 struct mb_cache_entry *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 VAR_5 = FUNC_15(VAR_1, VAR_4->b_bdev, VAR_4->b_blocknr);
 VAR_6 = FUNC_8(VAR_2, VAR_4);
 if (VAR_6)
  goto out;

 FUNC_13(VAR_4);
 if (FUNC_0(VAR_4)->h_refcount == FUNC_2(1)) {
  FUNC_3(VAR_4, "refcount now=0; freeing");
  if (VAR_5)
   FUNC_14(VAR_5);
  FUNC_5(VAR_2, VAR_3, VAR_4->b_blocknr, 1,
     VAR_0);
  FUNC_10(VAR_4);
  FUNC_4(VAR_2, 1, VAR_3, VAR_4, VAR_4->b_blocknr);
 } else {
  FUNC_11(&FUNC_0(VAR_4)->h_refcount, -1);
  VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_4);
  if (FUNC_1(VAR_3))
   FUNC_7(VAR_2);
  FUNC_18(VAR_3, 1);
  FUNC_3(VAR_4, "refcount now=%d; releasing",
     FUNC_12(FUNC_0(VAR_4)->h_refcount));
  if (VAR_5)
   FUNC_16(VAR_5);
 }
 FUNC_17(VAR_4);
out:
 FUNC_9(VAR_3->i_sb, VAR_6);
 return;
}
