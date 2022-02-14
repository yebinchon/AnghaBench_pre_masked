
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_15__ {struct TYPE_15__* p_stats; struct TYPE_15__* p_sigacts; int p_rcall; int p_ucred; int p_slock; int p_dtrace_sprlock; int p_ucred_mlock; int p_fdmlock; int p_mlock; int * p_textvp; scalar_t__ vm_shm; int * p_limit; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_7 ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int VAR_8 ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int VAR_9 ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;

void
FUNC_19(proc_t VAR_10)
{
 FUNC_12(VAR_10, 0);
 FUNC_13(VAR_10, 0);






 FUNC_9(VAR_10, 0);
 VAR_10->p_limit = ((void*)0);
 FUNC_3(VAR_10);






 if (VAR_10->p_textvp) {
  FUNC_18(VAR_10->p_textvp);
  VAR_10->p_textvp = ((void*)0);
 }


 FUNC_16(VAR_10);


 FUNC_0(VAR_10);
 FUNC_5(&VAR_10->p_mlock, VAR_6);
 FUNC_5(&VAR_10->p_fdmlock, VAR_6);
 FUNC_5(&VAR_10->p_ucred_mlock, VAR_6);



 FUNC_6(&VAR_10->p_slock, VAR_6);



 FUNC_4(&VAR_10->p_ucred);

 FUNC_10();

 VAR_3--;


 FUNC_2(VAR_10, VAR_4);

 FUNC_11();

 FUNC_17(VAR_10->p_rcall);


 FUNC_1(VAR_10->p_sigacts, sizeof *VAR_10->p_sigacts, VAR_2);
 VAR_10->p_sigacts = ((void*)0);
 FUNC_1(VAR_10->p_stats, sizeof *VAR_10->p_stats, VAR_1);
 VAR_10->p_stats = ((void*)0);

 FUNC_8(VAR_10);
 FUNC_1(VAR_10, sizeof *VAR_10, VAR_0);
}
