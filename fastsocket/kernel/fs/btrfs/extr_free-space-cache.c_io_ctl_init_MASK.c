
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct io_ctl {int num_pages; int check_crcs; struct btrfs_root* root; int pages; } ;
struct inode {int dummy; } ;
struct btrfs_root {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct io_ctl*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct io_ctl *VAR_5, struct inode *VAR_6,
         struct btrfs_root *VAR_7)
{
 FUNC_3(VAR_5, 0, sizeof(struct io_ctl));
 VAR_5->num_pages = (FUNC_1(VAR_6) + VAR_4 - 1) >>
  VAR_3;
 VAR_5->pages = FUNC_2(sizeof(struct page *) * VAR_5->num_pages,
    VAR_2);
 if (!VAR_5->pages)
  return -VAR_1;
 VAR_5->root = VAR_7;
 if (FUNC_0(VAR_6) != VAR_0)
  VAR_5->check_crcs = 1;
 return 0;
}
