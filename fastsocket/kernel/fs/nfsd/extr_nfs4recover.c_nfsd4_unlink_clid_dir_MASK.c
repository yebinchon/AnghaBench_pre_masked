
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dentry {TYPE_2__* d_inode; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct TYPE_6__ {TYPE_1__ f_path; } ;
struct TYPE_5__ {int i_mutex; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (char*,struct dentry*,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 TYPE_3__* VAR_2 ;
 int FUNC_7 (TYPE_2__*,struct dentry*) ;

__attribute__((used)) static int
FUNC_8(char *VAR_3, int VAR_4)
{
 struct dentry *VAR_5, *VAR_6;
 int VAR_7;

 FUNC_2("NFSD: nfsd4_unlink_clid_dir. name %.*s\n", VAR_4, VAR_3);

 VAR_5 = VAR_2->f_path.dentry;
 FUNC_5(&VAR_5->d_inode->i_mutex, VAR_1);
 VAR_6 = FUNC_4(VAR_3, VAR_5, VAR_4);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  goto out_unlock;
 }
 VAR_7 = -VAR_0;
 if (!VAR_6->d_inode)
  goto out;
 VAR_7 = FUNC_7(VAR_5->d_inode, VAR_6);
out:
 FUNC_3(VAR_6);
out_unlock:
 FUNC_6(&VAR_5->d_inode->i_mutex);
 return VAR_7;
}
