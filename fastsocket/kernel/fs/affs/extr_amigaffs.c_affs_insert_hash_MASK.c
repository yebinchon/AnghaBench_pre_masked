
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
struct TYPE_4__ {void** table; } ;
struct TYPE_3__ {void* hash_chain; void* parent; int * name; } ;


 TYPE_2__* FUNC_0 (struct buffer_head*) ;
 TYPE_1__* FUNC_1 (struct super_block*,struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct buffer_head*,scalar_t__) ;
 struct buffer_head* FUNC_3 (struct super_block*,scalar_t__) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct super_block*,struct buffer_head*) ;
 int FUNC_6 (struct super_block*,int *,int ) ;
 scalar_t__ FUNC_7 (void*) ;
 void* FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct buffer_head*,struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (char*,scalar_t__,scalar_t__) ;

int
FUNC_12(struct inode *VAR_2, struct buffer_head *VAR_3)
{
 struct super_block *VAR_4 = VAR_2->i_sb;
 struct buffer_head *VAR_5;
 u32 VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = VAR_3->b_blocknr;
 VAR_8 = FUNC_6(VAR_4, FUNC_1(VAR_4, VAR_3)->name + 1, FUNC_1(VAR_4, VAR_3)->name[0]);

 FUNC_11("AFFS: insert_hash(dir=%u, ino=%d)\n", (u32)VAR_2->i_ino, VAR_6);

 VAR_5 = FUNC_3(VAR_4, VAR_2->i_ino);
 if (!VAR_5)
  return -VAR_1;

 VAR_7 = FUNC_7(FUNC_0(VAR_5)->table[VAR_8]);
 while (VAR_7) {
  FUNC_4(VAR_5);
  VAR_5 = FUNC_3(VAR_4, VAR_7);
  if (!VAR_5)
   return -VAR_1;
  VAR_7 = FUNC_7(FUNC_1(VAR_4, VAR_5)->hash_chain);
 }
 FUNC_1(VAR_4, VAR_3)->parent = FUNC_8(VAR_2->i_ino);
 FUNC_1(VAR_4, VAR_3)->hash_chain = 0;
 FUNC_5(VAR_4, VAR_3);

 if (VAR_2->i_ino == VAR_5->b_blocknr)
  FUNC_0(VAR_5)->table[VAR_8] = FUNC_8(VAR_6);
 else
  FUNC_1(VAR_4, VAR_5)->hash_chain = FUNC_8(VAR_6);

 FUNC_2(VAR_5, VAR_6);
 FUNC_9(VAR_5, VAR_2);
 FUNC_4(VAR_5);

 VAR_2->i_mtime = VAR_2->i_ctime = VAR_0;
 VAR_2->i_version++;
 FUNC_10(VAR_2);

 return 0;
}
