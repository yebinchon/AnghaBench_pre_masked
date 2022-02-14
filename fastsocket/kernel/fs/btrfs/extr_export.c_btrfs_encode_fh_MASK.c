
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct inode {int i_generation; int i_mode; } ;
struct dentry {int d_lock; TYPE_1__* d_parent; struct inode* d_inode; } ;
struct btrfs_fid {scalar_t__ root_objectid; scalar_t__ parent_root_objectid; int parent_gen; int parent_objectid; int gen; int objectid; } ;
struct TYPE_6__ {int objectid; } ;
struct TYPE_8__ {TYPE_3__* root; TYPE_2__ location; } ;
struct TYPE_7__ {scalar_t__ objectid; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_6, u32 *VAR_7, int *VAR_8,
      int VAR_9)
{
 struct btrfs_fid *VAR_10 = (struct btrfs_fid *)VAR_7;
 struct inode *VAR_11 = VAR_6->d_inode;
 int VAR_12 = *VAR_8;
 int VAR_13;

 if (VAR_9 && (VAR_12 < VAR_0)) {
  *VAR_8 = VAR_0;
  return 255;
 } else if (VAR_12 < VAR_2) {
  *VAR_8 = VAR_2;
  return 255;
 }

 VAR_12 = VAR_2;
 VAR_13 = VAR_3;

 VAR_10->objectid = FUNC_2(VAR_11);
 VAR_10->root_objectid = FUNC_0(VAR_11)->root->objectid;
 VAR_10->gen = VAR_11->i_generation;

 if (VAR_9 && !FUNC_1(VAR_11->i_mode)) {
  struct inode *VAR_14;
  u64 VAR_15;

  FUNC_3(&VAR_6->d_lock);

  VAR_14 = VAR_6->d_parent->d_inode;
  VAR_10->parent_objectid = FUNC_0(VAR_14)->location.objectid;
  VAR_10->parent_gen = VAR_14->i_generation;
  VAR_15 = FUNC_0(VAR_14)->root->objectid;

  FUNC_4(&VAR_6->d_lock);

  if (VAR_15 != VAR_10->root_objectid) {
   VAR_10->parent_root_objectid = VAR_15;
   VAR_12 = VAR_1;
   VAR_13 = VAR_5;
  } else {
   VAR_12 = VAR_0;
   VAR_13 = VAR_4;
  }
 }

 *VAR_8 = VAR_12;
 return VAR_13;
}
