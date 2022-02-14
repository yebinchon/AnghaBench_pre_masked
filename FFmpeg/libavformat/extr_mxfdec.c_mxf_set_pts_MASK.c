
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ codec_type; } ;
struct TYPE_14__ {size_t dts; size_t pts; int duration; } ;
struct TYPE_13__ {TYPE_1__* priv_data; TYPE_5__* codecpar; } ;
struct TYPE_12__ {size_t nb_ptses; size_t first_dts; size_t* ptses; } ;
struct TYPE_11__ {size_t sample_count; scalar_t__ intra_only; int index_sid; } ;
typedef TYPE_1__ MXFTrack ;
typedef TYPE_2__ MXFIndexTable ;
typedef int MXFContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_5__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_2(MXFContext *VAR_2, AVStream *VAR_3, AVPacket *VAR_4)
{
    AVCodecParameters *VAR_5 = VAR_3->codecpar;
    MXFTrack *VAR_6 = VAR_3->priv_data;

    if (VAR_5->codec_type == VAR_1) {

        MXFIndexTable *VAR_7 = FUNC_0(VAR_2, VAR_6->index_sid);

        if (VAR_7 && VAR_6->sample_count < VAR_7->nb_ptses) {
            VAR_4->dts = VAR_6->sample_count + VAR_7->first_dts;
            VAR_4->pts = VAR_7->ptses[VAR_6->sample_count];
        } else if (VAR_6->intra_only) {


            VAR_4->pts = VAR_6->sample_count;
        }
        VAR_6->sample_count++;
    } else if (VAR_5->codec_type == VAR_0) {
        int VAR_8 = FUNC_1(VAR_2, VAR_5, VAR_4);
        if (VAR_8 < 0)
            return VAR_8;
    } else if (VAR_6) {
        VAR_4->dts = VAR_4->pts = VAR_6->sample_count;
        VAR_4->duration = 1;
        VAR_6->sample_count++;
    }
    return 0;
}
