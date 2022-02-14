
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_stateowner {int dummy; } ;
struct nfs4_file {struct inode* fi_inode; } ;
struct inode {struct file_lock* i_flock; } ;
struct file_lock {scalar_t__ fl_owner; struct file_lock* fl_next; } ;
typedef scalar_t__ fl_owner_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(struct nfs4_file *VAR_0, struct nfs4_stateowner *VAR_1)
{
 struct file_lock **VAR_2;
 struct inode *VAR_3 = VAR_0->fi_inode;
 int VAR_4 = 0;

 FUNC_0();
 for (VAR_2 = &VAR_3->i_flock; *VAR_2 != ((void*)0); VAR_2 = &(*VAR_2)->fl_next) {
  if ((*VAR_2)->fl_owner == (fl_owner_t)VAR_1) {
   VAR_4 = 1;
   goto out;
  }
 }
out:
 FUNC_1();
 return VAR_4;
}
