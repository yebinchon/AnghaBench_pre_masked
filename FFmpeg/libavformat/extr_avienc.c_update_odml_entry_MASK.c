
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_14__ {TYPE_1__* codecpar; TYPE_3__* priv_data; } ;
struct TYPE_13__ {TYPE_7__** streams; TYPE_4__* priv_data; int * pb; } ;
struct TYPE_12__ {int riff_id; } ;
struct TYPE_10__ {int master_odml_riff_id_base; int audio_strm_offset; int entry; scalar_t__ indx_start; } ;
struct TYPE_11__ {int audio_strm_length; int sample_requested; TYPE_2__ indexes; } ;
struct TYPE_9__ {scalar_t__ codec_type; } ;
typedef TYPE_3__ AVIStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVIContext ;
typedef TYPE_5__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (TYPE_5__*,char*) ;
 int FUNC_7 (TYPE_7__*,int*,int*,int*) ;
 int FUNC_8 (int *,char*) ;

__attribute__((used)) static void FUNC_9(AVFormatContext *VAR_2, int VAR_3, int64_t VAR_4, int VAR_5)
{
    AVIOContext *VAR_6 = VAR_2->pb;
    AVIContext *VAR_7 = VAR_2->priv_data;
    AVIStream *VAR_8 = VAR_2->streams[VAR_3]->priv_data;
    int64_t VAR_9;
    int VAR_10, VAR_11, VAR_12;

    FUNC_0(VAR_6);
    VAR_9 = FUNC_3(VAR_6);


    FUNC_1(VAR_6, VAR_8->indexes.indx_start - 8, VAR_1);
    FUNC_8(VAR_6, "indx");
    FUNC_2(VAR_6, 8);
    FUNC_4(VAR_6, VAR_7->riff_id - VAR_8->indexes.master_odml_riff_id_base);
    FUNC_2(VAR_6, 16 * (VAR_7->riff_id - VAR_8->indexes.master_odml_riff_id_base));
    FUNC_5(VAR_6, VAR_4);
    FUNC_4(VAR_6, VAR_5);
    FUNC_7(VAR_2->streams[VAR_3], &VAR_10, &VAR_11, &VAR_12);
    if (VAR_2->streams[VAR_3]->codecpar->codec_type == VAR_0 && VAR_11 > 0) {
        uint32_t VAR_13 = (VAR_8->audio_strm_length - VAR_8->indexes.audio_strm_offset);
        if ((VAR_13 % VAR_11 > 0) && !VAR_8->sample_requested) {
            FUNC_6(VAR_2, "OpenDML index duration for audio packets with partial frames");
            VAR_8->sample_requested = 1;
        }
        FUNC_4(VAR_6, VAR_13 / VAR_11);
    } else
        FUNC_4(VAR_6, VAR_8->indexes.entry);

    FUNC_1(VAR_6, VAR_9, VAR_1);
}
