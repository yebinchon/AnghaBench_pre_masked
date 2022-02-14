
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puser_nice_args {scalar_t__ who; int* errorp; int* foundp; int prio; int curp; } ;
typedef int proc_t ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(proc_t VAR_1, void * VAR_2)
{
 int VAR_3, VAR_4;
 struct puser_nice_args * VAR_5 = (struct puser_nice_args *)VAR_2;
 kauth_cred_t VAR_6;

 VAR_6 = FUNC_2(VAR_1);
 if (FUNC_1(VAR_6) == VAR_5->who) {
  VAR_3 = FUNC_0(VAR_5->curp, VAR_1, VAR_5->prio);
  if (VAR_5->errorp != ((void*)0))
   *VAR_5->errorp = VAR_3;
  if (VAR_5->foundp != ((void*)0)) {
   VAR_4 = *VAR_5->foundp;
   *VAR_5->foundp = VAR_4+1;
  }
 }
 FUNC_3(&VAR_6);

 return(VAR_0);
}
