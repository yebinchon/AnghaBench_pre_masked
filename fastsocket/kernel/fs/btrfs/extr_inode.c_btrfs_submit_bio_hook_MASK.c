
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct TYPE_3__ {scalar_t__ objectid; } ;
struct btrfs_root {int fs_info; TYPE_1__ root_key; } ;
struct bio {int dummy; } ;
struct TYPE_4__ {int flags; struct btrfs_root* root; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct bio*,int) ;
 scalar_t__ FUNC_2 (struct btrfs_root*,struct inode*) ;
 int FUNC_3 (struct btrfs_root*,struct inode*,struct bio*,int *) ;
 int FUNC_4 (struct btrfs_root*,int,struct bio*,int,int ) ;
 int FUNC_5 (struct inode*,struct bio*,int,unsigned long) ;
 int FUNC_6 (int ,struct inode*,int,struct bio*,int,unsigned long,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_6, int VAR_7, struct bio *VAR_8,
     int VAR_9, unsigned long VAR_10,
     u64 VAR_11)
{
 struct btrfs_root *VAR_12 = FUNC_0(VAR_6)->root;
 int VAR_13 = 0;
 int VAR_14;
 int VAR_15 = 0;

 VAR_14 = FUNC_0(VAR_6)->flags & VAR_1;

 if (FUNC_2(VAR_12, VAR_6))
  VAR_15 = 2;

 if (!(VAR_7 & VAR_3)) {
  VAR_13 = FUNC_1(VAR_12->fs_info, VAR_8, VAR_15);
  if (VAR_13)
   return VAR_13;

  if (VAR_10 & VAR_2) {
   return FUNC_5(VAR_6, VAR_8,
          VAR_9, VAR_10);
  } else if (!VAR_14) {
   VAR_13 = FUNC_3(VAR_12, VAR_6, VAR_8, ((void*)0));
   if (VAR_13)
    return VAR_13;
  }
  goto mapit;
 } else if (!VAR_14) {

  if (VAR_12->root_key.objectid == VAR_0)
   goto mapit;

  return FUNC_6(FUNC_0(VAR_6)->root->fs_info,
       VAR_6, VAR_7, VAR_8, VAR_9,
       VAR_10, VAR_11,
       VAR_5,
       VAR_4);
 }

mapit:
 return FUNC_4(VAR_12, VAR_7, VAR_8, VAR_9, 0);
}
