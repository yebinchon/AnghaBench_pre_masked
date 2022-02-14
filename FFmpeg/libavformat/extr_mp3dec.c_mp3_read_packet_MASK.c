
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_9__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_8__ {scalar_t__ stream_index; int flags; } ;
struct TYPE_7__ {scalar_t__ filesize; } ;
typedef TYPE_1__ MP3DecContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    MP3DecContext *VAR_6 = VAR_4->priv_data;
    int VAR_7, VAR_8;
    int64_t VAR_9;

    VAR_8 = VAR_3;
    VAR_9 = FUNC_2(VAR_4->pb);
    if (VAR_6->filesize > VAR_2 && VAR_9 < VAR_6->filesize)
        VAR_8= FUNC_0(VAR_8, VAR_6->filesize - VAR_9);

    VAR_7 = FUNC_1(VAR_4->pb, VAR_5, VAR_8);
    if (VAR_7 <= 0) {
        if(VAR_7<0)
            return VAR_7;
        return VAR_0;
    }

    VAR_5->flags &= ~VAR_1;
    VAR_5->stream_index = 0;

    return VAR_7;
}
