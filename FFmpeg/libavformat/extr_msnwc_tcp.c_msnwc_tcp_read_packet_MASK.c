
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int * pb; } ;
struct TYPE_6__ {int pts; int dts; int flags; scalar_t__ stream_index; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    AVIOContext *VAR_5 = VAR_3->pb;
    uint16_t VAR_6;
    uint32_t VAR_7, VAR_8;
    int VAR_9;

    FUNC_3(VAR_5, 1);
    FUNC_3(VAR_5, 2);
    FUNC_3(VAR_5, 2);
    VAR_6 = FUNC_1(VAR_5);
    VAR_7 = FUNC_2(VAR_5);
    FUNC_3(VAR_5, 4);
    FUNC_3(VAR_5, 4);
    VAR_8 = FUNC_2(VAR_5);

    if (!VAR_7)
        return VAR_0;

    if ((VAR_9 = FUNC_0(VAR_5, VAR_4, VAR_7)) < 0)
        return VAR_9;

    FUNC_3(VAR_5, 1);

    VAR_4->pts = VAR_8;
    VAR_4->dts = VAR_8;
    VAR_4->stream_index = 0;



    if (VAR_6 & 1)
        VAR_4->flags |= VAR_1;

    return VAR_2 + VAR_7;
}
