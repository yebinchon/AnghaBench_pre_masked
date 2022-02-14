
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxfs_direct {int d_ino; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
typedef int ino_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct vxfs_direct* FUNC_2 (struct inode*,struct dentry*,struct page**) ;

__attribute__((used)) static ino_t
FUNC_3(struct inode *VAR_0, struct dentry *VAR_1)
{
 struct vxfs_direct *VAR_2;
 struct page *VAR_3;
 ino_t VAR_4 = 0;

 VAR_2 = FUNC_2(VAR_0, VAR_1, &VAR_3);
 if (VAR_2) {
  VAR_4 = VAR_2->d_ino;
  FUNC_0(VAR_3);
  FUNC_1(VAR_3);
 }

 return (VAR_4);
}
