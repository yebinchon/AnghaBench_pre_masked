
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ncp_server {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
typedef int __u8 ;
typedef int __le32 ;
struct TYPE_2__ {int DosDirNum; int volNumber; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ncp_server*,int,int ,int ,int *,int ,int ) ;

int
FUNC_3(struct ncp_server *VAR_1,
   struct dentry *VAR_2)
{
 struct inode *VAR_3 = VAR_2->d_inode;
 __u8 VAR_4;
 __le32 VAR_5;

 if (!VAR_3) {
  return 0xFF;
 }
 VAR_4 = FUNC_0(VAR_3)->volNumber;
 VAR_5 = FUNC_0(VAR_3)->DosDirNum;
 return FUNC_2(VAR_1, 1, VAR_4, VAR_5, ((void*)0), VAR_0, FUNC_1(0x8006));
}
