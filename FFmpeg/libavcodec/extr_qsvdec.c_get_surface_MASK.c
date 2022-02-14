
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int mfxFrameSurface1 ;
struct TYPE_10__ {TYPE_1__* work_frames; } ;
struct TYPE_9__ {int surface; int frame; struct TYPE_9__* next; int used; } ;
typedef TYPE_1__ QSVFrame ;
typedef TYPE_2__ QSVContext ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__**) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_1, QSVContext *VAR_2, mfxFrameSurface1 **VAR_3)
{
    QSVFrame *VAR_4, **VAR_5;
    int VAR_6;

    FUNC_5(VAR_2);

    VAR_4 = VAR_2->work_frames;
    VAR_5 = &VAR_2->work_frames;
    while (VAR_4) {
        if (!VAR_4->used) {
            VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_4);
            if (VAR_6 < 0)
                return VAR_6;
            *VAR_3 = &VAR_4->surface;
            return 0;
        }

        VAR_5 = &VAR_4->next;
        VAR_4 = VAR_4->next;
    }

    VAR_4 = FUNC_4(sizeof(*VAR_4));
    if (!VAR_4)
        return FUNC_0(VAR_0);
    VAR_4->frame = FUNC_2();
    if (!VAR_4->frame) {
        FUNC_3(&VAR_4);
        return FUNC_0(VAR_0);
    }
    *VAR_5 = VAR_4;

    VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_4);
    if (VAR_6 < 0)
        return VAR_6;

    *VAR_3 = &VAR_4->surface;

    return 0;
}
