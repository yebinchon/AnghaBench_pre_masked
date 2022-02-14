
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* next; } ;
typedef TYPE_1__ AVCodecParser ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static void FUNC_0(void)
{
    AVCodecParser *VAR_1 = ((void*)0), *VAR_2;
    int VAR_3 = 0;
    while ((VAR_2 = (AVCodecParser*)VAR_0[VAR_3++])) {
        if (VAR_1)
            VAR_1->next = VAR_2;
        VAR_1 = VAR_2;
    }
}
