
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_delegation {int rcu; int * cred; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nfs_delegation *VAR_1)
{
 if (VAR_1->cred) {
  FUNC_1(VAR_1->cred);
  VAR_1->cred = ((void*)0);
 }
 FUNC_0(&VAR_1->rcu, VAR_0);
}
