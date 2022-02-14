
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int data; } ;
typedef int FILE ;
typedef TYPE_1__ AVPacket ;
typedef int AVFrame ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(AVCodecContext *VAR_3, AVFrame *VAR_4, AVPacket *VAR_5,
                   FILE *VAR_6)
{
    int VAR_7;


    VAR_7 = FUNC_3(VAR_3, VAR_4);
    if (VAR_7 < 0) {
        FUNC_5(VAR_2, "Error sending the frame to the encoder\n");
        FUNC_4(1);
    }



    while (VAR_7 >= 0) {
        VAR_7 = FUNC_2(VAR_3, VAR_5);
        if (VAR_7 == FUNC_0(VAR_1) || VAR_7 == VAR_0)
            return;
        else if (VAR_7 < 0) {
            FUNC_5(VAR_2, "Error encoding audio frame\n");
            FUNC_4(1);
        }

        FUNC_6(VAR_5->data, 1, VAR_5->size, VAR_6);
        FUNC_1(VAR_5);
    }
}
