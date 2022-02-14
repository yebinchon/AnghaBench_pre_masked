
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nw_modify_dos_info {int dummy; } ;
struct ncp_server {int* name_space; } ;
struct inode {int dummy; } ;
typedef size_t __u8 ;
typedef int __le32 ;
struct TYPE_2__ {size_t volNumber; int dirEntNum; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ncp_server*,int) ;
 int FUNC_3 (struct ncp_server*,int ) ;
 int FUNC_4 (struct ncp_server*,size_t,int ,int,char const*) ;
 int FUNC_5 (struct ncp_server*,struct nw_modify_dos_info const*,int) ;
 int FUNC_6 (struct ncp_server*,int ) ;
 int FUNC_7 (struct ncp_server*) ;
 int FUNC_8 (struct ncp_server*,int) ;
 int FUNC_9 (struct ncp_server*) ;

int FUNC_10(struct ncp_server *VAR_0,
         struct inode *VAR_1,
         const char *VAR_2,
         __le32 VAR_3,
         const struct nw_modify_dos_info *VAR_4)
{
 __u8 VAR_5 = FUNC_0(VAR_1)->volNumber;
 __le32 VAR_6 = FUNC_0(VAR_1)->dirEntNum;
 int VAR_7;

 FUNC_7(VAR_0);
 FUNC_2(VAR_0, 7);
 FUNC_2(VAR_0, VAR_0->name_space[VAR_5]);
 FUNC_2(VAR_0, 0);
 FUNC_6(VAR_0, FUNC_1(0x8006));

 FUNC_3(VAR_0, VAR_3);
 FUNC_5(VAR_0, VAR_4, sizeof(*VAR_4));
 FUNC_4(VAR_0, VAR_5, VAR_6, 1, VAR_2);

 VAR_7 = FUNC_8(VAR_0, 87);
 FUNC_9(VAR_0);
 return VAR_7;
}
