
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pb; } ;
struct TYPE_7__ {scalar_t__ stream_index; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char,char,char,char) ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*,int ,char*,int,int,int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    if (FUNC_5(VAR_2->pb) != FUNC_1('M', 'J', 'P', 'G'))
        return FUNC_0(VAR_1);

    VAR_5 = FUNC_5(VAR_2->pb);

    VAR_6 = FUNC_4(VAR_2->pb);
    VAR_7 = FUNC_4(VAR_2->pb);

    FUNC_6(VAR_2->pb, 8);
    FUNC_6(VAR_2->pb, 2);
    VAR_8 = FUNC_4(VAR_2->pb);
    VAR_9 = FUNC_4(VAR_2->pb);
    FUNC_6(VAR_2->pb, 22);

    FUNC_3(VAR_2, VAR_0, "Ingenient packet: size=%d, width=%d, height=%d, unk1=%d unk2=%d\n",
        VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

    VAR_4 = FUNC_2(VAR_2->pb, VAR_3, VAR_5);
    if (VAR_4 < 0)
        return VAR_4;
    VAR_3->stream_index = 0;
    return VAR_4;
}
