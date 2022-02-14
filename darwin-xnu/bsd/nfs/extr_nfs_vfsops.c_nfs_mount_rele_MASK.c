
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsmount {int nm_ref; int nm_state; int nm_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int*) ;

void
FUNC_4(struct nfsmount *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(&VAR_1->nm_lock);
 if (VAR_1->nm_ref < 1)
  FUNC_2("nfs zombie mount underflow\n");
 VAR_1->nm_ref--;
 if (VAR_1->nm_ref == 0)
  VAR_2 = VAR_1->nm_state & VAR_0;
 FUNC_1(&VAR_1->nm_lock);
 if (VAR_2)
  FUNC_3(&VAR_1->nm_ref);
}
