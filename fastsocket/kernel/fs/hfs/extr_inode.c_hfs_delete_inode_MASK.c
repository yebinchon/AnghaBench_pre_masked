
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_dirt; } ;
struct inode {scalar_t__ i_size; int i_nlink; int i_mode; int i_ino; struct super_block* i_sb; } ;
struct TYPE_4__ {scalar_t__ ParID; } ;
struct TYPE_6__ {TYPE_1__ cat_key; } ;
struct TYPE_5__ {int flags; int root_files; int file_count; int root_dirs; int folder_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ,int *) ;

void FUNC_8(struct inode *VAR_3)
{
 struct super_block *VAR_4 = VAR_3->i_sb;

 FUNC_5(VAR_0, "delete_inode: %lu\n", VAR_3->i_ino);
 if (FUNC_2(VAR_3->i_mode)) {
  FUNC_1(VAR_4)->folder_count--;
  if (FUNC_0(VAR_3)->cat_key.ParID == FUNC_4(VAR_2))
   FUNC_1(VAR_4)->root_dirs--;
  FUNC_7(VAR_1, &FUNC_1(VAR_4)->flags);
  VAR_4->s_dirt = 1;
  return;
 }
 FUNC_1(VAR_4)->file_count--;
 if (FUNC_0(VAR_3)->cat_key.ParID == FUNC_4(VAR_2))
  FUNC_1(VAR_4)->root_files--;
 if (FUNC_3(VAR_3->i_mode)) {
  if (!VAR_3->i_nlink) {
   VAR_3->i_size = 0;
   FUNC_6(VAR_3);
  }
 }
 FUNC_7(VAR_1, &FUNC_1(VAR_4)->flags);
 VAR_4->s_dirt = 1;
}
