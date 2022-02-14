
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int pictq; } ;
typedef TYPE_1__ VideoState ;
struct TYPE_10__ {int format; int height; int width; int sample_aspect_ratio; int pict_type; } ;
struct TYPE_9__ {double pts; double duration; int serial; int frame; int sar; int height; int width; int pos; int format; scalar_t__ uploaded; } ;
typedef TYPE_2__ Frame ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,double) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(VideoState *VAR_0, AVFrame *VAR_1, double VAR_2, double VAR_3, int64_t VAR_4, int VAR_5)
{
    Frame *VAR_6;






    if (!(VAR_6 = FUNC_2(&VAR_0->pictq)))
        return -1;

    VAR_6->sar = VAR_1->sample_aspect_ratio;
    VAR_6->uploaded = 0;

    VAR_6->width = VAR_1->width;
    VAR_6->height = VAR_1->height;
    VAR_6->format = VAR_1->format;

    VAR_6->pts = VAR_2;
    VAR_6->duration = VAR_3;
    VAR_6->pos = VAR_4;
    VAR_6->serial = VAR_5;

    FUNC_5(VAR_6->width, VAR_6->height, VAR_6->sar);

    FUNC_0(VAR_6->frame, VAR_1);
    FUNC_3(&VAR_0->pictq);
    return 0;
}
