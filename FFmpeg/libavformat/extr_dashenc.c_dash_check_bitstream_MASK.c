
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct AVFormatContext {TYPE_5__** streams; TYPE_4__* priv_data; } ;
struct TYPE_17__ {TYPE_5__** streams; TYPE_1__* oformat; } ;
struct TYPE_16__ {size_t stream_index; } ;
struct TYPE_15__ {TYPE_2__* internal; } ;
struct TYPE_14__ {TYPE_3__* streams; } ;
struct TYPE_13__ {TYPE_7__* ctx; } ;
struct TYPE_12__ {scalar_t__ nb_bsfcs; int * bsfcs; } ;
struct TYPE_11__ {int (* check_bitstream ) (TYPE_7__*,TYPE_6__*) ;} ;
typedef TYPE_3__ OutputStream ;
typedef TYPE_4__ DASHContext ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVPacket ;
typedef TYPE_7__ AVFormatContext ;


 int FUNC_0 (TYPE_7__*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_1(struct AVFormatContext *VAR_0, const AVPacket *VAR_1)
{
    DASHContext *VAR_2 = VAR_0->priv_data;
    OutputStream *VAR_3 = &VAR_2->streams[VAR_1->stream_index];
    AVFormatContext *VAR_4 = VAR_3->ctx;
    if (VAR_4->oformat->check_bitstream) {
        int VAR_5;
        AVPacket VAR_6 = *VAR_1;
        VAR_6.stream_index = 0;
        VAR_5 = VAR_4->oformat->check_bitstream(VAR_4, &VAR_6);
        if (VAR_5 == 1) {
            AVStream *VAR_7 = VAR_0->streams[VAR_1->stream_index];
            AVStream *VAR_8 = VAR_4->streams[0];
            VAR_7->internal->bsfcs = VAR_8->internal->bsfcs;
            VAR_7->internal->nb_bsfcs = VAR_8->internal->nb_bsfcs;
            VAR_8->internal->bsfcs = ((void*)0);
            VAR_8->internal->nb_bsfcs = 0;
        }
        return VAR_5;
    }
    return 1;
}
