
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int * pb; } ;
struct TYPE_5__ {int pts; int duration; int index; int size; int keyframe; scalar_t__ audio; } ;
typedef TYPE_1__ FILMPacket ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, FILMPacket *VAR_1)
{
    AVIOContext *VAR_2 = VAR_0->pb;

    int32_t VAR_3 = 0;
    int32_t VAR_4 = 0;

    if (VAR_1->audio) {

        VAR_3 = 0xFFFFFFFF;
        VAR_4 = 1;
    } else {
        VAR_3 = VAR_1->pts;
        VAR_4 = VAR_1->duration;

        if (!VAR_1->keyframe)
            VAR_3 |= (1 << 31);
    }


    FUNC_0(VAR_2, VAR_1->index);
    FUNC_0(VAR_2, VAR_1->size);
    FUNC_0(VAR_2, VAR_3);
    FUNC_0(VAR_2, VAR_4);

    return 0;
}
