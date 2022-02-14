
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ncp_server {int dummy; } ;
struct TYPE_9__ {int mode; } ;
struct TYPE_10__ {int dirEntNum; TYPE_4__ nfs; } ;
struct ncp_entry_info {TYPE_5__ i; int volume; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {int len; int name; } ;
struct dentry {TYPE_3__ d_name; TYPE_2__* d_parent; } ;
typedef int __u8 ;
typedef int __name ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_1__ d_name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ncp_server* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ncp_server*,struct dentry*) ;
 int FUNC_5 (struct ncp_server*) ;
 int FUNC_6 (struct inode*,struct dentry*,struct ncp_entry_info*) ;
 int FUNC_7 (struct ncp_server*,int *,int*,int ,int ,int) ;
 scalar_t__ FUNC_8 (struct ncp_server*,int ) ;
 scalar_t__ FUNC_9 (struct ncp_server*,int ,int ,int,int ) ;
 scalar_t__ FUNC_10 (struct ncp_server*,struct inode*,int *,int ,int ,int ,struct ncp_entry_info*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_6, struct dentry *VAR_7, int VAR_8)
{
 struct ncp_entry_info VAR_9;
 struct ncp_server *VAR_10 = FUNC_1(VAR_6);
 int VAR_11, VAR_12;
 __u8 VAR_13[VAR_2 + 1];

 FUNC_0("ncp_mkdir: making %s/%s\n",
  VAR_7->d_parent->d_name.name, VAR_7->d_name.name);

 VAR_11 = -VAR_1;
 FUNC_3();
 if (!FUNC_5(VAR_10))
  goto out;

 FUNC_4(VAR_10, VAR_7);
 VAR_12 = sizeof(VAR_13);
 VAR_11 = FUNC_7(VAR_10, VAR_13, &VAR_12, VAR_7->d_name.name,
      VAR_7->d_name.len, !FUNC_11(VAR_6));
 if (VAR_11)
  goto out;

 VAR_11 = -VAR_0;
 if (FUNC_10(VAR_10, VAR_6, VAR_13,
        VAR_3, VAR_5,
        FUNC_2(0xffff),
        &VAR_9) == 0)
 {
  if (FUNC_8(VAR_10, VAR_9.volume)) {
   VAR_8 |= VAR_4;
   VAR_9.i.nfs.mode = VAR_8;
   if (FUNC_9(VAR_10,
      VAR_9.volume,
      VAR_9.i.dirEntNum,
      VAR_8, 0) != 0)
    goto out;
  }
  VAR_11 = FUNC_6(VAR_6, VAR_7, &VAR_9);
 }
out:
 FUNC_12();
 return VAR_11;
}
