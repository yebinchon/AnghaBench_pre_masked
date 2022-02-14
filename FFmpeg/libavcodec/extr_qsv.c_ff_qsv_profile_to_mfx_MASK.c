
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {int codec_id; int codec_profile; int mfx_profile; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

int FUNC_1(enum AVCodecID VAR_3, int VAR_4)
{
    int VAR_5;
    if (VAR_4 == VAR_0)
        return VAR_1;

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
        if (VAR_2[VAR_5].codec_id != VAR_3)
            continue;
        if (VAR_2[VAR_5].codec_profile == VAR_4)
            return VAR_2[VAR_5].mfx_profile;
    }

    return VAR_1;
}
