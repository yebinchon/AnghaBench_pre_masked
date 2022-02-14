
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pgrp {int dummy; } ;
struct killpg1_iterargs {scalar_t__ nfound; int signum; int uc; int curproc; } ;
struct killpg1_filtargs {int posix; int curproc; } ;
typedef int proc_t ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pgrp* FUNC_2 (int) ;
 int FUNC_3 (struct pgrp*,int ,int ,struct killpg1_iterargs*,int ,int *) ;
 int FUNC_4 (int,int ,struct killpg1_iterargs*,int ,struct killpg1_filtargs*) ;
 struct pgrp* FUNC_5 (int ) ;

int
FUNC_6(proc_t VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 kauth_cred_t VAR_13;
 struct pgrp *VAR_14;
 int VAR_15 = 0;

 VAR_13 = FUNC_0(VAR_8);
 struct killpg1_iterargs VAR_16 = {
  .curproc = VAR_8, .uc = VAR_13, .nfound = 0, .signum = VAR_9
 };

 if (VAR_11) {



  struct killpg1_filtargs VAR_17 = {
   .posix = VAR_12, .curproc = VAR_8
  };
  FUNC_4(VAR_3 | VAR_4, VAR_6,
    &VAR_16, VAR_5, &VAR_17);
 } else {
  if (VAR_10 == 0) {



   VAR_14 = FUNC_5(VAR_8);
   } else {
   VAR_14 = FUNC_2(VAR_10);
   if (VAR_14 == ((void*)0)) {
    VAR_15 = VAR_1;
    goto out;
   }
  }


  FUNC_3(VAR_14, VAR_2, VAR_6, &VAR_16,
    VAR_7, ((void*)0));
 }
 VAR_15 = (VAR_16.nfound > 0 ? 0 : (VAR_12 ? VAR_0 : VAR_1));
out:
 FUNC_1(&VAR_13);
 return (VAR_15);
}
