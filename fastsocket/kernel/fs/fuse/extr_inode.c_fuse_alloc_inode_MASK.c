
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_inode {int forget_req; int page_waitq; int writepages; int queued_writes; int write_files; scalar_t__ orig_ino; scalar_t__ writectr; scalar_t__ attr_version; scalar_t__ nlookup; scalar_t__ nodeid; scalar_t__ i_time; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct fuse_inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 struct inode* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct inode*) ;

__attribute__((used)) static struct inode *FUNC_6(struct super_block *VAR_2)
{
 struct inode *VAR_3;
 struct fuse_inode *VAR_4;

 VAR_3 = FUNC_4(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_3);
 VAR_4->i_time = 0;
 VAR_4->nodeid = 0;
 VAR_4->nlookup = 0;
 VAR_4->attr_version = 0;
 VAR_4->writectr = 0;
 VAR_4->orig_ino = 0;
 FUNC_0(&VAR_4->write_files);
 FUNC_0(&VAR_4->queued_writes);
 FUNC_0(&VAR_4->writepages);
 FUNC_3(&VAR_4->page_waitq);
 VAR_4->forget_req = FUNC_1(0);
 if (!VAR_4->forget_req) {
  FUNC_5(VAR_1, VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
