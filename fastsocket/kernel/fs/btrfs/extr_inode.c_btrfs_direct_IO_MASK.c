
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u64 ;
struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int dummy; } ;
struct file {TYPE_3__* f_mapping; } ;
struct extent_state {int dummy; } ;
struct btrfs_ordered_extent {int dummy; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;
struct TYPE_11__ {int io_tree; TYPE_5__* root; } ;
struct TYPE_10__ {TYPE_2__* fs_info; } ;
struct TYPE_9__ {struct inode* host; } ;
struct TYPE_8__ {TYPE_1__* fs_devices; } ;
struct TYPE_7__ {int latest_bdev; } ;


 TYPE_6__* FUNC_0 (struct inode*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t FUNC_1 (int,struct kiocb*,struct inode*,int ,struct iovec const*,size_t,unsigned long,int ,int *,int ,int ) ;
 size_t FUNC_2 (struct inode*,size_t) ;
 int VAR_9 ;
 struct btrfs_ordered_extent* FUNC_3 (struct inode*,size_t,size_t) ;
 int FUNC_4 (struct btrfs_ordered_extent*) ;
 int FUNC_5 (struct inode*,struct btrfs_ordered_extent*,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (TYPE_5__*,int,struct kiocb*,struct iovec const*,size_t,unsigned long) ;
 int FUNC_7 (int *,size_t,size_t,int,int,int ,struct extent_state**,int ) ;
 int FUNC_8 () ;
 size_t FUNC_9 (TYPE_3__*,size_t,size_t) ;
 int FUNC_10 (struct extent_state*) ;
 size_t FUNC_11 (TYPE_3__*,size_t,size_t) ;
 size_t FUNC_12 (struct iovec const*,unsigned long) ;
 int FUNC_13 (int *,size_t,size_t,int ,struct extent_state**) ;
 size_t FUNC_14 (int *,size_t,size_t,int,int *,struct extent_state**,int ) ;
 int FUNC_15 (int *,size_t,size_t,int ,int ,struct extent_state*) ;
 int FUNC_16 (int *,size_t,size_t,struct extent_state**,int ) ;

__attribute__((used)) static ssize_t FUNC_17(int VAR_11, struct kiocb *VAR_12,
   const struct iovec *VAR_13, loff_t VAR_14,
   unsigned long VAR_15)
{
 struct file *VAR_16 = VAR_12->ki_filp;
 struct inode *VAR_17 = VAR_16->f_mapping->host;
 struct btrfs_ordered_extent *VAR_18;
 struct extent_state *VAR_19 = ((void*)0);
 u64 VAR_20, VAR_21;
 ssize_t VAR_22;
 int VAR_23 = VAR_11 & VAR_8;
 int VAR_24 = 0;
 size_t VAR_25 = FUNC_12(VAR_13, VAR_15);

 if (FUNC_6(FUNC_0(VAR_17)->root, VAR_11, VAR_12, VAR_13,
       VAR_14, VAR_15)) {
  return 0;
 }

 VAR_20 = VAR_14;
 VAR_21 = VAR_14 + VAR_25 - 1;

 if (VAR_23) {
  VAR_22 = FUNC_2(VAR_17, VAR_25);
  if (VAR_22)
   goto out;
 }

 while (1) {
  FUNC_13(&FUNC_0(VAR_17)->io_tree, VAR_20, VAR_21,
     0, &VAR_19);





  VAR_18 = FUNC_3(VAR_17, VAR_20,
           VAR_21 - VAR_20 + 1);
  if (!VAR_18 && (!VAR_23 ||
      !FUNC_15(&FUNC_0(VAR_17)->io_tree,
        VAR_20, VAR_21, VAR_5, 0,
        VAR_19)))
   break;

  FUNC_16(&FUNC_0(VAR_17)->io_tree, VAR_20, VAR_21,
         &VAR_19, VAR_6);

  if (VAR_18) {
   FUNC_5(VAR_17, VAR_18, 1);
   FUNC_4(VAR_18);
  } else {

   VAR_22 = FUNC_9(VAR_16->f_mapping,
          VAR_20,
          VAR_21);
   if (VAR_22)
    goto out;





   VAR_22 = FUNC_11(VAR_16->f_mapping,
     VAR_20 >> VAR_7,
     VAR_21 >> VAR_7);
   if (VAR_22) {
    if (VAR_22 == -VAR_0)
     VAR_22 = 0;
    goto out;
   }
  }

  FUNC_8();
 }





 if (VAR_23) {
  VAR_24 = VAR_2 | VAR_3;
  VAR_22 = FUNC_14(&FUNC_0(VAR_17)->io_tree, VAR_20, VAR_21,
         VAR_2, ((void*)0), &VAR_19,
         VAR_6);
  if (VAR_22) {
   FUNC_7(&FUNC_0(VAR_17)->io_tree, VAR_20,
      VAR_21, VAR_4 | VAR_24,
      1, 0, &VAR_19, VAR_6);
   goto out;
  }
 }

 FUNC_10(VAR_19);
 VAR_19 = ((void*)0);

 VAR_22 = FUNC_1(VAR_11, VAR_12, VAR_17,
     FUNC_0(VAR_17)->root->fs_info->fs_devices->latest_bdev,
     VAR_13, VAR_14, VAR_15, VAR_9, ((void*)0),
     VAR_10, 0);

 if (VAR_22 < 0 && VAR_22 != -VAR_1) {
  FUNC_7(&FUNC_0(VAR_17)->io_tree, VAR_14,
         VAR_14 + FUNC_12(VAR_13, VAR_15) - 1,
         VAR_4 | VAR_24, 1, 0,
         &VAR_19, VAR_6);
 } else if (VAR_22 >= 0 && VAR_22 < FUNC_12(VAR_13, VAR_15)) {




  FUNC_7(&FUNC_0(VAR_17)->io_tree, VAR_14 + VAR_22,
         VAR_14 + FUNC_12(VAR_13, VAR_15) - 1,
         VAR_4 | VAR_24, 1, 0,
         &VAR_19, VAR_6);
 }
out:
 FUNC_10(VAR_19);
 return VAR_22;
}
