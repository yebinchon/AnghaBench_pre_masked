
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mig_who_t ;
typedef scalar_t__ mig_which_error_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,scalar_t__,...) ;

void
FUNC_1(
 mig_who_t VAR_1,
 mig_which_error_t VAR_2,
 void *VAR_3,
 char *VAR_4,
 unsigned int VAR_5)
{
    if (VAR_2 == VAR_0)
 FUNC_0("%d|%d|%d -- %s %d\n", VAR_1, VAR_2, *(int *)VAR_3, VAR_4, VAR_5);
    else
 FUNC_0("%d|%d|%s -- %s %d\n", VAR_1, VAR_2, (char *)VAR_3, VAR_4, VAR_5);
}
