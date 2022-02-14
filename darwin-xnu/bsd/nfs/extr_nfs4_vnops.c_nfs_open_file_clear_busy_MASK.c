
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_file {int nof_flags; int nof_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct nfs_open_file*) ;

void
FUNC_4(struct nfs_open_file *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_2->nof_lock);
 if (!(VAR_2->nof_flags & VAR_0))
  FUNC_2("nfs_open_file_clear_busy");
 VAR_3 = (VAR_2->nof_flags & VAR_1);
 VAR_2->nof_flags &= ~(VAR_0|VAR_1);
 FUNC_1(&VAR_2->nof_lock);
 if (VAR_3)
  FUNC_3(VAR_2);
}
