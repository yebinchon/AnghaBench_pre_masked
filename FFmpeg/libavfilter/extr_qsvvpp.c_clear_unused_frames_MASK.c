
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; int frame; TYPE_2__* surface; } ;
struct TYPE_5__ {int Locked; } ;
struct TYPE_6__ {TYPE_1__ Data; } ;
typedef TYPE_3__ QSVFrame ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(QSVFrame *VAR_0)
{
    while (VAR_0) {
        if (VAR_0->surface && !VAR_0->surface->Data.Locked) {
            VAR_0->surface = ((void*)0);
            FUNC_0(&VAR_0->frame);
        }
        VAR_0 = VAR_0->next;
    }
}
