
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int name; } ;
typedef TYPE_2__ svc_client ;
struct svc_fh {int fh_handle; } ;
struct svc_export {int dummy; } ;
struct path {TYPE_3__* dentry; } ;
struct knfsd_fh {int dummy; } ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_9__ {struct inode* d_inode; } ;
struct TYPE_7__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct svc_export*) ;
 int FUNC_1 (struct svc_export*) ;
 int FUNC_2 (char*,char*,TYPE_3__*,int ,int ,int ) ;
 struct svc_export* FUNC_3 (TYPE_2__*,struct path*) ;
 int FUNC_4 (struct svc_export*) ;
 scalar_t__ FUNC_5 (struct svc_fh*,struct svc_export*,TYPE_3__*,int *) ;
 int FUNC_6 (struct svc_fh*,int) ;
 int FUNC_7 (struct svc_fh*) ;
 scalar_t__ FUNC_8 (char*,int ,struct path*) ;
 int FUNC_9 (struct knfsd_fh*,int *,int) ;
 int FUNC_10 (struct path*) ;
 int FUNC_11 (char*,char*) ;

int
FUNC_12(svc_client *VAR_2, char *VAR_3, struct knfsd_fh *VAR_4, int VAR_5)
{
 struct svc_export *VAR_6;
 struct path VAR_7;
 struct inode *VAR_8;
 struct svc_fh VAR_9;
 int VAR_10;

 VAR_10 = -VAR_1;

 if (FUNC_8(VAR_3, 0, &VAR_7)) {
  FUNC_11("nfsd: exp_rootfh path not found %s", VAR_3);
  return VAR_10;
 }
 VAR_8 = VAR_7.dentry->d_inode;

 FUNC_2("nfsd: exp_rootfh(%s [%p] %s:%s/%ld)\n",
   VAR_3, VAR_7.dentry, VAR_2->name,
   VAR_8->i_sb->s_id, VAR_8->i_ino);
 VAR_6 = FUNC_3(VAR_2, &VAR_7);
 if (FUNC_0(VAR_6)) {
  VAR_10 = FUNC_1(VAR_6);
  goto out;
 }




 FUNC_6(&VAR_9, VAR_5);
 if (FUNC_5(&VAR_9, VAR_6, VAR_7.dentry, ((void*)0)))
  VAR_10 = -VAR_0;
 else
  VAR_10 = 0;
 FUNC_9(VAR_4, &VAR_9.fh_handle, sizeof(struct knfsd_fh));
 FUNC_7(&VAR_9);
 FUNC_4(VAR_6);
out:
 FUNC_10(&VAR_7);
 return VAR_10;
}
