
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nalloc; scalar_t__ len; char* body; } ;
typedef TYPE_1__ Buffer ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(Buffer *VAR_0, char VAR_1) {
    if (VAR_0->nalloc == (VAR_0->len + 1))
        FUNC_0(VAR_0);
    VAR_0->body[VAR_0->len++] = VAR_1;
}
