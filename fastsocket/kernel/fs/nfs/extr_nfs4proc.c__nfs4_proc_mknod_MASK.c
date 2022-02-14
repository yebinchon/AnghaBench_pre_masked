
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* specdata2; void* specdata1; } ;
struct TYPE_5__ {TYPE_1__ device; } ;
struct TYPE_6__ {TYPE_2__ u; int ftype; } ;
struct nfs4_createdata {TYPE_3__ arg; } ;
struct inode {int dummy; } ;
struct iattr {int ia_mode; int ia_valid; } ;
struct dentry {int d_name; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 struct nfs4_createdata* FUNC_7 (struct inode*,int *,struct iattr*,int ) ;
 int FUNC_8 (struct inode*,struct dentry*,struct nfs4_createdata*) ;
 int FUNC_9 (struct nfs4_createdata*) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_6, struct dentry *VAR_7,
  struct iattr *VAR_8, dev_t VAR_9)
{
 struct nfs4_createdata *VAR_10;
 int VAR_11 = VAR_8->ia_mode;
 int VAR_12 = -VAR_1;

 FUNC_0(!(VAR_8->ia_valid & VAR_0));
 FUNC_0(!FUNC_5(VAR_11) && !FUNC_3(VAR_11) && !FUNC_4(VAR_11) && !FUNC_6(VAR_11));

 VAR_10 = FUNC_7(VAR_6, &VAR_7->d_name, VAR_8, VAR_5);
 if (VAR_10 == ((void*)0))
  goto out;

 if (FUNC_5(VAR_11))
  VAR_10->arg.ftype = VAR_4;
 else if (FUNC_3(VAR_11)) {
  VAR_10->arg.ftype = VAR_2;
  VAR_10->arg.u.device.specdata1 = FUNC_1(VAR_9);
  VAR_10->arg.u.device.specdata2 = FUNC_2(VAR_9);
 }
 else if (FUNC_4(VAR_11)) {
  VAR_10->arg.ftype = VAR_3;
  VAR_10->arg.u.device.specdata1 = FUNC_1(VAR_9);
  VAR_10->arg.u.device.specdata2 = FUNC_2(VAR_9);
 }

 VAR_12 = FUNC_8(VAR_6, VAR_7, VAR_10);

 FUNC_9(VAR_10);
out:
 return VAR_12;
}
