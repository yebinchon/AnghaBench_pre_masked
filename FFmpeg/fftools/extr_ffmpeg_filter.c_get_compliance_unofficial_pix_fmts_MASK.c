
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;


 int VAR_0 ;
 int VAR_1 ;
__attribute__((used)) static const enum AVPixelFormat *FUNC_0(enum AVCodecID VAR_2, const enum AVPixelFormat VAR_3[])
{
    static const enum AVPixelFormat VAR_4[] =
        { 130, 129, 128,
          133, 132, 131,
          134 };
    static const enum AVPixelFormat VAR_5[] =
        { 136 , 135 , 137,
          130, 128, 129,
          133 , 131 , 132,
          134};

    if (VAR_2 == VAR_1) {
        return VAR_4;
    } else if (VAR_2 == VAR_0) {
        return VAR_5;
    } else {
        return VAR_3;
    }
}
