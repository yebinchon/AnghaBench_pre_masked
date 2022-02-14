
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* work_frames; } ;
struct TYPE_6__ {int Locked; } ;
struct TYPE_7__ {TYPE_1__ Data; } ;
struct TYPE_8__ {struct TYPE_8__* next; scalar_t__ used; int frame; TYPE_2__ surface; } ;
typedef TYPE_3__ QSVFrame ;
typedef TYPE_4__ QSVDeintContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(QSVDeintContext *VAR_0)
{
    QSVFrame *VAR_1 = VAR_0->work_frames;
    while (VAR_1) {
        if (!VAR_1->surface.Data.Locked) {
            FUNC_0(&VAR_1->frame);
            VAR_1->used = 0;
        }
        VAR_1 = VAR_1->next;
    }
}
