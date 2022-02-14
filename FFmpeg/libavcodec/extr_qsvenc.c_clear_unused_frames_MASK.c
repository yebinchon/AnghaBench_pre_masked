
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ format; } ;
struct TYPE_10__ {TYPE_3__* work_frames; } ;
struct TYPE_7__ {int Locked; } ;
struct TYPE_8__ {TYPE_1__ Data; } ;
struct TYPE_9__ {struct TYPE_9__* next; scalar_t__ used; TYPE_6__* frame; int enc_ctrl; TYPE_2__ surface; } ;
typedef TYPE_3__ QSVFrame ;
typedef TYPE_4__ QSVEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(QSVEncContext *VAR_1)
{
    QSVFrame *VAR_2 = VAR_1->work_frames;
    while (VAR_2) {
        if (VAR_2->used && !VAR_2->surface.Data.Locked) {
            FUNC_1(&VAR_2->enc_ctrl);
            if (VAR_2->frame->format == VAR_0) {
                FUNC_0(VAR_2->frame);
            }
            VAR_2->used = 0;
        }
        VAR_2 = VAR_2->next;
    }
}
