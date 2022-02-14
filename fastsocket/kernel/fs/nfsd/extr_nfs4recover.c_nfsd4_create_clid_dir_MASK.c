
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfs4_client {char* cl_recdir; int cl_firststate; } ;
struct dentry {TYPE_2__* d_inode; } ;
struct cred {int dummy; } ;
struct TYPE_5__ {int mnt; struct dentry* dentry; } ;
struct TYPE_7__ {TYPE_1__ f_path; } ;
struct TYPE_6__ {int i_mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (char*,struct dentry*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct cred const*) ;
 int FUNC_10 (struct cred const**) ;
 TYPE_3__* VAR_3 ;
 int FUNC_11 (TYPE_3__*,struct dentry*,int ) ;
 int FUNC_12 (TYPE_2__*,struct dentry*,int ) ;

int
FUNC_13(struct nfs4_client *VAR_4)
{
 const struct cred *VAR_5;
 char *VAR_6 = VAR_4->cl_recdir;
 struct dentry *VAR_7, *VAR_8;
 int VAR_9;

 FUNC_2("NFSD: nfsd4_create_clid_dir for \"%s\"\n", VAR_6);

 if (!VAR_3 || VAR_4->cl_firststate)
  return 0;

 VAR_9 = FUNC_10(&VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_6(VAR_3->f_path.mnt);
 if (VAR_9)
  return VAR_9;

 VAR_7 = VAR_3->f_path.dentry;

 FUNC_7(&VAR_7->d_inode->i_mutex);

 VAR_8 = FUNC_4(VAR_6, VAR_7, VAR_1-1);
 if (FUNC_0(VAR_8)) {
  VAR_9 = FUNC_1(VAR_8);
  goto out_unlock;
 }
 VAR_9 = -VAR_0;
 if (VAR_8->d_inode) {
  FUNC_2("NFSD: nfsd4_create_clid_dir: DIRECTORY EXISTS\n");
  goto out_put;
 }
 VAR_9 = FUNC_12(VAR_7->d_inode, VAR_8, VAR_2);
out_put:
 FUNC_3(VAR_8);
out_unlock:
 FUNC_8(&VAR_7->d_inode->i_mutex);
 if (VAR_9 == 0) {
  VAR_4->cl_firststate = 1;
  FUNC_11(VAR_3, VAR_3->f_path.dentry, 0);
 }
 FUNC_5(VAR_3->f_path.mnt);
 FUNC_9(VAR_5);
 FUNC_2("NFSD: nfsd4_create_clid_dir returns %d\n", VAR_9);
 return VAR_9;
}
