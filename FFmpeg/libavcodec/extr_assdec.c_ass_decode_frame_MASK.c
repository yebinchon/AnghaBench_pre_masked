
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ass; int type; } ;
struct TYPE_7__ {scalar_t__ size; int data; } ;
struct TYPE_6__ {int num_rects; TYPE_3__** rects; } ;
typedef TYPE_1__ AVSubtitle ;
typedef TYPE_2__ AVPacket ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__** FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2, void *VAR_3, int *VAR_4,
                            AVPacket *VAR_5)
{
    AVSubtitle *VAR_6 = VAR_3;

    if (VAR_5->size <= 0)
        return VAR_5->size;

    VAR_6->rects = FUNC_1(sizeof(*VAR_6->rects));
    if (!VAR_6->rects)
        return FUNC_0(VAR_0);
    VAR_6->rects[0] = FUNC_2(sizeof(*VAR_6->rects[0]));
    if (!VAR_6->rects[0])
        return FUNC_0(VAR_0);
    VAR_6->num_rects = 1;
    VAR_6->rects[0]->type = VAR_1;
    VAR_6->rects[0]->ass = FUNC_3(VAR_5->data);
    if (!VAR_6->rects[0]->ass)
        return FUNC_0(VAR_0);
    *VAR_4 = 1;
    return VAR_5->size;
}
