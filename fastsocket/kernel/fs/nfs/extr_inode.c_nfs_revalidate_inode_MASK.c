
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int cache_validity; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct nfs_server*,struct inode*) ;
 int FUNC_3 (struct inode*) ;

int FUNC_4(struct nfs_server *VAR_2, struct inode *VAR_3)
{
 if (!(FUNC_0(VAR_3)->cache_validity & VAR_1)
   && !FUNC_3(VAR_3))
  return FUNC_1(VAR_3) ? -VAR_0 : 0;
 return FUNC_2(VAR_2, VAR_3);
}
