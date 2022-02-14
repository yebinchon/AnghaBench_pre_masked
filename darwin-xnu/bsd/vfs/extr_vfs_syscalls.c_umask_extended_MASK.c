
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umask_extended_args {scalar_t__ xsecurity; int newmask; } ;
typedef int proc_t ;
typedef scalar_t__ kauth_filesec_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__,int *) ;

int
FUNC_3(proc_t VAR_2, struct umask_extended_args *VAR_3, int32_t *VAR_4)
{
 int VAR_5;
 kauth_filesec_t VAR_6;

 VAR_6 = VAR_0;
 if (VAR_3->xsecurity != VAR_1) {
  if ((VAR_5 = FUNC_0(VAR_3->xsecurity, &VAR_6)) != 0)
   return VAR_5;
 } else {
  VAR_6 = VAR_0;
 }

 VAR_5 = FUNC_2(VAR_2, VAR_3->newmask, VAR_6, VAR_4);

 if (VAR_6 != VAR_0)
  FUNC_1(VAR_6);
 return VAR_5;
}
