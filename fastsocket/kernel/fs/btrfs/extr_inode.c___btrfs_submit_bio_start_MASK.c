
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct btrfs_root*,struct inode*,struct bio*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, int VAR_1,
        struct bio *VAR_2, int VAR_3,
        unsigned long VAR_4,
        u64 VAR_5)
{
 struct btrfs_root *VAR_6 = FUNC_0(VAR_0)->root;
 int VAR_7 = 0;

 VAR_7 = FUNC_2(VAR_6, VAR_0, VAR_2, 0, 0);
 FUNC_1(VAR_7);
 return 0;
}
