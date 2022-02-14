
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum AVCodecID FUNC_0(int VAR_5)
{
    if (VAR_5 <= 8)
        return VAR_4;
    if (VAR_5 <= 16)
        return VAR_1;
    if (VAR_5 <= 24)
        return VAR_2;
    if (VAR_5 <= 32)
        return VAR_3;


    return VAR_0;
}
