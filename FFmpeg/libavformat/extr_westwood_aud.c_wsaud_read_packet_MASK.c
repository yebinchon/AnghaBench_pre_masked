
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__** streams; int * pb; } ;
struct TYPE_12__ {unsigned char* data; int duration; int stream_index; } ;
struct TYPE_11__ {int index; TYPE_1__* codecpar; } ;
struct TYPE_10__ {scalar_t__ codec_id; unsigned int channels; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned int) ;
 int VAR_5 ;
 int FUNC_4 (int *,TYPE_3__*,unsigned int) ;
 int FUNC_5 (TYPE_4__*,int ,char*,unsigned int) ;
 int FUNC_6 (TYPE_3__*,unsigned int) ;
 int FUNC_7 (int *,unsigned char*,unsigned int) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_6,
                             AVPacket *VAR_7)
{
    AVIOContext *VAR_8 = VAR_6->pb;
    unsigned char VAR_9[VAR_0];
    unsigned int VAR_10;
    int VAR_11 = 0;
    AVStream *VAR_12 = VAR_6->streams[0];

    if (FUNC_7(VAR_8, VAR_9, VAR_0) !=
        VAR_0)
        return FUNC_0(VAR_5);


    if (FUNC_2(&VAR_9[4]) != VAR_1)
        return VAR_2;

    VAR_10 = FUNC_1(&VAR_9[0]);

    if (VAR_12->codecpar->codec_id == VAR_3) {




        int VAR_13 = FUNC_1(&VAR_9[2]);
        if ((VAR_11 = FUNC_6(VAR_7, VAR_10 + 4)) < 0)
            return VAR_11;
        if ((VAR_11 = FUNC_7(VAR_8, &VAR_7->data[4], VAR_10)) != VAR_10)
            return VAR_11 < 0 ? VAR_11 : FUNC_0(VAR_5);
        FUNC_3(&VAR_7->data[0], VAR_13);
        FUNC_3(&VAR_7->data[2], VAR_10);

        VAR_7->duration = VAR_13;
    } else {
        VAR_11 = FUNC_4(VAR_8, VAR_7, VAR_10);
        if (VAR_11 != VAR_10)
            return FUNC_0(VAR_5);

        if (VAR_12->codecpar->channels <= 0) {
            FUNC_5(VAR_6, VAR_4, "invalid number of channels %d\n",
                   VAR_12->codecpar->channels);
            return VAR_2;
        }


        VAR_7->duration = (VAR_10 * 2) / VAR_12->codecpar->channels;
    }
    VAR_7->stream_index = VAR_12->index;

    return VAR_11;
}
