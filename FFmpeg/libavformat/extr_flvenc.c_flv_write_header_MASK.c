
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int codec_tag; } ;
struct TYPE_17__ {int nb_streams; TYPE_1__** streams; TYPE_2__* priv_data; TYPE_3__* pb; } ;
struct TYPE_16__ {scalar_t__ seekable; } ;
struct TYPE_15__ {int reserved; int flags; int datastart_offset; int video_par; int audio_par; } ;
struct TYPE_14__ {TYPE_8__* codecpar; } ;
typedef TYPE_2__ FLVContext ;
typedef TYPE_3__ AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,char*,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_8__*,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_3)
{
    int VAR_4;
    AVIOContext *VAR_5 = VAR_3->pb;
    FLVContext *VAR_6 = VAR_3->priv_data;

    FUNC_4(VAR_5, "FLV", 3);
    FUNC_1(VAR_5, 1);
    FUNC_1(VAR_5, VAR_0 * !!VAR_6->audio_par +
                VAR_1 * !!VAR_6->video_par);
    FUNC_3(VAR_5, 9);
    FUNC_3(VAR_5, 0);

    for (VAR_4 = 0; VAR_4 < VAR_3->nb_streams; VAR_4++)
        if (VAR_3->streams[VAR_4]->codecpar->codec_tag == 5) {
            FUNC_1(VAR_5, 8);
            FUNC_2(VAR_5, 0);
            FUNC_2(VAR_5, 0);
            FUNC_3(VAR_5, 0);
            FUNC_3(VAR_5, 11);
            VAR_6->reserved = 5;
        }

    if (VAR_6->flags & VAR_2) {
        VAR_5->seekable = 0;
    } else {
        FUNC_6(VAR_3, 0);
    }

    for (VAR_4 = 0; VAR_4 < VAR_3->nb_streams; VAR_4++) {
        FUNC_5(VAR_3, VAR_3->streams[VAR_4]->codecpar, 0);
    }

    VAR_6->datastart_offset = FUNC_0(VAR_5);
    return 0;
}
