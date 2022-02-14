
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int time_base; } ;
struct TYPE_11__ {int member_0; } ;
struct TYPE_10__ {int st; TYPE_3__* enc; } ;
typedef TYPE_1__ OutputStream ;
typedef TYPE_2__ AVPacket ;
typedef int AVFrame ;
typedef int AVFormatContext ;
typedef TYPE_3__ AVCodecContext ;


 char* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int *,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char*) ;
 int * FUNC_5 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_6 (int *,int *,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_1, OutputStream *VAR_2)
{
    int VAR_3;
    AVCodecContext *VAR_4;
    AVFrame *VAR_5;
    int VAR_6 = 0;
    AVPacket VAR_7 = { 0 };

    VAR_4 = VAR_2->enc;

    VAR_5 = FUNC_5(VAR_2);

    FUNC_1(&VAR_7);


    VAR_3 = FUNC_2(VAR_4, &VAR_7, VAR_5, &VAR_6);
    if (VAR_3 < 0) {
        FUNC_4(VAR_0, "Error encoding video frame: %s\n", FUNC_0(VAR_3));
        FUNC_3(1);
    }

    if (VAR_6) {
        VAR_3 = FUNC_6(VAR_1, &VAR_4->time_base, VAR_2->st, &VAR_7);
    } else {
        VAR_3 = 0;
    }

    if (VAR_3 < 0) {
        FUNC_4(VAR_0, "Error while writing video frame: %s\n", FUNC_0(VAR_3));
        FUNC_3(1);
    }

    return (VAR_5 || VAR_6) ? 0 : 1;
}
