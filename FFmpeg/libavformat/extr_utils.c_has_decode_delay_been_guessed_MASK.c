
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int has_b_frames; } ;
struct TYPE_8__ {int nb_decoded_frames; TYPE_1__* internal; int info; TYPE_2__* codecpar; } ;
struct TYPE_7__ {scalar_t__ codec_id; } ;
struct TYPE_6__ {TYPE_5__* avctx; } ;
typedef TYPE_3__ AVStream ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_1(AVStream *VAR_1)
{
    if (VAR_1->codecpar->codec_id != VAR_0) return 1;
    if (!VAR_1->info)
        return 1;





    if (VAR_1->internal->avctx->has_b_frames<3)
        return VAR_1->nb_decoded_frames >= 7;
    else if (VAR_1->internal->avctx->has_b_frames<4)
        return VAR_1->nb_decoded_frames >= 18;
    else
        return VAR_1->nb_decoded_frames >= 20;
}
