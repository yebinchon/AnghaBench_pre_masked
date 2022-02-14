
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int pb; } ;
struct TYPE_8__ {scalar_t__ stream_index; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    int VAR_6;
    int VAR_7;

    uint32_t VAR_8=-1;
    while (VAR_8 != VAR_3) {
        if (FUNC_4(VAR_4->pb))
            return FUNC_0(VAR_2);
        VAR_8 = (VAR_8<<8) + FUNC_5(VAR_4->pb);
    }

    FUNC_5(VAR_4->pb);
    VAR_6 = FUNC_6(VAR_4->pb);
    FUNC_7(VAR_4->pb, 9);

    if (VAR_6 == 0) {
        FUNC_2(VAR_4, VAR_0, "Next packet size is zero\n");
        return FUNC_0(VAR_1);
    }

    VAR_7 = FUNC_1(VAR_4->pb, VAR_5, VAR_6);
    if (VAR_7 != VAR_6) {
        if (VAR_7 > 0) FUNC_3(VAR_5);
        return FUNC_0(VAR_2);
    }

    VAR_5->stream_index = 0;
    return VAR_6;
}
