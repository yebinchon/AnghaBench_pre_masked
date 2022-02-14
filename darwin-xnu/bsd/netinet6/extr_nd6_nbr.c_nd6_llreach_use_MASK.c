
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llinfo_nd6 {int ln_lastused; int * ln_llreach; } ;


 int FUNC_0 () ;

void
FUNC_1(struct llinfo_nd6 *VAR_0)
{
 if (VAR_0->ln_llreach != ((void*)0))
  VAR_0->ln_lastused = FUNC_0();
}
