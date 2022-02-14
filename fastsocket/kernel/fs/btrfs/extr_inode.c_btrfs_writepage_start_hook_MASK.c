
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct page {TYPE_2__* mapping; } ;
struct inode {int dummy; } ;
struct TYPE_7__ {int func; } ;
struct btrfs_writepage_fixup {TYPE_3__ work; struct page* page; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_8__ {struct btrfs_root* root; } ;
struct TYPE_6__ {struct inode* host; } ;
struct TYPE_5__ {int fixup_workers; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int VAR_3 ;
 struct btrfs_writepage_fixup* FUNC_5 (int,int ) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static int FUNC_7(struct page *VAR_4, u64 VAR_5, u64 VAR_6)
{
 struct inode *VAR_7 = VAR_4->mapping->host;
 struct btrfs_writepage_fixup *VAR_8;
 struct btrfs_root *VAR_9 = FUNC_0(VAR_7)->root;


 if (FUNC_3(VAR_4))
  return 0;

 if (FUNC_1(VAR_4))
  return -VAR_0;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 FUNC_2(VAR_4);
 FUNC_6(VAR_4);
 VAR_8->work.func = VAR_3;
 VAR_8->page = VAR_4;
 FUNC_4(&VAR_9->fs_info->fixup_workers, &VAR_8->work);
 return -VAR_1;
}
