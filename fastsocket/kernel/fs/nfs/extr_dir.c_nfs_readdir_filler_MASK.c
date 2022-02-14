
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct page {scalar_t__ index; } ;
struct inode {int i_mapping; } ;
struct TYPE_10__ {TYPE_3__* file; } ;
typedef TYPE_4__ nfs_readdir_descriptor_t ;
struct TYPE_8__ {TYPE_1__* dentry; } ;
struct TYPE_9__ {TYPE_2__ f_path; } ;
struct TYPE_7__ {struct inode* d_inode; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (TYPE_4__*,struct page*,struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static
int FUNC_5(nfs_readdir_descriptor_t *VAR_0, struct page* VAR_1)
{
 struct inode *VAR_2 = VAR_0->file->f_path.dentry->d_inode;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  goto error;
 FUNC_0(VAR_1);

 if (FUNC_1(VAR_2->i_mapping, VAR_1->index + 1, -1) < 0) {

  FUNC_3(VAR_2, VAR_2->i_mapping);
 }
 FUNC_4(VAR_1);
 return 0;
 error:
 FUNC_4(VAR_1);
 return VAR_3;
}
