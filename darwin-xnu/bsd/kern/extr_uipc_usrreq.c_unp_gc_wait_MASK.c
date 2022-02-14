
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__*,int ,int ,char*,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void
FUNC_2(void)
{
 if (VAR_2 == FUNC_0())
  return;

 while (VAR_1 != 0) {
  VAR_3 = 1;
  FUNC_1(&VAR_1, VAR_0, 0 , "unp_gc_wait", ((void*)0));
 }
}
