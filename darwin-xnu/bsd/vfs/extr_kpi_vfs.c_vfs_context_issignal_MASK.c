
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
typedef int sigset_t ;
typedef scalar_t__ proc_t ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;

int
FUNC_2(vfs_context_t VAR_0, sigset_t VAR_1)
{
 proc_t VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return(FUNC_0(VAR_2, VAR_1));
 return(0);
}
