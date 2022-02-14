
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int buf ;
struct TYPE_9__ {int frame_number; } ;
struct TYPE_8__ {int height; int width; int * linesize; int * data; } ;
typedef int AVPacket ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,int ,int ,char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int,char*,char const*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_9(AVCodecContext *VAR_4, AVFrame *VAR_5, AVPacket *VAR_6,
                   const char *VAR_7)
{
    char VAR_8[1024];
    int VAR_9;

    VAR_9 = FUNC_2(VAR_4, VAR_6);
    if (VAR_9 < 0) {
        FUNC_5(VAR_2, "Error sending a packet for decoding\n");
        FUNC_3(1);
    }

    while (VAR_9 >= 0) {
        VAR_9 = FUNC_1(VAR_4, VAR_5);
        if (VAR_9 == FUNC_0(VAR_1) || VAR_9 == VAR_0)
            return;
        else if (VAR_9 < 0) {
            FUNC_5(VAR_2, "Error during decoding\n");
            FUNC_3(1);
        }

        FUNC_7("saving frame %3d\n", VAR_4->frame_number);
        FUNC_4(VAR_3);



        FUNC_8(VAR_8, sizeof(VAR_8), "%s-%d", VAR_7, VAR_4->frame_number);
        FUNC_6(VAR_5->data[0], VAR_5->linesize[0],
                 VAR_5->width, VAR_5->height, VAR_8);
    }
}
