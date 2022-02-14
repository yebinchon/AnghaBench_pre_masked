
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsmount {scalar_t__ nm_asyncwrites; int nm_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__*) ;

void
FUNC_3(struct nfsmount *VAR_1)
{
 if (VAR_1->nm_asyncwrites <= 0)
  return;
 FUNC_0(&VAR_1->nm_lock);
 if (VAR_1->nm_asyncwrites-- >= VAR_0)
  FUNC_2(&VAR_1->nm_asyncwrites);
 FUNC_1(&VAR_1->nm_lock);
}
