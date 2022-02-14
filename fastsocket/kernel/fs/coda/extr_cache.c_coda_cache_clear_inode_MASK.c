
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct coda_inode_info {scalar_t__ c_cached_epoch; } ;


 struct coda_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;

void FUNC_2(struct inode *VAR_1)
{
 struct coda_inode_info *VAR_2 = FUNC_0(VAR_1);
 VAR_2->c_cached_epoch = FUNC_1(&VAR_0) - 1;
}
