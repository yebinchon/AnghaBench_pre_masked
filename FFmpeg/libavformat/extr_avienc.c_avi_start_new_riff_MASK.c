
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_11__ {int nb_streams; TYPE_1__** streams; TYPE_4__* priv_data; } ;
struct TYPE_10__ {void* riff_start; int riff_id; } ;
struct TYPE_8__ {scalar_t__ entry; int audio_strm_offset; } ;
struct TYPE_9__ {TYPE_2__ indexes; int audio_strm_length; } ;
struct TYPE_7__ {TYPE_3__* priv_data; } ;
typedef TYPE_3__ AVIStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVIContext ;
typedef TYPE_5__ AVFormatContext ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static int64_t FUNC_2(AVFormatContext *VAR_0, AVIOContext *VAR_1,
                                  const char *VAR_2, const char *VAR_3)
{
    AVIContext *VAR_4 = VAR_0->priv_data;
    int64_t VAR_5;
    int VAR_6;

    VAR_4->riff_id++;
    for (VAR_6 = 0; VAR_6 < VAR_0->nb_streams; VAR_6++) {
        AVIStream *VAR_7 = VAR_0->streams[VAR_6]->priv_data;
        VAR_7->indexes.audio_strm_offset = VAR_7->audio_strm_length;
        VAR_7->indexes.entry = 0;
    }

    VAR_4->riff_start = FUNC_0(VAR_1, "RIFF");
    FUNC_1(VAR_1, VAR_2);
    VAR_5 = FUNC_0(VAR_1, "LIST");
    FUNC_1(VAR_1, VAR_3);
    return VAR_5;
}
