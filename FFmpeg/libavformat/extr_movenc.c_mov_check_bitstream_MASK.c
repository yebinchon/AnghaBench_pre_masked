
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct AVFormatContext {TYPE_2__** streams; } ;
struct TYPE_8__ {size_t stream_index; int size; int data; } ;
struct TYPE_7__ {TYPE_1__* codecpar; } ;
struct TYPE_6__ {scalar_t__ codec_id; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct AVFormatContext *VAR_2, const AVPacket *VAR_3)
{
    int VAR_4 = 1;
    AVStream *VAR_5 = VAR_2->streams[VAR_3->stream_index];

    if (VAR_5->codecpar->codec_id == VAR_0) {
        if (VAR_3->size > 2 && (FUNC_0(VAR_3->data) & 0xfff0) == 0xfff0)
            VAR_4 = FUNC_1(VAR_5, "aac_adtstoasc", ((void*)0));
    } else if (VAR_5->codecpar->codec_id == VAR_1) {
        VAR_4 = FUNC_1(VAR_5, "vp9_superframe", ((void*)0));
    }

    return VAR_4;
}
