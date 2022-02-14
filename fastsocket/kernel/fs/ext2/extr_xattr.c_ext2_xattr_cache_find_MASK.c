
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mb_cache_entry {scalar_t__ e_block; } ;
struct inode {TYPE_1__* i_sb; int i_ino; } ;
struct ext2_xattr_header {int h_hash; } ;
struct buffer_head {int b_count; } ;
typedef scalar_t__ __u32 ;
struct TYPE_6__ {int h_refcount; } ;
struct TYPE_5__ {int s_bdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct mb_cache_entry*) ;
 int FUNC_2 (struct mb_cache_entry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*,char*,int ) ;
 int FUNC_6 (struct inode*,char*,unsigned long,...) ;
 int FUNC_7 (TYPE_1__*,char*,char*,int ,unsigned long) ;
 int VAR_2 ;
 int FUNC_8 (struct ext2_xattr_header*,TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct buffer_head*) ;
 struct mb_cache_entry* FUNC_11 (int ,int ,int ,scalar_t__) ;
 struct mb_cache_entry* FUNC_12 (struct mb_cache_entry*,int ,int ,scalar_t__) ;
 int FUNC_13 (struct mb_cache_entry*) ;
 struct buffer_head* FUNC_14 (TYPE_1__*,scalar_t__) ;
 int FUNC_15 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *
FUNC_16(struct inode *VAR_3, struct ext2_xattr_header *VAR_4)
{
 __u32 VAR_5 = FUNC_9(VAR_4->h_hash);
 struct mb_cache_entry *VAR_6;

 if (!VAR_4->h_hash)
  return ((void*)0);
 FUNC_6(VAR_3, "looking for cached blocks [%x]", (int)VAR_5);
again:
 VAR_6 = FUNC_11(VAR_2, 0,
           VAR_3->i_sb->s_bdev, VAR_5);
 while (VAR_6) {
  struct buffer_head *VAR_7;

  if (FUNC_1(VAR_6)) {
   if (FUNC_2(VAR_6) == -VAR_0)
    goto again;
   break;
  }

  VAR_7 = FUNC_14(VAR_3->i_sb, VAR_6->e_block);
  if (!VAR_7) {
   FUNC_7(VAR_3->i_sb, "ext2_xattr_cache_find",
    "inode %ld: block %ld read error",
    VAR_3->i_ino, (unsigned long) VAR_6->e_block);
  } else {
   FUNC_10(VAR_7);
   if (FUNC_9(FUNC_0(VAR_7)->h_refcount) >
       VAR_1) {
    FUNC_6(VAR_3, "block %ld refcount %d>%d",
       (unsigned long) VAR_6->e_block,
       FUNC_9(FUNC_0(VAR_7)->h_refcount),
       VAR_1);
   } else if (!FUNC_8(VAR_4, FUNC_0(VAR_7))) {
    FUNC_5(VAR_7, "b_count=%d",
       FUNC_3(&(VAR_7->b_count)));
    FUNC_13(VAR_6);
    return VAR_7;
   }
   FUNC_15(VAR_7);
   FUNC_4(VAR_7);
  }
  VAR_6 = FUNC_12(VAR_6, 0, VAR_3->i_sb->s_bdev, VAR_5);
 }
 return ((void*)0);
}
