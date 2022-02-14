
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int member_0; int member_1; } ;
struct nfsmount {scalar_t__ nm_asyncwrites; int nm_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfsmount*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*,int *,int,char*,struct timespec*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct nfsmount*,int *,int ,int) ;

int
FUNC_6(struct nfsmount *VAR_4)
{
 int VAR_5 = 0, VAR_6 = FUNC_0(VAR_4, VAR_0) ? VAR_1 : 0;
 struct timespec VAR_7 = {1, 0};

 if (VAR_3 <= 0)
  return (0);
 FUNC_2(&VAR_4->nm_lock);
 while ((VAR_3 > 0) && (VAR_4->nm_asyncwrites >= VAR_3)) {
  if ((VAR_5 = FUNC_5(VAR_4, ((void*)0), FUNC_1(), 1)))
   break;
  FUNC_4(&VAR_4->nm_asyncwrites, &VAR_4->nm_lock, VAR_6|(VAR_2-1), "nfsasyncwrites", &VAR_7);
  VAR_6 = 0;
 }
 if (!VAR_5)
  VAR_4->nm_asyncwrites++;
 FUNC_3(&VAR_4->nm_lock);
 return (VAR_5);
}
