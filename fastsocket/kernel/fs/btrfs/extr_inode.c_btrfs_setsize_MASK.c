
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; int i_mtime; int i_ctime; } ;
struct iattr {scalar_t__ ia_size; int ia_valid; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int runtime_flags; struct btrfs_root* root; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_5 (struct inode*,scalar_t__,int *) ;
 struct btrfs_trans_handle* FUNC_6 (struct btrfs_root*,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,scalar_t__) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_3, struct iattr *VAR_4)
{
 struct btrfs_root *VAR_5 = FUNC_0(VAR_3)->root;
 struct btrfs_trans_handle *VAR_6;
 loff_t VAR_7 = FUNC_10(VAR_3);
 loff_t VAR_8 = VAR_4->ia_size;
 int VAR_9 = VAR_4->ia_valid;
 int VAR_10;

 if (VAR_8 == VAR_7)
  return 0;







 if (VAR_8 != VAR_7 && (!(VAR_9 & (VAR_0 | VAR_1))))
  VAR_3->i_ctime = VAR_3->i_mtime = FUNC_9(VAR_3->i_sb);

 if (VAR_8 > VAR_7) {
  FUNC_13(VAR_3, VAR_7, VAR_8);
  VAR_10 = FUNC_3(VAR_3, VAR_7, VAR_8);
  if (VAR_10)
   return VAR_10;

  VAR_6 = FUNC_6(VAR_5, 1);
  if (FUNC_1(VAR_6))
   return FUNC_2(VAR_6);

  FUNC_11(VAR_3, VAR_8);
  FUNC_5(VAR_3, FUNC_10(VAR_3), ((void*)0));
  VAR_10 = FUNC_8(VAR_6, VAR_5, VAR_3);
  FUNC_4(VAR_6, VAR_5);
 } else {






  if (VAR_8 == 0)
   FUNC_12(VAR_2,
    &FUNC_0(VAR_3)->runtime_flags);


  FUNC_14(VAR_3, VAR_8);
  VAR_10 = FUNC_7(VAR_3);
 }

 return VAR_10;
}
