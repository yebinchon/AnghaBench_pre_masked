
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nfs_server {int backing_dev_info; } ;


 struct nfs_server* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_0)
{
 struct nfs_server *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->backing_dev_info);
}
