
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdoproc_args {scalar_t__ buflen; scalar_t__ sizeof_kproc; scalar_t__ ruidcheck; scalar_t__ uidcheck; scalar_t__ ttycheck; int* errorp; int needed; int dp; int kprocp; scalar_t__ is_64_bit; int uidval; } ;
typedef int proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int
FUNC_7(proc_t VAR_2, void *VAR_3)
{
 struct sysdoproc_args *VAR_4 = VAR_3;

 if (VAR_4->buflen >= VAR_4->sizeof_kproc) {
  if ((VAR_4->ruidcheck != 0) && (FUNC_4(VAR_2, &VAR_4->uidval) == 0))
   return (VAR_0);
  if ((VAR_4->uidcheck != 0) && (FUNC_6(VAR_2, &VAR_4->uidval) == 0))
   return (VAR_0);
  if ((VAR_4->ttycheck != 0) && (FUNC_5(VAR_2, &VAR_4->uidval) == 0))
   return (VAR_0);

  FUNC_0(VAR_4->kprocp, VAR_4->sizeof_kproc);
  if (VAR_4->is_64_bit)
   FUNC_3(VAR_2, VAR_4->kprocp);
  else
   FUNC_2(VAR_2, VAR_4->kprocp);
  int VAR_5 = FUNC_1(VAR_4->kprocp, VAR_4->dp, VAR_4->sizeof_kproc);
  if (VAR_5) {
   *VAR_4->errorp = VAR_5;
   return (VAR_1);
  }
  VAR_4->dp += VAR_4->sizeof_kproc;
  VAR_4->buflen -= VAR_4->sizeof_kproc;
 }
 VAR_4->needed += VAR_4->sizeof_kproc;
 return (VAR_0);
}
