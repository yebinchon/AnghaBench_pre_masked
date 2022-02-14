
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ncp_server {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {int len; int name; } ;
struct dentry {TYPE_3__ d_name; TYPE_2__* d_parent; } ;
typedef int __u8 ;
typedef int __name ;
struct TYPE_4__ {int name; } ;
struct TYPE_5__ {TYPE_1__ d_name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ncp_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ncp_server*) ;
 int FUNC_5 (struct ncp_server*,struct inode*,int *) ;
 int FUNC_6 (struct ncp_server*,int *,int*,int ,int ,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_7, struct dentry *VAR_8)
{
 struct ncp_server *VAR_9 = FUNC_1(VAR_7);
 int VAR_10, VAR_11, VAR_12;
 __u8 VAR_13[VAR_6 + 1];

 FUNC_0("ncp_rmdir: removing %s/%s\n",
  VAR_8->d_parent->d_name.name, VAR_8->d_name.name);

 VAR_10 = -VAR_2;
 FUNC_3();
 if (!FUNC_4(VAR_9))
  goto out;

 VAR_10 = -VAR_1;
 if (!FUNC_2(VAR_8))
  goto out;

 VAR_12 = sizeof(VAR_13);
 VAR_10 = FUNC_6(VAR_9, VAR_13, &VAR_12, VAR_8->d_name.name,
      VAR_8->d_name.len, !FUNC_7(VAR_7));
 if (VAR_10)
  goto out;

 VAR_11 = FUNC_5(VAR_9, VAR_7, VAR_13);
 switch (VAR_11) {
  case 0x00:
   VAR_10 = 0;
   break;
  case 0x85:
  case 0x8A:
   VAR_10 = -VAR_0;
   break;
  case 0x8F:
  case 0x90:
   VAR_10 = -VAR_5;
   break;
  case 0x9F:
   VAR_10 = -VAR_1;
   break;
  case 0xA0:
   VAR_10 = -VAR_4;
   break;
  case 0xFF:
   VAR_10 = -VAR_3;
   break;
  default:
   VAR_10 = -VAR_0;
   break;
        }
out:
 FUNC_8();
 return VAR_10;
}
