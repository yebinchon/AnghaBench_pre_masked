
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFrame ;
typedef int AVCodecContext ;


 int FUNC_0 (int *,int *,int *,int,int,int,int,int,int) ;
 int FUNC_1 (int *,int *,int *,int,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0, AVFrame *VAR_1, AVFrame *VAR_2,
                         int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10;

    if (!VAR_9) {
        VAR_10 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    } else {
        VAR_10 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    }

    return VAR_10;
}
