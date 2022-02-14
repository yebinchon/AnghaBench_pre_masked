
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mfxFrameSurface1 ;
struct TYPE_6__ {TYPE_1__* work_frames; } ;
struct TYPE_5__ {struct TYPE_5__* next; int surface; } ;
typedef TYPE_1__ QSVFrame ;
typedef TYPE_2__ QSVContext ;



__attribute__((used)) static QSVFrame *FUNC_0(QSVContext *VAR_0, mfxFrameSurface1 *VAR_1)
{
    QSVFrame *VAR_2 = VAR_0->work_frames;
    while (VAR_2) {
        if (VAR_1 == &VAR_2->surface)
            return VAR_2;
        VAR_2 = VAR_2->next;
    }
    return ((void*)0);
}
