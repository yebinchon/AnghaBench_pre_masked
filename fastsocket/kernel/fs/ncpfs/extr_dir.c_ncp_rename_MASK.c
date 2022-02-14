
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
struct ncp_server {TYPE_3__ m; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {int name; int len; } ;
struct dentry {TYPE_4__ d_name; TYPE_2__* d_parent; } ;
typedef int __u8 ;
typedef int __old_name ;
typedef int __new_name ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_1__ d_name; } ;


 int FUNC_0 (char*,int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ncp_server* FUNC_1 (struct inode*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ncp_server*,struct dentry*) ;
 int FUNC_4 (struct ncp_server*) ;
 int FUNC_5 (struct inode*,struct dentry*,int *,struct inode*,struct dentry*,int *) ;
 int FUNC_6 (struct ncp_server*,int *,int*,int ,int ,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct ncp_server*,struct inode*,int *,struct inode*,int *) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_6, struct dentry *VAR_7,
        struct inode *VAR_8, struct dentry *VAR_9)
{
 struct ncp_server *VAR_10 = FUNC_1(VAR_6);
 int VAR_11;
 int VAR_12, VAR_13;
 __u8 VAR_14[VAR_4 + 1], VAR_15[VAR_4 + 1];

 FUNC_0("ncp_rename: %s/%s to %s/%s\n",
  VAR_7->d_parent->d_name.name, VAR_7->d_name.name,
  VAR_9->d_parent->d_name.name, VAR_9->d_name.name);

 VAR_11 = -VAR_1;
 FUNC_2();
 if (!FUNC_4(VAR_10))
  goto out;

 FUNC_3(VAR_10, VAR_7);
 FUNC_3(VAR_10, VAR_9);

 VAR_12 = sizeof(VAR_14);
 VAR_11 = FUNC_6(VAR_10, VAR_14, &VAR_12,
      VAR_7->d_name.name, VAR_7->d_name.len,
      !FUNC_7(VAR_6));
 if (VAR_11)
  goto out;

 VAR_13 = sizeof(VAR_15);
 VAR_11 = FUNC_6(VAR_10, VAR_15, &VAR_13,
      VAR_9->d_name.name, VAR_9->d_name.len,
      !FUNC_7(VAR_8));
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_8(VAR_10, VAR_6, VAR_14,
            VAR_8, VAR_15);







 switch (VAR_11) {
  case 0x00:
                        FUNC_0("ncp renamed %s -> %s.\n",
                                VAR_7->d_name.name,VAR_9->d_name.name);
   break;
  case 0x9E:
   VAR_11 = -VAR_2;
   break;
  case 0xFF:
   VAR_11 = -VAR_3;
   break;
  default:
   VAR_11 = -VAR_0;
   break;
 }
out:
 FUNC_9();
 return VAR_11;
}
