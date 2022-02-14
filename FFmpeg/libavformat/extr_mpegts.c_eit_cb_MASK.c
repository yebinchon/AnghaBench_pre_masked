
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_18__ {int stream_index; } ;
struct TYPE_17__ {int stop_parse; TYPE_10__* epg_stream; TYPE_8__* pkt; int stream; } ;
struct TYPE_12__ {TYPE_6__* opaque; } ;
struct TYPE_13__ {TYPE_1__ section_filter; } ;
struct TYPE_16__ {TYPE_2__ u; } ;
struct TYPE_15__ {scalar_t__ tid; int id; } ;
struct TYPE_14__ {int codec_id; int codec_type; } ;
struct TYPE_11__ {scalar_t__ discard; int index; TYPE_3__* codecpar; int id; } ;
typedef TYPE_4__ SectionHeader ;
typedef TYPE_5__ MpegTSFilter ;
typedef TYPE_6__ MpegTSContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,char*,...) ;
 TYPE_10__* FUNC_1 (int ,int *) ;
 int FUNC_2 (int const*,int,TYPE_8__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int const**,int const*) ;

__attribute__((used)) static void FUNC_4(MpegTSFilter *VAR_7, const uint8_t *VAR_8, int VAR_9)
{
    MpegTSContext *VAR_10 = VAR_7->u.section_filter.opaque;
    const uint8_t *VAR_11, *VAR_12;
    SectionHeader VAR_13, *VAR_14 = &VAR_13;






    if (!VAR_10->epg_stream) {
        VAR_10->epg_stream = FUNC_1(VAR_10->stream, ((void*)0));
        if (!VAR_10->epg_stream)
            return;
        VAR_10->epg_stream->id = VAR_4;
        VAR_10->epg_stream->codecpar->codec_type = VAR_1;
        VAR_10->epg_stream->codecpar->codec_id = VAR_2;
    }

    if (VAR_10->epg_stream->discard == VAR_0)
        return;

    VAR_12 = VAR_8 + VAR_9 - 4;
    VAR_11 = VAR_8;

    if (FUNC_3(VAR_14, &VAR_11, VAR_12) < 0)
        return;
    if (VAR_14->tid < VAR_5 || VAR_14->tid > VAR_6)
        return;

    FUNC_0(VAR_10->stream, VAR_3, "EIT: tid received = %.02x\n", VAR_14->tid);





    if (VAR_14->id == 0xFFFF) {
        FUNC_0(VAR_10->stream, VAR_3, "Scrambled EIT table received.\n");
        return;
    }





    if (!VAR_10->pkt)
        return;

    FUNC_2(VAR_8, VAR_9, VAR_10->pkt);
    VAR_10->pkt->stream_index = VAR_10->epg_stream->index;
    VAR_10->stop_parse = 1;
}
