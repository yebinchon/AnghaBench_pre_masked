
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_ino; int i_version; int i_ctime; int i_mtime; struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;
typedef void* __be32 ;
struct TYPE_4__ {void** table; } ;
struct TYPE_3__ {void* hash_chain; scalar_t__ parent; int * name; } ;


 TYPE_2__* FUNC_0 (struct buffer_head*) ;
 TYPE_1__* FUNC_1 (struct super_block*,struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct buffer_head*,scalar_t__) ;
 struct buffer_head* FUNC_3 (struct super_block*,scalar_t__) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct super_block*,int *,int ) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (struct buffer_head*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (char*,scalar_t__,scalar_t__,int) ;

int
FUNC_10(struct inode *VAR_3, struct buffer_head *VAR_4)
{
 struct super_block *VAR_5;
 struct buffer_head *VAR_6;
 u32 VAR_7, VAR_8;
 __be32 VAR_9;
 int VAR_10, VAR_11;

 VAR_5 = VAR_3->i_sb;
 VAR_7 = VAR_4->b_blocknr;
 VAR_10 = FUNC_5(VAR_5, FUNC_1(VAR_5, VAR_4)->name+1, FUNC_1(VAR_5, VAR_4)->name[0]);
 FUNC_9("AFFS: remove_hash(dir=%d, ino=%d, hashval=%d)\n", (u32)VAR_3->i_ino, VAR_7, VAR_10);

 VAR_6 = FUNC_3(VAR_5, VAR_3->i_ino);
 if (!VAR_6)
  return -VAR_1;

 VAR_11 = -VAR_2;
 VAR_8 = FUNC_6(FUNC_0(VAR_6)->table[VAR_10]);
 while (VAR_8) {
  if (VAR_8 == VAR_7) {
   VAR_9 = FUNC_1(VAR_5, VAR_4)->hash_chain;
   if (VAR_3->i_ino == VAR_6->b_blocknr)
    FUNC_0(VAR_6)->table[VAR_10] = VAR_9;
   else
    FUNC_1(VAR_5, VAR_6)->hash_chain = VAR_9;
   FUNC_2(VAR_6, FUNC_6(VAR_9) - VAR_8);
   FUNC_7(VAR_6, VAR_3);
   FUNC_1(VAR_5, VAR_4)->parent = 0;
   VAR_11 = 0;
   break;
  }
  FUNC_4(VAR_6);
  VAR_6 = FUNC_3(VAR_5, VAR_8);
  if (!VAR_6)
   return -VAR_1;
  VAR_8 = FUNC_6(FUNC_1(VAR_5, VAR_6)->hash_chain);
 }

 FUNC_4(VAR_6);

 VAR_3->i_mtime = VAR_3->i_ctime = VAR_0;
 VAR_3->i_version++;
 FUNC_8(VAR_3);

 return VAR_11;
}
