
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct nw_info_struct {int modifyDate; int modifyTime; } ;
struct ncp_server {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 struct ncp_server* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct ncp_server*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct ncp_server*,struct inode*,int *,struct nw_info_struct*) ;

__attribute__((used)) static time_t FUNC_5(struct dentry *VAR_0)
{
 struct inode *VAR_1 = VAR_0->d_inode;
 struct ncp_server *VAR_2 = FUNC_0(VAR_1);
 struct nw_info_struct VAR_3;

 if (!FUNC_1(VAR_2) || FUNC_3(VAR_1))
  return 0;

 if (FUNC_4(VAR_2, VAR_1, ((void*)0), &VAR_3))
  return 0;

 return FUNC_2(VAR_3.modifyTime, VAR_3.modifyDate);
}
