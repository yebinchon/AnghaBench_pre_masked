
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct nfs_open_context {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_12__ {TYPE_5__* dentry; } ;
struct file {TYPE_6__ f_path; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_11__ {TYPE_4__ d_name; TYPE_3__* d_parent; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_9__ {TYPE_2__ d_name; } ;
struct TYPE_7__ {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,long long,...) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 scalar_t__ FUNC_3 (struct file*,struct page*,struct inode*) ;
 struct nfs_open_context* FUNC_4 (struct file*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct nfs_open_context*,struct page*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_9 (struct page*) ;

int FUNC_10(struct file *VAR_1, struct page *VAR_2,
  unsigned int VAR_3, unsigned int VAR_4)
{
 struct nfs_open_context *VAR_5 = FUNC_4(VAR_1);
 struct inode *VAR_6 = VAR_2->mapping->host;
 int VAR_7 = 0;

 FUNC_5(VAR_6, VAR_0);

 FUNC_0("NFS:       nfs_updatepage(%s/%s %d@%lld)\n",
  VAR_1->f_path.dentry->d_parent->d_name.name,
  VAR_1->f_path.dentry->d_name.name, VAR_4,
  (long long)(FUNC_9(VAR_2) + VAR_3));

 if (FUNC_3(VAR_1, VAR_2, VAR_6)) {
  VAR_4 = FUNC_2(VAR_4 + VAR_3, FUNC_6(VAR_2));
  VAR_3 = 0;
 }

 VAR_7 = FUNC_8(VAR_5, VAR_2, VAR_3, VAR_4);
 if (VAR_7 < 0)
  FUNC_7(VAR_2);

 FUNC_0("NFS:       nfs_updatepage returns %d (isize %lld)\n",
   VAR_7, (long long)FUNC_1(VAR_6));
 return VAR_7;
}
