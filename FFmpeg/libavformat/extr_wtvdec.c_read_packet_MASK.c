
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pts; int * pb; } ;
typedef TYPE_1__ WtvContext ;
struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {int stream_index; int pts; } ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    WtvContext *VAR_3 = VAR_1->priv_data;
    AVIOContext *VAR_4 = VAR_3->pb;
    int VAR_5, VAR_6, VAR_7;

    VAR_5 = FUNC_3(VAR_1, VAR_0, 0, &VAR_6);
    if (VAR_5 < 0)
        return VAR_5;

    VAR_7 = FUNC_1(VAR_4, VAR_2, VAR_6 - 32);
    if (VAR_7 < 0)
        return VAR_7;
    VAR_2->stream_index = VAR_5;
    VAR_2->pts = VAR_3->pts;
    FUNC_2(VAR_4, FUNC_0(VAR_6) - VAR_6);
    return 0;
}
