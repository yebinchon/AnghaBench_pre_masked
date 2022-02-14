
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ start_time; TYPE_1__* codecpar; } ;
struct TYPE_8__ {TYPE_4__* vst; int * fctx; } ;
struct TYPE_7__ {int bit_rate; int codec_id; int codec_type; } ;
typedef TYPE_2__ DVDemuxContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (int *,int *) ;

DVDemuxContext *FUNC_3(AVFormatContext *VAR_2)
{
    DVDemuxContext *VAR_3;

    VAR_3 = FUNC_1(sizeof(DVDemuxContext));
    if (!VAR_3)
        return ((void*)0);

    VAR_3->vst = FUNC_2(VAR_2, ((void*)0));
    if (!VAR_3->vst) {
        FUNC_0(VAR_3);
        return ((void*)0);
    }

    VAR_3->fctx = VAR_2;
    VAR_3->vst->codecpar->codec_type = VAR_0;
    VAR_3->vst->codecpar->codec_id = VAR_1;
    VAR_3->vst->codecpar->bit_rate = 25000000;
    VAR_3->vst->start_time = 0;

    return VAR_3;
}
