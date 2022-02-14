
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {int avcodec; scalar_t__ v4l2_fmt; int avfmt; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

enum AVPixelFormat FUNC_1(uint32_t VAR_2, enum AVCodecID VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
        if (VAR_1[VAR_4].avcodec == VAR_3 &&
            VAR_1[VAR_4].v4l2_fmt == VAR_2)
            return VAR_1[VAR_4].avfmt;
    }
    return VAR_0;
}
