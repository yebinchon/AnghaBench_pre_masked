
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_data; int * i_mapping; int i_sb; } ;
struct file {unsigned short f_flags; int * private_data; TYPE_1__* f_cred; } ;
struct coda_inode_info {scalar_t__ c_mapcount; } ;
struct coda_file_info {scalar_t__ cfi_magic; TYPE_4__* cfi_container; scalar_t__ cfi_mapcount; } ;
struct TYPE_7__ {TYPE_2__* dentry; } ;
struct TYPE_8__ {TYPE_3__ f_path; } ;
struct TYPE_6__ {struct inode* d_inode; } ;
struct TYPE_5__ {int fsuid; } ;


 int FUNC_0 (int) ;
 struct coda_file_info* FUNC_1 (struct file*) ;
 scalar_t__ VAR_0 ;
 struct coda_inode_info* FUNC_2 (struct inode*) ;
 unsigned short VAR_1 ;
 unsigned short FUNC_3 (unsigned short) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,unsigned short,int ) ;

int FUNC_10(struct inode *VAR_2, struct file *VAR_3)
{
 unsigned short VAR_4 = (VAR_3->f_flags) & (~VAR_1);
 unsigned short VAR_5 = FUNC_3(VAR_4);
 struct coda_file_info *VAR_6;
 struct coda_inode_info *VAR_7;
 struct inode *VAR_8;
 int VAR_9 = 0;

 FUNC_7();

 VAR_6 = FUNC_1(VAR_3);
 FUNC_0(!VAR_6 || VAR_6->cfi_magic != VAR_0);

 VAR_9 = FUNC_9(VAR_2->i_sb, FUNC_4(VAR_2),
     VAR_5, VAR_3->f_cred->fsuid);

 VAR_8 = VAR_6->cfi_container->f_path.dentry->d_inode;
 VAR_7 = FUNC_2(VAR_2);


 if (VAR_2->i_mapping == &VAR_8->i_data) {
  VAR_7->c_mapcount -= VAR_6->cfi_mapcount;
  if (!VAR_7->c_mapcount)
   VAR_2->i_mapping = &VAR_2->i_data;
 }

 FUNC_5(VAR_6->cfi_container);
 FUNC_6(VAR_3->private_data);
 VAR_3->private_data = ((void*)0);

 FUNC_8();



 return 0;
}
