
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_mapping; } ;
struct fuse_req {int * pages; int writepages_entry; struct inode* inode; } ;
struct fuse_inode {int page_waitq; } ;
struct fuse_conn {int dummy; } ;
struct backing_dev_info {int dummy; } ;
struct TYPE_2__ {struct backing_dev_info* backing_dev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct backing_dev_info*) ;
 int FUNC_1 (struct backing_dev_info*,int ) ;
 int FUNC_2 (int ,int ) ;
 struct fuse_inode* FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct fuse_conn *VAR_2, struct fuse_req *VAR_3)
{
 struct inode *VAR_4 = VAR_3->inode;
 struct fuse_inode *VAR_5 = FUNC_3(VAR_4);
 struct backing_dev_info *VAR_6 = VAR_4->i_mapping->backing_dev_info;

 FUNC_4(&VAR_3->writepages_entry);
 FUNC_1(VAR_6, VAR_0);
 FUNC_2(VAR_3->pages[0], VAR_1);
 FUNC_0(VAR_6);
 FUNC_5(&VAR_5->page_waitq);
}
