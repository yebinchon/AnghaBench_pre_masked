
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; int codec_type; } ;
struct TYPE_5__ {char* copy_initial_nonkeyframes; int stream_copy; TYPE_2__* enc_ctx; int * st; } ;
typedef TYPE_1__ OutputStream ;
typedef int OptionsContext ;
typedef int AVStream ;
typedef int AVFormatContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int *,int *) ;
 int FUNC_1 (int *,int ,char*,char*) ;
 scalar_t__ FUNC_2 (int *,int *,char*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_4 (int *,int *,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static OutputStream *FUNC_5(OptionsContext *VAR_6, AVFormatContext *VAR_7, int VAR_8)
{
    AVStream *VAR_9;
    OutputStream *VAR_10;
    AVCodecContext *VAR_11;

    VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_0, VAR_8);
    VAR_9 = VAR_10->st;
    VAR_11 = VAR_10->enc_ctx;

    VAR_11->codec_type = VAR_0;

    FUNC_0(VAR_2, VAR_4, VAR_10->copy_initial_nonkeyframes, VAR_7, VAR_9);

    if (!VAR_10->stream_copy) {
        char *VAR_12 = ((void*)0);

        FUNC_0(VAR_3, VAR_5, VAR_12, VAR_7, VAR_9);
        if (VAR_12 && FUNC_2(&VAR_11->width, &VAR_11->height, VAR_12) < 0) {
            FUNC_1(((void*)0), VAR_1, "Invalid frame size: %s.\n", VAR_12);
            FUNC_3(1);
        }
    }

    return VAR_10;
}
