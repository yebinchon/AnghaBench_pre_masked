
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_17__ {scalar_t__ eof_reached; } ;
struct TYPE_16__ {scalar_t__ need_parsing; TYPE_1__* codecpar; TYPE_2__* priv_data; } ;
struct TYPE_15__ {TYPE_11__* fc; } ;
struct TYPE_14__ {int keyframe_absent; unsigned int keyframe_count; void** keyframes; } ;
struct TYPE_13__ {scalar_t__ codec_type; } ;
struct TYPE_12__ {int nb_streams; TYPE_4__** streams; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ MOVContext ;
typedef int MOVAtom ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (void***) ;
 int FUNC_2 (TYPE_11__*,int ,char*,...) ;
 void** FUNC_3 (unsigned int,int) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 void* FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_7(MOVContext *VAR_8, AVIOContext *VAR_9, MOVAtom VAR_10)
{
    AVStream *VAR_11;
    MOVStreamContext *VAR_12;
    unsigned int VAR_13, VAR_14;

    if (VAR_8->fc->nb_streams < 1)
        return 0;
    VAR_11 = VAR_8->fc->streams[VAR_8->fc->nb_streams-1];
    VAR_12 = VAR_11->priv_data;

    FUNC_4(VAR_9);
    FUNC_5(VAR_9);

    VAR_14 = FUNC_6(VAR_9);

    FUNC_2(VAR_8->fc, VAR_4, "keyframe_count = %u\n", VAR_14);

    if (!VAR_14)
    {
        VAR_12->keyframe_absent = 1;
        if (!VAR_11->need_parsing && VAR_11->codecpar->codec_type == VAR_2)
            VAR_11->need_parsing = VAR_3;
        return 0;
    }
    if (VAR_12->keyframes)
        FUNC_2(VAR_8->fc, VAR_5, "Duplicated STSS atom\n");
    if (VAR_14 >= VAR_7 / sizeof(int))
        return VAR_1;
    FUNC_1(&VAR_12->keyframes);
    VAR_12->keyframe_count = 0;
    VAR_12->keyframes = FUNC_3(VAR_14, sizeof(*VAR_12->keyframes));
    if (!VAR_12->keyframes)
        return FUNC_0(VAR_6);

    for (VAR_13 = 0; VAR_13 < VAR_14 && !VAR_9->eof_reached; VAR_13++) {
        VAR_12->keyframes[VAR_13] = FUNC_6(VAR_9);
    }

    VAR_12->keyframe_count = VAR_13;

    if (VAR_9->eof_reached) {
        FUNC_2(VAR_8->fc, VAR_5, "reached eof, corrupted STSS atom\n");
        return VAR_0;
    }

    return 0;
}
