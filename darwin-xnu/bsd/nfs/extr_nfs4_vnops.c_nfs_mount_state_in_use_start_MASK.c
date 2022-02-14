
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_t ;
struct timespec {int member_0; int member_1; } ;
struct nfsmount {int nm_state; int nm_lock; int nm_stateinuse; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct nfsmount*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int *,int,char*,struct timespec*) ;
 scalar_t__ FUNC_4 (struct nfsmount*) ;
 int FUNC_5 (struct nfsmount*) ;
 int FUNC_6 (struct nfsmount*,int *,scalar_t__,int) ;

int
FUNC_7(struct nfsmount *VAR_7, thread_t VAR_8)
{
 struct timespec VAR_9 = { 1, 0 };
 int VAR_10 = 0, VAR_11 = (FUNC_0(VAR_7, VAR_1) && VAR_8) ? VAR_5 : 0;

 if (FUNC_4(VAR_7))
  return (VAR_0);
 FUNC_1(&VAR_7->nm_lock);
 if (VAR_7->nm_state & (VAR_3|VAR_2)) {
  FUNC_2(&VAR_7->nm_lock);
  return (VAR_0);
 }
 while (VAR_7->nm_state & VAR_4) {
  if ((VAR_10 = FUNC_6(VAR_7, ((void*)0), VAR_8, 1)))
   break;
  FUNC_5(VAR_7);
  FUNC_3(&VAR_7->nm_state, &VAR_7->nm_lock, VAR_11|(VAR_6-1), "nfsrecoverwait", &VAR_9);
  VAR_11 = 0;
 }
 if (!VAR_10)
  VAR_7->nm_stateinuse++;
 FUNC_2(&VAR_7->nm_lock);

 return (VAR_10);
}
