
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mb_cache_entry {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int b_blocknr; int b_bdev; } ;
struct TYPE_8__ {int h_sync; } ;
typedef TYPE_1__ handle_t ;
struct TYPE_9__ {scalar_t__ h_refcount; } ;


 TYPE_7__* FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct buffer_head*,char*,...) ;
 int FUNC_4 (TYPE_1__*,int,struct inode*,struct buffer_head*,int ) ;
 int FUNC_5 (TYPE_1__*,struct inode*,int ,int) ;
 int FUNC_6 (TYPE_1__*,struct buffer_head*) ;
 int FUNC_7 (TYPE_1__*,struct buffer_head*) ;
 int FUNC_8 (int ,int) ;
 int VAR_0 ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (scalar_t__*,int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct mb_cache_entry*) ;
 struct mb_cache_entry* FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (struct mb_cache_entry*) ;
 int FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (struct inode*,int) ;

__attribute__((used)) static void
FUNC_18(handle_t *VAR_1, struct inode *VAR_2,
    struct buffer_head *VAR_3)
{
 struct mb_cache_entry *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 VAR_4 = FUNC_14(VAR_0, VAR_3->b_bdev, VAR_3->b_blocknr);
 VAR_5 = FUNC_7(VAR_1, VAR_3);
 if (VAR_5)
   goto out;

 FUNC_12(VAR_3);

 if (FUNC_0(VAR_3)->h_refcount == FUNC_2(1)) {
  FUNC_3(VAR_3, "refcount now=0; freeing");
  if (VAR_4)
   FUNC_13(VAR_4);
  FUNC_5(VAR_1, VAR_2, VAR_3->b_blocknr, 1);
  FUNC_9(VAR_3);
  FUNC_4(VAR_1, 1, VAR_2, VAR_3, VAR_3->b_blocknr);
 } else {
  FUNC_10(&FUNC_0(VAR_3)->h_refcount, -1);
  VAR_5 = FUNC_6(VAR_1, VAR_3);
  if (FUNC_1(VAR_2))
   VAR_1->h_sync = 1;
  FUNC_17(VAR_2, 1);
  FUNC_3(VAR_3, "refcount now=%d; releasing",
     FUNC_11(FUNC_0(VAR_3)->h_refcount));
  if (VAR_4)
   FUNC_15(VAR_4);
 }
 FUNC_16(VAR_3);
out:
 FUNC_8(VAR_2->i_sb, VAR_5);
 return;
}
