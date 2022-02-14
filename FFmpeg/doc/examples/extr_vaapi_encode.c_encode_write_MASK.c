
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; int * data; scalar_t__ stream_index; } ;
typedef int FILE ;
typedef TYPE_1__ AVPacket ;
typedef int AVFrame ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int *,scalar_t__,int,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_2, AVFrame *VAR_3, FILE *VAR_4)
{
    int VAR_5 = 0;
    AVPacket VAR_6;

    FUNC_2(&VAR_6);
    VAR_6.data = ((void*)0);
    VAR_6.size = 0;

    if ((VAR_5 = FUNC_5(VAR_2, VAR_3)) < 0) {
        FUNC_6(VAR_1, "Error code: %s\n", FUNC_1(VAR_5));
        goto end;
    }
    while (1) {
        VAR_5 = FUNC_4(VAR_2, &VAR_6);
        if (VAR_5)
            break;

        VAR_6.stream_index = 0;
        VAR_5 = FUNC_7(VAR_6.data, VAR_6.size, 1, VAR_4);
        FUNC_3(&VAR_6);
    }

end:
    VAR_5 = ((VAR_5 == FUNC_0(VAR_0)) ? 0 : -1);
    return VAR_5;
}
