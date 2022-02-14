
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct coda_inode_info {int c_cached_perm; scalar_t__ c_uid; scalar_t__ c_cached_epoch; } ;


 struct coda_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;

int FUNC_3(struct inode *VAR_1, int VAR_2)
{
 struct coda_inode_info *VAR_3 = FUNC_0(VAR_1);
        int VAR_4;

        VAR_4 = (VAR_2 & VAR_3->c_cached_perm) == VAR_2 &&
  VAR_3->c_uid == FUNC_2() &&
  VAR_3->c_cached_epoch == FUNC_1(&VAR_0);

        return VAR_4;
}
