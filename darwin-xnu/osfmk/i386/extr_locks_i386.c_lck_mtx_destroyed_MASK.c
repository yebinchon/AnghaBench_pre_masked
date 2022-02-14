
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lck_mtx_t ;


 int FUNC_0 (char*,int *) ;

__attribute__((used)) __attribute__((noinline))
static void
FUNC_1(
 lck_mtx_t *VAR_0)
{
 FUNC_0("trying to interlock destroyed mutex (%p)", VAR_0);
}
