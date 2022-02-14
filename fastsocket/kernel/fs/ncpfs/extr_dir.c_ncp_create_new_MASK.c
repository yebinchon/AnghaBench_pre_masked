
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


struct TYPE_7__ {int flags; } ;
struct ncp_server {TYPE_1__ m; } ;
struct TYPE_11__ {int mode; int rdev; } ;
struct TYPE_12__ {int dirEntNum; TYPE_5__ nfs; } ;
struct ncp_entry_info {int access; TYPE_6__ i; int volume; } ;
struct inode {int dummy; } ;
struct TYPE_10__ {int name; int len; } ;
struct dentry {TYPE_4__ d_name; TYPE_3__* d_parent; } ;
typedef int dev_t ;
typedef int __u8 ;
typedef int __name ;
typedef int __le32 ;
struct TYPE_8__ {int name; } ;
struct TYPE_9__ {TYPE_2__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ncp_server* FUNC_1 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (char*,int ,int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 () ;
 int FUNC_5 (struct ncp_server*,struct dentry*) ;
 int FUNC_6 (struct ncp_server*) ;
 int FUNC_7 (struct inode*,struct dentry*,struct ncp_entry_info*) ;
 int FUNC_8 (struct ncp_server*,int *,int*,int ,int ,int) ;
 scalar_t__ FUNC_9 (struct ncp_server*,int ) ;
 scalar_t__ FUNC_10 (struct ncp_server*,int ,int ,int,int ) ;
 int FUNC_11 (struct ncp_server*,struct inode*,int *,int,int,int,struct ncp_entry_info*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;

int FUNC_15(struct inode *VAR_15, struct dentry *VAR_16, int VAR_17,
     dev_t VAR_18, __le32 VAR_19)
{
 struct ncp_server *VAR_20 = FUNC_1(VAR_15);
 struct ncp_entry_info VAR_21;
 int VAR_22, VAR_23, VAR_24;
 int VAR_25;
 __u8 VAR_26[VAR_5 + 1];

 FUNC_2("ncp_create_new: creating %s/%s, mode=%x\n",
  VAR_16->d_parent->d_name.name, VAR_16->d_name.name, VAR_17);

 VAR_22 = -VAR_3;
 FUNC_4();
 if (!FUNC_6(VAR_20))
  goto out;

 FUNC_5(VAR_20, VAR_16);
 VAR_24 = sizeof(VAR_26);
 VAR_22 = FUNC_8(VAR_20, VAR_26, &VAR_24, VAR_16->d_name.name,
      VAR_16->d_name.len, !FUNC_12(VAR_15));
 if (VAR_22)
  goto out;

 VAR_22 = -VAR_2;

 if (FUNC_3(VAR_17) &&
     (VAR_20->m.flags & VAR_6) &&
     (VAR_17 & VAR_12))
  VAR_19 |= VAR_14 | VAR_13;

 VAR_23 = FUNC_11(VAR_20, VAR_15, VAR_26,
    VAR_7 | VAR_8 | VAR_9,
    VAR_19, VAR_0 | VAR_1, &VAR_21);
 VAR_25 = VAR_10;
 if (VAR_23) {
  VAR_23 = FUNC_11(VAR_20, VAR_15, VAR_26,
    VAR_7 | VAR_8 | VAR_9,
    VAR_19, VAR_1, &VAR_21);
  if (VAR_23) {
   if (VAR_23 == 0x87)
    VAR_22 = -VAR_4;
   FUNC_0("ncp_create: %s/%s failed\n",
    VAR_16->d_parent->d_name.name, VAR_16->d_name.name);
   goto out;
  }
  VAR_25 = VAR_11;
 }
 VAR_21.access = VAR_25;
 if (FUNC_9(VAR_20, VAR_21.volume)) {
  VAR_21.i.nfs.mode = VAR_17;
  VAR_21.i.nfs.rdev = FUNC_13(VAR_18);
  if (FUNC_10(VAR_20, VAR_21.volume,
     VAR_21.i.dirEntNum,
     VAR_17, FUNC_13(VAR_18)) != 0)
   goto out;
 }

 VAR_22 = FUNC_7(VAR_15, VAR_16, &VAR_21);
out:
 FUNC_14();
 return VAR_22;
}
