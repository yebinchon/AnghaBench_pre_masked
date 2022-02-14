
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mb_cache_entry {scalar_t__ e_block; } ;
struct inode {TYPE_1__* i_sb; int i_ino; } ;
struct ext4_xattr_header {int h_hash; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ __u32 ;
struct TYPE_6__ {int h_refcount; } ;
struct TYPE_5__ {int s_bdev; } ;


 TYPE_2__* FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct mb_cache_entry*) ;
 int FUNC_2 (struct mb_cache_entry*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct inode*,char*,unsigned long,...) ;
 int FUNC_5 (TYPE_1__*,char*,int ,unsigned long) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct ext4_xattr_header*,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ) ;
 struct mb_cache_entry* FUNC_8 (int ,int ,int ,scalar_t__) ;
 struct mb_cache_entry* FUNC_9 (struct mb_cache_entry*,int ,int ,scalar_t__) ;
 struct buffer_head* FUNC_10 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static struct buffer_head *
FUNC_11(struct inode *VAR_3, struct ext4_xattr_header *VAR_4,
        struct mb_cache_entry **VAR_5)
{
 __u32 VAR_6 = FUNC_7(VAR_4->h_hash);
 struct mb_cache_entry *VAR_7;

 if (!VAR_4->h_hash)
  return ((void*)0);
 FUNC_4(VAR_3, "looking for cached blocks [%x]", (int)VAR_6);
again:
 VAR_7 = FUNC_8(VAR_2, 0,
           VAR_3->i_sb->s_bdev, VAR_6);
 while (VAR_7) {
  struct buffer_head *VAR_8;

  if (FUNC_1(VAR_7)) {
   if (FUNC_2(VAR_7) == -VAR_0)
    goto again;
   break;
  }
  VAR_8 = FUNC_10(VAR_3->i_sb, VAR_7->e_block);
  if (!VAR_8) {
   FUNC_5(VAR_3->i_sb,
    "inode %lu: block %lu read error",
    VAR_3->i_ino, (unsigned long) VAR_7->e_block);
  } else if (FUNC_7(FUNC_0(VAR_8)->h_refcount) >=
    VAR_1) {
   FUNC_4(VAR_3, "block %lu refcount %d>=%d",
      (unsigned long) VAR_7->e_block,
      FUNC_7(FUNC_0(VAR_8)->h_refcount),
       VAR_1);
  } else if (FUNC_6(VAR_4, FUNC_0(VAR_8)) == 0) {
   *VAR_5 = VAR_7;
   return VAR_8;
  }
  FUNC_3(VAR_8);
  VAR_7 = FUNC_9(VAR_7, 0, VAR_3->i_sb->s_bdev, VAR_6);
 }
 return ((void*)0);
}
