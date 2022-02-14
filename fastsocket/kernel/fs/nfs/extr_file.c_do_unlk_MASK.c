
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_lock_context {int io_count; } ;
struct inode {int dummy; } ;
struct file_lock {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_4__ {int (* lock ) (struct file*,int,struct file_lock*) ;} ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (struct nfs_lock_context*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct file*,struct file_lock*) ;
 int FUNC_3 (struct file*) ;
 struct nfs_lock_context* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nfs_lock_context*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct file*,int,struct file_lock*) ;

__attribute__((used)) static int
FUNC_9(struct file *VAR_0, int VAR_1, struct file_lock *VAR_2, int VAR_3)
{
 struct inode *VAR_4 = VAR_0->f_mapping->host;
 struct nfs_lock_context *VAR_5;
 int VAR_6;





 FUNC_7(VAR_0->f_mapping);

 VAR_5 = FUNC_4(FUNC_3(VAR_0));
 if (!FUNC_0(VAR_5)) {
  VAR_6 = FUNC_5(&VAR_5->io_count);
  FUNC_6(VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
 }
 if (!VAR_3)
  VAR_6 = FUNC_1(VAR_4)->lock(VAR_0, VAR_1, VAR_2);
 else
  VAR_6 = FUNC_2(VAR_0, VAR_2);
 return VAR_6;
}
