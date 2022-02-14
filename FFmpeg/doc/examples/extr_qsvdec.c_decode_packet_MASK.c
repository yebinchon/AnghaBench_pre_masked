
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int height; int* linesize; int width; scalar_t__* data; } ;
typedef int DecodeContext ;
typedef int AVPacket ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFrame ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,scalar_t__,int ) ;
 int FUNC_7 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(DecodeContext *VAR_3, AVCodecContext *VAR_4,
                         AVFrame *VAR_5, AVFrame *VAR_6,
                         AVPacket *VAR_7, AVIOContext *VAR_8)
{
    int VAR_9 = 0;

    VAR_9 = FUNC_5(VAR_4, VAR_7);
    if (VAR_9 < 0) {
        FUNC_7(VAR_2, "Error during decoding\n");
        return VAR_9;
    }

    while (VAR_9 >= 0) {
        int VAR_10, VAR_11;

        VAR_9 = FUNC_4(VAR_4, VAR_5);
        if (VAR_9 == FUNC_0(VAR_1) || VAR_9 == VAR_0)
            break;
        else if (VAR_9 < 0) {
            FUNC_7(VAR_2, "Error during decoding\n");
            return VAR_9;
        }




        VAR_9 = FUNC_3(VAR_6, VAR_5, 0);
        if (VAR_9 < 0) {
            FUNC_7(VAR_2, "Error transferring the data to system memory\n");
            goto fail;
        }

        for (VAR_10 = 0; VAR_10 < FUNC_1(VAR_6->data) && VAR_6->data[VAR_10]; VAR_10++)
            for (VAR_11 = 0; VAR_11 < (VAR_6->height >> (VAR_10 > 0)); VAR_11++)
                FUNC_6(VAR_8, VAR_6->data[VAR_10] + VAR_11 * VAR_6->linesize[VAR_10], VAR_6->width);

fail:
        FUNC_2(VAR_6);
        FUNC_2(VAR_5);

        if (VAR_9 < 0)
            return VAR_9;
    }

    return 0;
}
