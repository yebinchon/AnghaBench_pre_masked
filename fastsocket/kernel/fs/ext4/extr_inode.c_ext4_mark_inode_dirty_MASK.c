
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; } ;
struct ext4_sb_info {scalar_t__ s_want_extra_isize; TYPE_1__* s_es; } ;
struct ext4_iloc {int dummy; } ;
typedef int handle_t ;
struct TYPE_4__ {scalar_t__ i_extra_isize; } ;
struct TYPE_3__ {int s_mnt_count; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 struct ext4_sb_info* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct inode*,scalar_t__,struct ext4_iloc,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,struct inode*,struct ext4_iloc*) ;
 int FUNC_6 (int *,struct inode*,struct ext4_iloc*) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (int ,char*,int ) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 unsigned int FUNC_11 (int ) ;
 int FUNC_12 () ;

int FUNC_13(handle_t *VAR_1, struct inode *VAR_2)
{
 struct ext4_iloc VAR_3;
 struct ext4_sb_info *VAR_4 = FUNC_2(VAR_2->i_sb);
 static unsigned int VAR_5;
 int VAR_6, VAR_7;

 FUNC_12();
 VAR_6 = FUNC_6(VAR_1, VAR_2, &VAR_3);
 if (FUNC_4(VAR_1) &&
     FUNC_1(VAR_2)->i_extra_isize < VAR_4->s_want_extra_isize &&
     !FUNC_8(VAR_2, VAR_0)) {







  if ((FUNC_10(VAR_1,
        FUNC_0(VAR_2->i_sb))) == 0) {
   VAR_7 = FUNC_3(VAR_2,
            VAR_4->s_want_extra_isize,
            VAR_3, VAR_1);
   if (VAR_7) {
    FUNC_7(VAR_2,
           VAR_0);
    if (VAR_5 !=
     FUNC_11(VAR_4->s_es->s_mnt_count)) {
     FUNC_9(VAR_2->i_sb,
     "Unable to expand inode %lu. Delete"
     " some EAs or run e2fsck.",
     VAR_2->i_ino);
     VAR_5 =
       FUNC_11(VAR_4->s_es->s_mnt_count);
    }
   }
  }
 }
 if (!VAR_6)
  VAR_6 = FUNC_5(VAR_1, VAR_2, &VAR_3);
 return VAR_6;
}
