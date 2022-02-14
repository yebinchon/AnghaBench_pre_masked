
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_18__ {size_t audio_stream_idx; int frames; int ssnd; int form; scalar_t__ write_id3v2; } ;
struct TYPE_17__ {int block_align; } ;
struct TYPE_16__ {TYPE_2__* pb; TYPE_1__** streams; TYPE_5__* priv_data; } ;
struct TYPE_15__ {int seekable; } ;
struct TYPE_14__ {TYPE_4__* codecpar; } ;
typedef TYPE_2__ AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;
typedef TYPE_5__ AIFFOutputContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2)
{
    int VAR_3 = 0;
    AVIOContext *VAR_4 = VAR_2->pb;
    AIFFOutputContext *VAR_5 = VAR_2->priv_data;
    AVCodecParameters *VAR_6 = VAR_2->streams[VAR_5->audio_stream_idx]->codecpar;


    int64_t VAR_7, VAR_8;
    VAR_8 = VAR_7 = FUNC_2(VAR_4);
    if (VAR_7 & 1) {
        FUNC_3(VAR_4, 0);
        VAR_8++;
    }

    if (VAR_2->pb->seekable & VAR_0) {

        FUNC_1(VAR_4, VAR_5->frames, VAR_1);
        FUNC_4(VAR_4, (VAR_7 - VAR_5->ssnd - 12) / VAR_6->block_align);


        FUNC_1(VAR_4, VAR_5->ssnd, VAR_1);
        FUNC_4(VAR_4, VAR_7 - VAR_5->ssnd - 4);


        FUNC_1(VAR_4, VAR_8, VAR_1);


        if (VAR_5->write_id3v2)
            if ((VAR_3 = FUNC_5(VAR_2, VAR_5)) < 0)
                return VAR_3;


        VAR_7 = FUNC_2(VAR_4);
        FUNC_1(VAR_4, VAR_5->form, VAR_1);
        FUNC_4(VAR_4, VAR_7 - VAR_5->form - 4);

        FUNC_0(VAR_4);
    }

    return VAR_3;
}
