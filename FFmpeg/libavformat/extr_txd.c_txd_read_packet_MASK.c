
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * pb; } ;
struct TYPE_7__ {scalar_t__ stream_index; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

 int FUNC_0 (int *,TYPE_1__*,unsigned int) ;
 int FUNC_1 (TYPE_2__*,int ,char*,...) ;
 scalar_t__ FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_5, AVPacket *VAR_6) {
    AVIOContext *VAR_7 = VAR_5->pb;
    unsigned int VAR_8, VAR_9, VAR_10;
    int VAR_11;

next_chunk:
    VAR_8 = FUNC_3(VAR_7);
    VAR_9 = FUNC_3(VAR_7);
    VAR_10 = FUNC_3(VAR_7);

    if (FUNC_2(VAR_5->pb))
        return VAR_0;
    if (VAR_10 != VAR_3 && VAR_10 != VAR_4) {
        FUNC_1(VAR_5, VAR_2, "marker does not match\n");
        return VAR_1;
    }

    switch (VAR_8) {
    case 129:
        if (VAR_9 > 100)
            break;
    case 131:
        FUNC_4(VAR_5->pb, VAR_9);
    case 130:
    case 128:
        goto next_chunk;
    default:
        FUNC_1(VAR_5, VAR_2, "unknown chunk id %i\n", VAR_8);
        return VAR_1;
    }

    VAR_11 = FUNC_0(VAR_5->pb, VAR_6, VAR_9);
    if (VAR_11 < 0)
        return VAR_11;
    VAR_6->stream_index = 0;

    return 0;
}
