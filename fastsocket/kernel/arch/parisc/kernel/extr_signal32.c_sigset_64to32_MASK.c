
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* sig; } ;
typedef TYPE_1__ sigset_t ;
struct TYPE_6__ {int* sig; } ;
typedef TYPE_2__ compat_sigset_t ;



inline void
FUNC_0(compat_sigset_t *VAR_0, sigset_t *VAR_1)
{
 VAR_0->sig[0] = VAR_1->sig[0] & 0xffffffffUL;
 VAR_0->sig[1] = (VAR_1->sig[0] >> 32) & 0xffffffffUL;
}
