
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {TYPE_2__** streams; int pb; } ;
struct TYPE_10__ {int duration; int pts; int pos; scalar_t__ stream_index; int flags; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {scalar_t__ codec_id; } ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ,char,char,char) ;
 int FUNC_1 (int ,TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    int64_t VAR_6 = FUNC_7(VAR_4->pb);
    int VAR_7, VAR_8;
    int VAR_9;
    unsigned VAR_10;

    if (FUNC_2(VAR_4->pb))
        return VAR_0;

    VAR_10 = FUNC_4(VAR_4->pb);
    if (VAR_10 == 0)
        return VAR_0;
    else if (VAR_10 != FUNC_0(0,'B','L','K'))
        return VAR_1;

    FUNC_6(VAR_4->pb, 1);
    VAR_9 = FUNC_3(VAR_4->pb);
    FUNC_6(VAR_4->pb, 2);
    VAR_8 = FUNC_5(VAR_4->pb);
    FUNC_6(VAR_4->pb, 12);
    VAR_7 = FUNC_1(VAR_4->pb, VAR_5, VAR_9);
    if (VAR_7 < VAR_9)
        VAR_5->flags |= VAR_3;

    if (VAR_7 < 0)
        return VAR_7;
    if (!VAR_7)
        return VAR_0;

    VAR_5->stream_index = 0;
    VAR_5->pos = VAR_6;
    if (VAR_4->streams[0]->codecpar->codec_id == VAR_2) {
        VAR_5->duration = 1024;
        VAR_5->pts = VAR_8 * 1024LL;
    } else {
        VAR_5->duration = 2048;
        VAR_5->pts = VAR_8 * 2048LL;
    }

    return VAR_7;
}
