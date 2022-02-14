
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_inode {int dummy; } ;
struct nfs_delegation {int stateid; } ;
struct nfs_client {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {struct nfs_client* nfs_client; } ;


 int VAR_0 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct nfs_client*) ;
 int FUNC_3 (struct nfs_delegation*,struct nfs_client*) ;
 int FUNC_4 (struct inode*,int *) ;
 int FUNC_5 (struct nfs_inode*,struct nfs_delegation*,TYPE_1__*) ;
 int FUNC_6 (struct inode*,struct nfs_delegation*,int) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct nfs_delegation *VAR_2, int VAR_3)
{
 struct nfs_client *VAR_4 = FUNC_1(VAR_1)->nfs_client;
 struct nfs_inode *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 if (VAR_2 == ((void*)0))
  return 0;
 do {
  VAR_6 = FUNC_4(VAR_1, &VAR_2->stateid);
  if (!VAR_3 || VAR_6 != -VAR_0)
   break;



  VAR_6 = FUNC_2(VAR_4);
 } while (VAR_6 == 0);

 if (VAR_6) {
  FUNC_3(VAR_2, VAR_4);
  goto out;
 }
 if (!FUNC_5(VAR_5, VAR_2, FUNC_1(VAR_1)))
  goto out;

 VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_3);
out:
 return VAR_6;
}
