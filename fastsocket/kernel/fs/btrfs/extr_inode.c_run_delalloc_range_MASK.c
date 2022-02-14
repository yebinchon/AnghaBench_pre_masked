
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct TYPE_2__ {int flags; int runtime_flags; int force_compress; struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct btrfs_root*,int ) ;
 int FUNC_2 (struct inode*,struct page*,int ,int ,int*,unsigned long*,int) ;
 int FUNC_3 (struct inode*,struct page*,int ,int ,int*,unsigned long*) ;
 int FUNC_4 (struct inode*,struct page*,int ,int ,int*,int,unsigned long*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_5, struct page *VAR_6,
         u64 VAR_7, u64 VAR_8, int *VAR_9,
         unsigned long *VAR_10)
{
 int VAR_11;
 struct btrfs_root *VAR_12 = FUNC_0(VAR_5)->root;

 if (FUNC_0(VAR_5)->flags & VAR_2) {
  VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9, 1, VAR_10);
 } else if (FUNC_0(VAR_5)->flags & VAR_3) {
  VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9, 0, VAR_10);
 } else if (!FUNC_1(VAR_12, VAR_4) &&
     !(FUNC_0(VAR_5)->force_compress) &&
     !(FUNC_0(VAR_5)->flags & VAR_0)) {
  VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8,
          VAR_9, VAR_10, 1);
 } else {
  FUNC_5(VAR_1,
   &FUNC_0(VAR_5)->runtime_flags);
  VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8,
        VAR_9, VAR_10);
 }
 return VAR_11;
}
