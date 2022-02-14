
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int member_0; int member_1; } ;
struct nfsmount {int nm_state; int nm_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nfsmount*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*,int *,int,char*,struct timespec*) ;
 int FUNC_5 (struct nfsmount*) ;
 int FUNC_6 (struct nfsmount*,int *,int ,int) ;

int
FUNC_7(struct nfsmount *VAR_4)
{
 struct timespec VAR_5 = { 1, 0 };
 int VAR_6 = 0, VAR_7 = FUNC_0(VAR_4, VAR_0) ? VAR_2 : 0;

 FUNC_2(&VAR_4->nm_lock);
 while (VAR_4->nm_state & VAR_1) {
  if ((VAR_6 = FUNC_6(VAR_4, ((void*)0), FUNC_1(), 1)))
   break;
  FUNC_5(VAR_4);
  FUNC_4(&VAR_4->nm_state, &VAR_4->nm_lock, VAR_7|(VAR_3-1), "nfsrecoverwait", &VAR_5);
  VAR_7 = 0;
 }
 FUNC_3(&VAR_4->nm_lock);

 return (VAR_6);
}
