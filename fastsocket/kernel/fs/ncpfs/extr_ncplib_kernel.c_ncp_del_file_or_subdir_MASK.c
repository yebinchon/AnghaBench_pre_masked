
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ncp_server {scalar_t__* name_space; } ;
struct inode {int dummy; } ;
typedef size_t __u8 ;
typedef int __le32 ;
struct TYPE_2__ {size_t volNumber; int dirEntNum; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ncp_server*,int,size_t,int ,char*,scalar_t__,int ) ;
 int FUNC_3 (struct ncp_server*,size_t,int ,char*,int *) ;

int
FUNC_4(struct ncp_server *VAR_2,
         struct inode *VAR_3, char *VAR_4)
{
 __u8 VAR_5 = FUNC_0(VAR_3)->volNumber;
 __le32 VAR_6 = FUNC_0(VAR_3)->dirEntNum;
   return FUNC_2(VAR_2, 1, VAR_5, VAR_6, VAR_4, VAR_2->name_space[VAR_5], FUNC_1(0x8006));
}
