
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVCodecContext ;


 int FUNC_0 () ;

int FUNC_1(AVCodecContext *VAR_0, int (*VAR_1)(AVCodecContext *VAR_2, void *VAR_3, int VAR_4, int VAR_5), void *VAR_6, int *VAR_7, int VAR_8)
{
    int VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
        int VAR_10 = VAR_1(VAR_0, VAR_6, VAR_9, 0);
        if (VAR_7)
            VAR_7[VAR_9] = VAR_10;
    }
    FUNC_0();
    return 0;
}
