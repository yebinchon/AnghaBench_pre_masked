
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVCodecContext ;
typedef int AVCodec ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int const*) ;

AVCodecContext *FUNC_3(const AVCodec *VAR_0)
{
    AVCodecContext *VAR_1= FUNC_1(sizeof(AVCodecContext));

    if (!VAR_1)
        return ((void*)0);

    if (FUNC_2(VAR_1, VAR_0) < 0) {
        FUNC_0(VAR_1);
        return ((void*)0);
    }

    return VAR_1;
}
