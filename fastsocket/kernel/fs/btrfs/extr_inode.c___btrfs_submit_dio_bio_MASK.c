
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct inode {int dummy; } ;
struct btrfs_root {int fs_info; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (int ,struct bio*,int ) ;
 int FUNC_4 (struct btrfs_root*,struct inode*,struct bio*,int ,int) ;
 int FUNC_5 (struct btrfs_root*,struct inode*,struct bio*,int ,int *) ;
 int FUNC_6 (struct btrfs_root*,int,struct bio*,int ,int) ;
 int FUNC_7 (int ,struct inode*,int,struct bio*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_8(struct bio *VAR_3, struct inode *VAR_4,
      int VAR_5, u64 VAR_6, int VAR_7,
      u32 *VAR_8, int VAR_9)
{
 int VAR_10 = VAR_5 & VAR_0;
 struct btrfs_root *VAR_11 = FUNC_0(VAR_4)->root;
 int VAR_12;

 FUNC_1(VAR_3);

 if (!VAR_10) {
  VAR_12 = FUNC_3(VAR_11->fs_info, VAR_3, 0);
  if (VAR_12)
   goto err;
 }

 if (VAR_7)
  goto map;

 if (VAR_10 && VAR_9) {
  VAR_12 = FUNC_7(VAR_11->fs_info,
       VAR_4, VAR_5, VAR_3, 0, 0,
       VAR_6,
       VAR_2,
       VAR_1);
  goto err;
 } else if (VAR_10) {




  VAR_12 = FUNC_4(VAR_11, VAR_4, VAR_3, VAR_6, 1);
  if (VAR_12)
   goto err;
 } else if (!VAR_7) {
  VAR_12 = FUNC_5(VAR_11, VAR_4, VAR_3,
       VAR_6, VAR_8);
  if (VAR_12)
   goto err;
 }

map:
 VAR_12 = FUNC_6(VAR_11, VAR_5, VAR_3, 0, VAR_9);
err:
 FUNC_2(VAR_3);
 return VAR_12;
}
