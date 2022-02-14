
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
typedef int AVCodec ;


 int * FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static AVCodec *FUNC_2(enum AVCodecID VAR_0)
{
    AVCodec *VAR_1;

    VAR_1 = FUNC_0(VAR_0);
    if (!VAR_1)
        FUNC_1("Failed to find decoder");
    return VAR_1;
}
