
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mfxPayload ;
struct TYPE_10__ {TYPE_2__* work_frames; } ;
struct TYPE_8__ {void* Payload; } ;
struct TYPE_9__ {int used; TYPE_1__ enc_ctrl; int frame; struct TYPE_9__* next; } ;
typedef TYPE_2__ QSVFrame ;
typedef TYPE_3__ QSVEncContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__**) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(QSVEncContext *VAR_2, QSVFrame **VAR_3)
{
    QSVFrame *VAR_4, **VAR_5;

    FUNC_4(VAR_2);

    VAR_4 = VAR_2->work_frames;
    VAR_5 = &VAR_2->work_frames;
    while (VAR_4) {
        if (!VAR_4->used) {
            *VAR_3 = VAR_4;
            VAR_4->used = 1;
            return 0;
        }

        VAR_5 = &VAR_4->next;
        VAR_4 = VAR_4->next;
    }

    VAR_4 = FUNC_3(sizeof(*VAR_4));
    if (!VAR_4)
        return FUNC_0(VAR_0);
    VAR_4->frame = FUNC_1();
    if (!VAR_4->frame) {
        FUNC_2(&VAR_4);
        return FUNC_0(VAR_0);
    }
    VAR_4->enc_ctrl.Payload = FUNC_3(sizeof(mfxPayload*) * VAR_1);
    if (!VAR_4->enc_ctrl.Payload) {
        FUNC_2(&VAR_4);
        return FUNC_0(VAR_0);
    }
    *VAR_5 = VAR_4;

    *VAR_3 = VAR_4;
    VAR_4->used = 1;

    return 0;
}
