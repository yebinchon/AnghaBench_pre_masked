
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union afs_dirent {int dummy; } afs_dirent ;
typedef union afs_dir_block {int dummy; } afs_dir_block ;
struct page {int dummy; } ;
struct key {int dummy; } ;
struct inode {unsigned int i_size; int i_ino; } ;
struct afs_dir_page {union afs_dir_block* blocks; } ;
typedef int filldir_t ;
struct TYPE_2__ {int flags; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct page*) ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (char*,int ,unsigned int) ;
 int FUNC_4 (char*,...) ;
 struct page* FUNC_5 (struct inode*,unsigned int,struct key*) ;
 int FUNC_6 (unsigned int*,union afs_dir_block*,unsigned int,void*,int ) ;
 int FUNC_7 (struct page*) ;
 struct afs_dir_page* FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_3, unsigned *VAR_4, void *VAR_5,
      filldir_t VAR_6, struct key *VAR_7)
{
 union afs_dir_block *VAR_8;
 struct afs_dir_page *VAR_9;
 struct page *VAR_10;
 unsigned VAR_11, VAR_12;
 int VAR_13;

 FUNC_3("{%lu},%u,,", VAR_3->i_ino, *VAR_4);

 if (FUNC_9(VAR_0, &FUNC_0(VAR_3)->flags)) {
  FUNC_4(" = -ESTALE");
  return -VAR_1;
 }


 *VAR_4 += sizeof(union afs_dirent) - 1;
 *VAR_4 &= ~(sizeof(union afs_dirent) - 1);


 VAR_13 = 0;
 while (*VAR_4 < VAR_3->i_size) {
  VAR_11 = *VAR_4 & ~(sizeof(union afs_dir_block) - 1);


  VAR_10 = FUNC_5(VAR_3, VAR_11 / VAR_2, VAR_7);
  if (FUNC_1(VAR_10)) {
   VAR_13 = FUNC_2(VAR_10);
   break;
  }

  VAR_12 = VAR_11 & ~(VAR_2 - 1);

  VAR_9 = FUNC_8(VAR_10);


  do {
   VAR_8 = &VAR_9->blocks[(VAR_11 % VAR_2) /
            sizeof(union afs_dir_block)];
   VAR_13 = FUNC_6(VAR_4, VAR_8, VAR_11,
          VAR_5, VAR_6);
   if (VAR_13 != 1) {
    FUNC_7(VAR_10);
    goto out;
   }

   VAR_11 += sizeof(union afs_dir_block);

  } while (*VAR_4 < VAR_3->i_size && VAR_11 < VAR_12);

  FUNC_7(VAR_10);
  VAR_13 = 0;
 }

out:
 FUNC_4(" = %d", VAR_13);
 return VAR_13;
}
