
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {scalar_t__ i_size; int i_ctime; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ offset; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int flags; struct btrfs_root* root; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,int) ;
 int FUNC_4 (struct inode*,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_6 (struct inode*,scalar_t__,int *) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_root*,scalar_t__,scalar_t__,int ,scalar_t__,struct btrfs_key*,int) ;
 struct btrfs_trans_handle* FUNC_8 (struct btrfs_root*,int) ;
 int FUNC_9 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_10 (struct inode*,scalar_t__) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct btrfs_trans_handle*,struct inode*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_4, int VAR_5,
           u64 VAR_6, u64 VAR_7, u64 VAR_8,
           loff_t VAR_9, u64 *VAR_10,
           struct btrfs_trans_handle *VAR_11)
{
 struct btrfs_root *VAR_12 = FUNC_0(VAR_4)->root;
 struct btrfs_key VAR_13;
 u64 VAR_14 = VAR_6;
 u64 VAR_15;
 int VAR_16 = 0;
 bool VAR_17 = 1;

 if (VAR_11)
  VAR_17 = 0;
 while (VAR_7 > 0) {
  if (VAR_17) {
   VAR_11 = FUNC_8(VAR_12, 3);
   if (FUNC_1(VAR_11)) {
    VAR_16 = FUNC_2(VAR_11);
    break;
   }
  }

  VAR_16 = FUNC_7(VAR_11, VAR_12, VAR_7, VAR_8,
        0, *VAR_10, &VAR_13, 1);
  if (VAR_16) {
   if (VAR_17)
    FUNC_5(VAR_11, VAR_12);
   break;
  }

  VAR_16 = FUNC_12(VAR_11, VAR_4,
        VAR_14, VAR_13.objectid,
        VAR_13.offset, VAR_13.offset,
        VAR_13.offset, 0, 0, 0,
        VAR_0);
  if (VAR_16) {
   FUNC_3(VAR_11, VAR_12, VAR_16);
   if (VAR_17)
    FUNC_5(VAR_11, VAR_12);
   break;
  }
  FUNC_4(VAR_4, VAR_14,
     VAR_14 + VAR_13.offset -1, 0);

  VAR_7 -= VAR_13.offset;
  VAR_14 += VAR_13.offset;
  *VAR_10 = VAR_13.objectid + VAR_13.offset;

  FUNC_11(VAR_4);
  VAR_4->i_ctime = VAR_2;
  FUNC_0(VAR_4)->flags |= VAR_1;
  if (!(VAR_5 & VAR_3) &&
      (VAR_9 > VAR_4->i_size) &&
      (VAR_14 > VAR_4->i_size)) {
   if (VAR_14 > VAR_9)
    VAR_15 = VAR_9;
   else
    VAR_15 = VAR_14;
   FUNC_10(VAR_4, VAR_15);
   FUNC_6(VAR_4, VAR_15, ((void*)0));
  }

  VAR_16 = FUNC_9(VAR_11, VAR_12, VAR_4);

  if (VAR_16) {
   FUNC_3(VAR_11, VAR_12, VAR_16);
   if (VAR_17)
    FUNC_5(VAR_11, VAR_12);
   break;
  }

  if (VAR_17)
   FUNC_5(VAR_11, VAR_12);
 }
 return VAR_16;
}
