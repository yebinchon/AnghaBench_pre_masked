
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_2__ {scalar_t__ codec_id; scalar_t__ v4l2_fmt; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

enum AVCodecID FUNC_0(uint32_t VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_1[VAR_3].codec_id != VAR_0; VAR_3++) {
        if (VAR_1[VAR_3].v4l2_fmt == VAR_2) {
            return VAR_1[VAR_3].codec_id;
        }
    }

    return VAR_0;
}
