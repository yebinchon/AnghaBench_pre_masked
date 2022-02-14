
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_4__ {scalar_t__ h_magic; scalar_t__ h_blocks; } ;
struct TYPE_3__ {scalar_t__ i_file_acl; } ;


 TYPE_2__* FUNC_0 (struct buffer_head*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int ,scalar_t__) ;
 int FUNC_5 (int *,struct inode*,struct buffer_head*) ;
 struct buffer_head* FUNC_6 (int ,scalar_t__) ;

void
FUNC_7(handle_t *VAR_1, struct inode *VAR_2)
{
 struct buffer_head *VAR_3 = ((void*)0);

 if (!FUNC_1(VAR_2)->i_file_acl)
  goto cleanup;
 VAR_3 = FUNC_6(VAR_2->i_sb, FUNC_1(VAR_2)->i_file_acl);
 if (!VAR_3) {
  FUNC_4(VAR_2->i_sb, "inode %lu: block %llu read error",
      VAR_2->i_ino, FUNC_1(VAR_2)->i_file_acl);
  goto cleanup;
 }
 if (FUNC_0(VAR_3)->h_magic != FUNC_3(VAR_0) ||
     FUNC_0(VAR_3)->h_blocks != FUNC_3(1)) {
  FUNC_4(VAR_2->i_sb, "inode %lu: bad block %llu",
      VAR_2->i_ino, FUNC_1(VAR_2)->i_file_acl);
  goto cleanup;
 }
 FUNC_5(VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_2)->i_file_acl = 0;

cleanup:
 FUNC_2(VAR_3);
}
