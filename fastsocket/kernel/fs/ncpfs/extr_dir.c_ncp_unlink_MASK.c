
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct ncp_server {TYPE_1__ m; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {int name; } ;
struct dentry {TYPE_4__ d_name; TYPE_3__* d_parent; struct inode* d_inode; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_2__ d_name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ncp_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ncp_server*) ;
 int FUNC_5 (struct ncp_server*,struct dentry*) ;
 int FUNC_6 (struct inode*,struct dentry*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_6, struct dentry *VAR_7)
{
 struct inode *VAR_8 = VAR_7->d_inode;
 struct ncp_server *VAR_9;
 int VAR_10;

 FUNC_3();
 VAR_9 = FUNC_1(VAR_6);
 FUNC_0("ncp_unlink: unlinking %s/%s\n",
  VAR_7->d_parent->d_name.name, VAR_7->d_name.name);

 VAR_10 = -VAR_2;
 if (!FUNC_4(VAR_9))
  goto out;




 if (VAR_8) {
  FUNC_2("ncp_unlink: closing file\n");
  FUNC_7(VAR_8);
 }

 VAR_10 = FUNC_5(VAR_9, VAR_7);







 switch (VAR_10) {
  case 0x00:
   FUNC_0("ncp: removed %s/%s\n",
    VAR_7->d_parent->d_name.name, VAR_7->d_name.name);
   break;
  case 0x85:
  case 0x8A:
   VAR_10 = -VAR_0;
   break;
  case 0x8D:
  case 0x8E:
   VAR_10 = -VAR_1;
   break;
  case 0x8F:
  case 0x90:
  case 0x9C:
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
