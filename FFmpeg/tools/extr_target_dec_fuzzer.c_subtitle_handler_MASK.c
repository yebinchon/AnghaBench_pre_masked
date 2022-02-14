
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVSubtitle ;
typedef int AVPacket ;
typedef int AVCodecContext ;


 int FUNC_0 (int *,int *,int*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0, void *VAR_1,
                            int *VAR_2, AVPacket *VAR_3)
{
    AVSubtitle VAR_4;
    int VAR_5 = FUNC_0(VAR_0, &VAR_4, VAR_2, VAR_3);
    if (VAR_5 >= 0 && *VAR_2)
        FUNC_1(&VAR_4);
    return VAR_5;
}
