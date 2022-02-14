
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
typedef int AVCodecTag ;


 int VAR_0 ;
 int FUNC_0 (int const* const,unsigned int) ;

enum AVCodecID FUNC_1(const AVCodecTag *const *VAR_1, unsigned int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_1 && VAR_1[VAR_3]; VAR_3++) {
        enum AVCodecID VAR_4 = FUNC_0(VAR_1[VAR_3], VAR_2);
        if (VAR_4 != VAR_0)
            return VAR_4;
    }
    return VAR_0;
}
