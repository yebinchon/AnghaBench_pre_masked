
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct killpg1_iterargs {int signum; int nfound; int uc; int curproc; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_6__ {int p_listflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_3(proc_t VAR_2, void *VAR_3)
{
 struct killpg1_iterargs *VAR_4 = (struct killpg1_iterargs *)VAR_3;
 int VAR_5 = VAR_4->signum;

 if ((VAR_2->p_listflag & VAR_1) == VAR_1) {
  if (FUNC_1(VAR_4->curproc, VAR_4->uc, VAR_2, VAR_5)) {
   VAR_4->nfound++;
  }
 } else if (FUNC_0(VAR_4->curproc, VAR_4->uc, VAR_2, VAR_5)) {
  VAR_4->nfound++;

  if (VAR_5 != 0) {
   FUNC_2(VAR_2, VAR_5);
  }
 }

 return VAR_0;
}
