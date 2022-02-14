
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * pb; } ;
struct TYPE_7__ {int stream_index; int flags; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 unsigned int VAR_3 ;

 unsigned int VAR_4 ;


 int FUNC_1 (int *,TYPE_1__*,unsigned int) ;
 int FUNC_2 (TYPE_2__*,int ,char*,...) ;
 unsigned int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    AVIOContext *VAR_7 = VAR_5->pb;
    int VAR_8;
    unsigned int VAR_9, VAR_10, VAR_11, VAR_12;

    FUNC_3(VAR_7);
    VAR_9 = FUNC_3(VAR_7);
    VAR_10 = FUNC_4(VAR_7);
    VAR_11 = -VAR_10 & 511;
    VAR_12 = VAR_10 - 8;

    if (VAR_9 > 129 || VAR_9 == VAR_3) {
        FUNC_2(VAR_5, VAR_0, "invalid or unsupported frame_type\n");
        return FUNC_0(VAR_2);
    }
    if (VAR_10 > VAR_4 || VAR_10<=8) {
        FUNC_2(VAR_5, VAR_0, "packet size %d is invalid\n", VAR_10);
        return FUNC_0(VAR_2);
    }

    if ((VAR_8 = FUNC_1(VAR_7, VAR_6, VAR_12)) <= 0)
        return FUNC_0(VAR_2);

    FUNC_5(VAR_7, VAR_11);

    switch (VAR_9) {
    case 130:
        VAR_6->flags = VAR_1;
    case 128:
    case 131:
        VAR_6->stream_index = 0;
        break;
    case 129:
        VAR_6->stream_index = 1;
        break;
    }

    return VAR_8;
}
