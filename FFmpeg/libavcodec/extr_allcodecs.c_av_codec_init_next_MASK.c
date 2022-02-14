
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* next; } ;
typedef TYPE_1__ AVCodec ;


 scalar_t__ FUNC_0 (void**) ;

__attribute__((used)) static void FUNC_1(void)
{
    AVCodec *VAR_0 = ((void*)0), *VAR_1;
    void *VAR_2 = 0;
    while ((VAR_1 = (AVCodec*)FUNC_0(&VAR_2))) {
        if (VAR_0)
            VAR_0->next = VAR_1;
        VAR_0 = VAR_1;
    }
}
