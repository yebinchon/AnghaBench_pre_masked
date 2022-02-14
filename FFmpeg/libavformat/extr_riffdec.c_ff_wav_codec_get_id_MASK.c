
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned int) ;
 int VAR_4 ;
 int FUNC_1 (int,int,int ,int) ;

enum AVCodecID FUNC_2(unsigned int VAR_5, int VAR_6)
{
    enum AVCodecID VAR_7;
    VAR_7 = FUNC_0(VAR_4, VAR_5);
    if (VAR_7 <= 0)
        return VAR_7;

    if (VAR_7 == VAR_2)
        VAR_7 = FUNC_1(VAR_6, 0, 0, ~1);
    else if (VAR_7 == VAR_1)
        VAR_7 = FUNC_1(VAR_6, 1, 0, 0);

    if (VAR_7 == VAR_0 && VAR_6 == 8)
        VAR_7 = VAR_3;
    return VAR_7;
}
