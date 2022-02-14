
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nw_search_sequence {int dummy; } ;
struct ncp_server {int* name_space; } ;
struct inode {int dummy; } ;
typedef size_t __u8 ;
typedef int __le32 ;
struct TYPE_2__ {size_t volNumber; int dirEntNum; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct nw_search_sequence*,int ,int) ;
 int FUNC_2 (struct ncp_server*,int) ;
 int FUNC_3 (struct ncp_server*,size_t,int ,int,int *) ;
 int FUNC_4 (struct ncp_server*) ;
 int FUNC_5 (struct ncp_server*,int ) ;
 int FUNC_6 (struct ncp_server*,int) ;
 int FUNC_7 (struct ncp_server*) ;

int
FUNC_8(struct ncp_server *VAR_0, struct inode *VAR_1,
   struct nw_search_sequence *VAR_2)
{
 __u8 VAR_3 = FUNC_0(VAR_1)->volNumber;
 __le32 VAR_4 = FUNC_0(VAR_1)->dirEntNum;
 int VAR_5;

 FUNC_4(VAR_0);
 FUNC_2(VAR_0, 2);
 FUNC_2(VAR_0, VAR_0->name_space[VAR_3]);
 FUNC_2(VAR_0, 0);
 FUNC_3(VAR_0, VAR_3, VAR_4, 1, ((void*)0));

 VAR_5 = FUNC_6(VAR_0, 87);
 if (VAR_5)
  goto out;
 FUNC_1(VAR_2, FUNC_5(VAR_0, 0), sizeof(*VAR_2));

out:
 FUNC_7(VAR_0);
 return VAR_5;
}
