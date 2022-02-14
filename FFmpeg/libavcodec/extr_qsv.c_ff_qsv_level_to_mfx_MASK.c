
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;



 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(enum AVCodecID VAR_2, int VAR_3)
{
    if (VAR_3 == VAR_0)
        return VAR_1;

    switch (VAR_2) {
    case 128:
        return VAR_3 / 3;
    default:
        return VAR_3;
    }
}
