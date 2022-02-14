
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int dummy; } ;
struct nfs4_state {struct inode* inode; } ;
struct inode {struct file_lock* i_flock; } ;
struct file_lock {int fl_flags; int fl_file; struct file_lock* fl_next; } ;
typedef int nfs4_stateid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct file_lock*,struct nfs4_state*,int const*) ;
 struct nfs_open_context* FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct nfs_open_context *VAR_2, struct nfs4_state *VAR_3, const nfs4_stateid *VAR_4)
{
 struct inode *VAR_5 = VAR_3->inode;
 struct file_lock *VAR_6;
 int VAR_7 = 0;

 if (VAR_5->i_flock == ((void*)0))
  return 0;

 if (VAR_5->i_flock == ((void*)0))
  goto out;

 FUNC_0();
 for (VAR_6 = VAR_5->i_flock; VAR_6 != ((void*)0); VAR_6 = VAR_6->fl_next) {
  if (!(VAR_6->fl_flags & (VAR_1|VAR_0)))
   continue;
  if (FUNC_2(VAR_6->fl_file) != VAR_2)
   continue;
  FUNC_3();
  VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_4);
  if (VAR_7 < 0)
   goto out;
  FUNC_0();
 }
 FUNC_3();
out:
 return VAR_7;
}
