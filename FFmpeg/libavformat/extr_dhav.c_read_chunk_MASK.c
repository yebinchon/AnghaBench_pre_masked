
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int last_good_pos; int type; int timestamp; void* date; void* frame_number; void* frame_subnumber; void* channel; void* subtype; } ;
typedef TYPE_1__ DHAVContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char,char,char,char) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_3)
{
    DHAVContext *VAR_4 = VAR_3->priv_data;
    int VAR_5, VAR_6;
    int64_t VAR_7, VAR_8;
    int VAR_9;

    if (FUNC_1(VAR_3->pb))
        return VAR_0;

    if (FUNC_4(VAR_3->pb) != FUNC_0('D','H','A','V')) {
        VAR_4->last_good_pos += 0x8000;
        FUNC_5(VAR_3->pb, VAR_4->last_good_pos, VAR_2);

        while (FUNC_4(VAR_3->pb) != FUNC_0('D','H','A','V')) {
            if (FUNC_1(VAR_3->pb))
                return VAR_0;
            VAR_4->last_good_pos += 0x8000;
            VAR_9 = FUNC_6(VAR_3->pb, 0x8000 - 4);
            if (VAR_9 < 0)
                return VAR_9;
        }
    }

    VAR_7 = FUNC_7(VAR_3->pb) - 4;
    VAR_4->last_good_pos = VAR_7;
    VAR_4->type = FUNC_2(VAR_3->pb);
    VAR_4->subtype = FUNC_2(VAR_3->pb);
    VAR_4->channel = FUNC_2(VAR_3->pb);
    VAR_4->frame_subnumber = FUNC_2(VAR_3->pb);
    VAR_4->frame_number = FUNC_4(VAR_3->pb);
    VAR_5 = FUNC_4(VAR_3->pb);

    if (VAR_5 < 24)
        return VAR_1;
    if (VAR_4->type == 0xf1) {
        VAR_9 = FUNC_6(VAR_3->pb, VAR_5 - 16);
        return VAR_9 < 0 ? VAR_9 : 0;
    }

    VAR_4->date = FUNC_4(VAR_3->pb);
    VAR_4->timestamp = FUNC_3(VAR_3->pb);
    VAR_6 = FUNC_2(VAR_3->pb);
    FUNC_6(VAR_3->pb, 1);

    VAR_9 = FUNC_8(VAR_3, VAR_6);
    if (VAR_9 < 0)
        return VAR_9;

    VAR_8 = FUNC_7(VAR_3->pb);

    return VAR_5 - 8 - (VAR_8 - VAR_7);
}
