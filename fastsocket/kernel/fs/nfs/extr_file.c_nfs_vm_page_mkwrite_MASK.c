
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vm_fault {struct page* page; } ;
struct vm_area_struct {struct file* vm_file; } ;
struct page {struct address_space* mapping; } ;
struct TYPE_8__ {struct dentry* dentry; } ;
struct file {TYPE_6__* f_mapping; TYPE_1__ f_path; } ;
struct TYPE_11__ {int name; } ;
struct dentry {TYPE_7__* d_inode; TYPE_4__ d_name; TYPE_3__* d_parent; } ;
struct address_space {int dummy; } ;
struct TYPE_14__ {struct address_space* i_mapping; } ;
struct TYPE_13__ {TYPE_5__* host; } ;
struct TYPE_12__ {int i_ino; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_10__ {TYPE_2__ d_name; } ;


 int FUNC_0 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,int ,int ,long long) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct file*,struct page*) ;
 int FUNC_4 (int ,struct page*) ;
 unsigned int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct file*,struct page*,int ,unsigned int) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static int FUNC_9(struct vm_area_struct *VAR_4, struct vm_fault *VAR_5)
{
 struct page *VAR_6 = VAR_5->page;
 struct file *VAR_7 = VAR_4->vm_file;
 struct dentry *VAR_8 = VAR_7->f_path.dentry;
 unsigned VAR_9;
 int VAR_10 = VAR_2;
 struct address_space *VAR_11;

 FUNC_1(VAR_0, "NFS: vm_page_mkwrite(%s/%s(%ld), offset %lld)\n",
  VAR_8->d_parent->d_name.name, VAR_8->d_name.name,
  VAR_7->f_mapping->host->i_ino,
  (long long)FUNC_7(VAR_6));


 FUNC_4(FUNC_0(VAR_8->d_inode), VAR_6);

 FUNC_2(VAR_6);
 VAR_11 = VAR_6->mapping;
 if (VAR_11 != VAR_8->d_inode->i_mapping)
  goto out_unlock;

 VAR_9 = FUNC_5(VAR_6);
 if (VAR_9 == 0)
  goto out_unlock;

 VAR_10 = VAR_1;
 if (FUNC_3(VAR_7, VAR_6) == 0 &&
     FUNC_6(VAR_7, VAR_6, 0, VAR_9) == 0)
  goto out;

 VAR_10 = VAR_3;
out_unlock:
 FUNC_8(VAR_6);
out:
 return VAR_10;
}
