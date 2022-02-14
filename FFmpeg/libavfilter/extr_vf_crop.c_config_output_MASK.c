
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int sample_aspect_ratio; int h; int w; int format; TYPE_1__* src; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int out_sar; int h; int w; } ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_2__ CropContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_1)
{
    CropContext *VAR_2 = VAR_1->src->priv;
    const AVPixFmtDescriptor *VAR_3 = FUNC_0(VAR_1->format);

    if (VAR_3->flags & VAR_0) {


    } else {
        VAR_1->w = VAR_2->w;
        VAR_1->h = VAR_2->h;
    }
    VAR_1->sample_aspect_ratio = VAR_2->out_sar;

    return 0;
}
