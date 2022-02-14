
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {unsigned int sequence; unsigned int type; int length; } ;
typedef TYPE_1__ VivoContext ;
struct TYPE_13__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_12__ {int stream_index; } ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ,char*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    VivoContext *VAR_5 = VAR_3->priv_data;
    AVIOContext *VAR_6 = VAR_3->pb;
    unsigned VAR_7 = VAR_5->sequence, VAR_8 = VAR_5->type;
    int VAR_9, VAR_10 = 0;

restart:

    if (FUNC_4(VAR_6))
        return VAR_0;

    switch (VAR_5->type) {
    case 0:
        FUNC_5(VAR_6, VAR_5->length);
        if ((VAR_10 = FUNC_6(VAR_3)) < 0)
            return VAR_10;
        goto restart;
    case 1:
    case 2:
        VAR_9 = 0;
        break;
    case 3:
    case 4:
        VAR_9 = 1;
        break;
    default:
        FUNC_2(VAR_3, VAR_2, "unknown packet type %d\n", VAR_5->type);
        return VAR_1;
    }

    if ((VAR_10 = FUNC_1(VAR_6, VAR_4, VAR_5->length)) < 0)
        goto fail;


    if ((VAR_10 = FUNC_6(VAR_3)) < 0)
        goto fail;

    while (VAR_5->sequence == VAR_7 &&
           (((VAR_5->type - 1) >> 1) == ((VAR_8 - 1) >> 1))) {
        if (FUNC_4(VAR_6)) {
            VAR_10 = VAR_0;
            break;
        }

        if ((VAR_10 = FUNC_0(VAR_6, VAR_4, VAR_5->length)) < 0)
            break;


        if ((VAR_10 = FUNC_6(VAR_3)) < 0)
            break;
    }

    VAR_4->stream_index = VAR_9;

fail:
    if (VAR_10 < 0)
        FUNC_3(VAR_4);
    return VAR_10;
}
