
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct quad_buffer_head {struct dnode* data; } ;
struct inode {int i_sb; int i_version; } ;
struct hpfs_dirent {scalar_t__ down; scalar_t__ last; scalar_t__ first; } ;
struct dnode {int dummy; } ;
typedef int loff_t ;
typedef scalar_t__ dnode_secno ;
struct TYPE_2__ {scalar_t__ last; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hpfs_dirent*) ;
 TYPE_1__* FUNC_1 (struct hpfs_dirent*) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 struct hpfs_dirent* FUNC_3 (struct dnode*) ;
 int FUNC_4 (struct inode*,int ,int,int) ;
 int FUNC_5 (struct dnode*,struct hpfs_dirent*) ;
 int FUNC_6 (struct quad_buffer_head*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct dnode*,struct hpfs_dirent*) ;
 int FUNC_9 (int ,char*,scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct quad_buffer_head*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct inode*,scalar_t__,scalar_t__) ;

int FUNC_14(struct inode *VAR_3, dnode_secno VAR_4, struct hpfs_dirent *VAR_5,
         struct quad_buffer_head *VAR_6, int VAR_7)
{
 struct dnode *VAR_8 = VAR_6->data;
 dnode_secno VAR_9 = 0;
 int VAR_10 = 0;
 loff_t VAR_11;
 if (VAR_5->first || VAR_5->last) {
  FUNC_9(VAR_3->i_sb, "hpfs_remove_dirent: attempt to delete first or last dirent in dnode %08x", VAR_4);
  FUNC_6(VAR_6);
  return 1;
 }
 if (VAR_5->down) VAR_9 = FUNC_0(VAR_5);
 if (VAR_7 && (VAR_5->down || (VAR_5 == FUNC_3(VAR_8) && FUNC_1(VAR_5)->last))) {
  VAR_10 = 1;
  FUNC_10(VAR_3->i_sb);
  if (FUNC_7(VAR_3->i_sb, VAR_0)) {
   FUNC_6(VAR_6);
   FUNC_12(VAR_3->i_sb);
   return 2;
  }
 }
 VAR_3->i_version++;
 FUNC_4(VAR_3, VAR_1, (VAR_11 = FUNC_5(VAR_8, VAR_5)) + 1, 1);
 FUNC_8(VAR_3->i_sb, VAR_8, VAR_5);
 FUNC_11(VAR_6);
 FUNC_6(VAR_6);
 if (VAR_9) {
  dnode_secno VAR_12 = FUNC_13(VAR_3, VAR_9, VAR_4);
  FUNC_4(VAR_3, VAR_2, 5, VAR_11);
  if (VAR_12) FUNC_2(VAR_3, VAR_12);
  if (VAR_10) FUNC_12(VAR_3->i_sb);
  return !VAR_12;
 }
 FUNC_2(VAR_3, VAR_4);
 if (VAR_10) FUNC_12(VAR_3->i_sb);
 return 0;
}
