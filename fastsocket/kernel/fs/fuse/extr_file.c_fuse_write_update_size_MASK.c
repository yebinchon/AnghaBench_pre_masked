
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; } ;
struct fuse_inode {scalar_t__ attr_version; } ;
struct fuse_conn {int lock; scalar_t__ attr_version; } ;
typedef scalar_t__ loff_t ;


 struct fuse_conn* FUNC_0 (struct inode*) ;
 struct fuse_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0, loff_t VAR_1)
{
 struct fuse_conn *VAR_2 = FUNC_0(VAR_0);
 struct fuse_inode *VAR_3 = FUNC_1(VAR_0);

 FUNC_3(&VAR_2->lock);
 VAR_3->attr_version = ++VAR_2->attr_version;
 if (VAR_1 > VAR_0->i_size)
  FUNC_2(VAR_0, VAR_1);
 FUNC_4(&VAR_2->lock);
}
