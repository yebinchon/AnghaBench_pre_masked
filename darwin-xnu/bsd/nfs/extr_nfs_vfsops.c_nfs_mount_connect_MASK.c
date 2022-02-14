
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thread_t ;
struct timespec {int member_0; int member_1; } ;
struct nfsmount {int nm_state; int nm_mounterror; int nm_lock; scalar_t__ nm_nss; int nm_sockflags; int nm_mountp; } ;
struct TYPE_2__ {char* f_mntfromname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct nfsmount*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,struct nfsmount*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__*,int *,int,char*,struct timespec*) ;
 int VAR_8 ;
 int FUNC_6 (struct nfsmount*,int *,int ,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;

int
FUNC_11(struct nfsmount *VAR_9)
{
 int VAR_10 = 0, VAR_11;
 thread_t VAR_12;
 struct timespec VAR_13 = { 2, 0 };






 VAR_11 = FUNC_0(VAR_9, VAR_2) ? VAR_6 : 0;
 FUNC_3(&VAR_9->nm_lock);

 VAR_9->nm_state |= VAR_4;
 if (FUNC_2(VAR_8, VAR_9, &VAR_12) != VAR_3) {
  VAR_9->nm_state &= ~VAR_4;
  VAR_9->nm_mounterror = VAR_0;
  FUNC_7("nfs mount %s start socket connect thread failed\n", FUNC_9(VAR_9->nm_mountp)->f_mntfromname);
 } else {
  FUNC_8(VAR_12);
 }


 while (VAR_9->nm_state & VAR_4) {
  VAR_10 = FUNC_5(&VAR_9->nm_nss, &VAR_9->nm_lock, VAR_11|VAR_7, "nfsconnectthread", &VAR_13);
  if ((VAR_10 && (VAR_10 != VAR_1)) || ((VAR_10 = FUNC_6(VAR_9, ((void*)0), FUNC_1(), 1)))) {

   if (!VAR_9->nm_mounterror)
    VAR_9->nm_mounterror = VAR_10;

   VAR_9->nm_sockflags |= VAR_5;
   if (VAR_9->nm_nss)
    FUNC_10(VAR_9->nm_nss);

   VAR_11 = 0;
  }
 }
 FUNC_4(&VAR_9->nm_lock);


 VAR_10 = VAR_9->nm_mounterror;

 return (VAR_10);
}
