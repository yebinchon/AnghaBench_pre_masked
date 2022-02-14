
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int AVCodecContext ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static enum AVPixelFormat FUNC_1(AVCodecContext *VAR_3,
                                           const enum AVPixelFormat *VAR_4)
{
    const enum AVPixelFormat *VAR_5;

    for (VAR_5 = VAR_4; *VAR_5 != VAR_0; VAR_5++) {
        if (*VAR_5 == VAR_1)
            return *VAR_5;
    }

    FUNC_0(VAR_2, "Unable to decode this file using VA-API.\n");
    return VAR_0;
}
