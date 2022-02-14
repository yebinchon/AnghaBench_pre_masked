
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_dir_item {int dummy; } ;
struct TYPE_2__ {struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 size_t FUNC_1 (struct btrfs_root*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct btrfs_dir_item*) ;
 int FUNC_3 (struct btrfs_dir_item*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct btrfs_path* FUNC_4 () ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_dir_item*) ;
 int FUNC_6 (struct btrfs_path*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int ,char const*,size_t,void const*,size_t) ;
 struct btrfs_dir_item* FUNC_9 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int ,char const*,size_t,int) ;
 int FUNC_10 (struct btrfs_path*) ;
 size_t FUNC_11 (char const*) ;

__attribute__((used)) static int FUNC_12(struct btrfs_trans_handle *VAR_7,
         struct inode *VAR_8, const char *VAR_9,
         const void *VAR_10, size_t VAR_11, int VAR_12)
{
 struct btrfs_dir_item *VAR_13;
 struct btrfs_root *VAR_14 = FUNC_0(VAR_8)->root;
 struct btrfs_path *VAR_15;
 size_t VAR_16 = FUNC_11(VAR_9);
 int VAR_17 = 0;

 if (VAR_16 + VAR_11 > FUNC_1(VAR_14))
  return -VAR_3;

 VAR_15 = FUNC_4();
 if (!VAR_15)
  return -VAR_2;

 if (VAR_12 & VAR_6) {
  VAR_13 = FUNC_9(VAR_7, VAR_14, VAR_15, FUNC_7(VAR_8), VAR_9,
     VAR_16, -1);
  if (FUNC_2(VAR_13)) {
   VAR_17 = FUNC_3(VAR_13);
   goto out;
  } else if (!VAR_13) {
   VAR_17 = -VAR_1;
   goto out;
  }
  VAR_17 = FUNC_5(VAR_7, VAR_14, VAR_15, VAR_13);
  if (VAR_17)
   goto out;
  FUNC_10(VAR_15);




  if (!VAR_10)
   goto out;
 }

again:
 VAR_17 = FUNC_8(VAR_7, VAR_14, VAR_15, FUNC_7(VAR_8),
          VAR_9, VAR_16, VAR_10, VAR_11);
 if (VAR_17 == -VAR_4)
  VAR_17 = -VAR_0;

 if (VAR_17 == -VAR_0) {
  if (VAR_12 & VAR_5)
   goto out;





  FUNC_10(VAR_15);
  VAR_13 = FUNC_9(VAR_7, VAR_14, VAR_15, FUNC_7(VAR_8),
     VAR_9, VAR_16, -1);
  if (FUNC_2(VAR_13)) {
   VAR_17 = FUNC_3(VAR_13);
   goto out;
  } else if (!VAR_13) {

   FUNC_10(VAR_15);
   goto again;
  }

  VAR_17 = FUNC_5(VAR_7, VAR_14, VAR_15, VAR_13);
  if (VAR_17)
   goto out;




  if (VAR_10) {
   FUNC_10(VAR_15);
   goto again;
  }
 }
out:
 FUNC_6(VAR_15);
 return VAR_17;
}
