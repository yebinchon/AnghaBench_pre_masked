
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gid; int uid; } ;
struct ncp_server {TYPE_1__ m; } ;
struct ncp_entry_info {int i; } ;
struct inode {int i_nlink; int i_gid; int i_uid; int i_mode; } ;
struct TYPE_4__ {scalar_t__ flags; } ;


 int FUNC_0 (char*,int ) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 struct ncp_server* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,struct ncp_entry_info*) ;
 int FUNC_4 (struct inode*,int *) ;
 int FUNC_5 (struct inode*,struct ncp_entry_info*) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_0, struct ncp_entry_info *VAR_1)
{
 struct ncp_server *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(VAR_0)->flags = 0;

 FUNC_3(VAR_0, VAR_1);

 FUNC_0("ncp_read_inode: inode->i_mode = %u\n", VAR_0->i_mode);

 VAR_0->i_nlink = 1;
 VAR_0->i_uid = VAR_2->m.uid;
 VAR_0->i_gid = VAR_2->m.gid;

 FUNC_4(VAR_0, &VAR_1->i);
 FUNC_5(VAR_0, VAR_1);
}
