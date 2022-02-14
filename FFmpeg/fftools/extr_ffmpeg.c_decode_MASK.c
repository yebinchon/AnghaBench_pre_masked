
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVPacket ;
typedef int AVFrame ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_2, AVFrame *VAR_3, int *VAR_4, AVPacket *VAR_5)
{
    int VAR_6;

    *VAR_4 = 0;

    if (VAR_5) {
        VAR_6 = FUNC_2(VAR_2, VAR_5);


        if (VAR_6 < 0 && VAR_6 != VAR_0)
            return VAR_6;
    }

    VAR_6 = FUNC_1(VAR_2, VAR_3);
    if (VAR_6 < 0 && VAR_6 != FUNC_0(VAR_1))
        return VAR_6;
    if (VAR_6 >= 0)
        *VAR_4 = 1;

    return 0;
}
