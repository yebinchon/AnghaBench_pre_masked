
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ptrdiff_t ;
struct TYPE_3__ {scalar_t__ rend; scalar_t__ shend; scalar_t__ rpos; scalar_t__ buf; scalar_t__ shcnt; scalar_t__ shlim; } ;
typedef TYPE_1__ FFFILE ;



__attribute__((used)) static void FUNC_0(FFFILE *VAR_0, ptrdiff_t VAR_1)
{
    VAR_0->shlim = VAR_1;
    VAR_0->shcnt = VAR_0->buf - VAR_0->rpos;

    if (VAR_1 && VAR_0->rend - VAR_0->rpos > VAR_1)
        VAR_0->shend = VAR_0->rpos + VAR_1;
    else
        VAR_0->shend = VAR_0->rend;
}
