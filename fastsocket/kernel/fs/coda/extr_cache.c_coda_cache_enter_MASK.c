
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct coda_inode_info {scalar_t__ c_uid; int c_cached_perm; int c_cached_epoch; } ;


 struct coda_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;

void FUNC_3(struct inode *VAR_1, int VAR_2)
{
 struct coda_inode_info *VAR_3 = FUNC_0(VAR_1);

 VAR_3->c_cached_epoch = FUNC_1(&VAR_0);
 if (VAR_3->c_uid != FUNC_2()) {
  VAR_3->c_uid = FUNC_2();
                VAR_3->c_cached_perm = VAR_2;
        } else
                VAR_3->c_cached_perm |= VAR_2;
}
