
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ncp_server {int* name_space; } ;
struct inode {int dummy; } ;
typedef int __le16 ;
struct TYPE_2__ {size_t volNumber; int dirEntNum; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct ncp_server*,int) ;
 int FUNC_2 (struct ncp_server*,int ) ;
 int FUNC_3 (struct ncp_server*,char*) ;
 int FUNC_4 (struct ncp_server*,int ) ;
 int FUNC_5 (struct ncp_server*) ;
 int FUNC_6 (struct ncp_server*,int) ;
 int FUNC_7 (struct ncp_server*) ;

__attribute__((used)) static int
FUNC_8(struct ncp_server *VAR_1,
    struct inode *VAR_2, char *VAR_3, __le16 VAR_4,
    struct inode *VAR_5, char *VAR_6)
{
 int VAR_7 = -VAR_0;

 if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) ||
     (VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0)))
  goto out;

 FUNC_5(VAR_1);
 FUNC_1(VAR_1, 4);
 FUNC_1(VAR_1, VAR_1->name_space[FUNC_0(VAR_2)->volNumber]);
 FUNC_1(VAR_1, 1);
 FUNC_4(VAR_1, VAR_4);


 FUNC_1(VAR_1, FUNC_0(VAR_2)->volNumber);
 FUNC_2(VAR_1, FUNC_0(VAR_2)->dirEntNum);
 FUNC_1(VAR_1, 1);
 FUNC_1(VAR_1, 1);


 FUNC_1(VAR_1, FUNC_0(VAR_5)->volNumber);
 FUNC_2(VAR_1, FUNC_0(VAR_5)->dirEntNum);
 FUNC_1(VAR_1, 1);
 FUNC_1(VAR_1, 1);


 FUNC_3(VAR_1, VAR_3);

 FUNC_3(VAR_1, VAR_6);

 VAR_7 = FUNC_6(VAR_1, 87);
 FUNC_7(VAR_1);
out:
 return VAR_7;
}
