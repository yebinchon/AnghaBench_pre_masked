
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct MovChannelLayoutMap {scalar_t__ tag; scalar_t__ layout; } ;
typedef enum MovChannelLayoutTag { ____Placeholder_MovChannelLayoutTag } MovChannelLayoutTag ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_2__ {scalar_t__ codec_id; int* layouts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct MovChannelLayoutMap** VAR_2 ;
 TYPE_1__* VAR_3 ;

uint32_t FUNC_1(enum AVCodecID VAR_4,
                                       uint64_t VAR_5,
                                       uint32_t *VAR_6)
{
    int VAR_7, VAR_8;
    uint32_t VAR_9 = 0;
    const enum MovChannelLayoutTag *VAR_10 = ((void*)0);


    for (VAR_7 = 0; VAR_3[VAR_7].codec_id != VAR_0; VAR_7++) {
        if (VAR_3[VAR_7].codec_id == VAR_4)
            break;
    }
    if (VAR_3[VAR_7].codec_id != VAR_0)
        VAR_10 = VAR_3[VAR_7].layouts;

    if (VAR_10) {
        int VAR_11;
        const struct MovChannelLayoutMap *VAR_12;


        VAR_11 = FUNC_0(VAR_5);
        if (VAR_11 > 9)
            VAR_11 = 0;
        VAR_12 = VAR_2[VAR_11];


        for (VAR_7 = 0; VAR_10[VAR_7] != 0; VAR_7++) {
            if ((VAR_10[VAR_7] & 0xFFFF) != VAR_11)
                continue;
            for (VAR_8 = 0; VAR_12[VAR_8].tag != 0; VAR_8++) {
                if (VAR_12[VAR_8].tag == VAR_10[VAR_7] &&
                    VAR_12[VAR_8].layout == VAR_5)
                    break;
            }
            if (VAR_12[VAR_8].tag)
                break;
        }
        VAR_9 = VAR_10[VAR_7];
    }


    if (VAR_9 == 0 && VAR_5 > 0 && VAR_5 < 0x40000) {
        VAR_9 = VAR_1;
        *VAR_6 = (uint32_t)VAR_5;
    } else
        *VAR_6 = 0;



    return VAR_9;
}
