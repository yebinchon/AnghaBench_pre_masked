
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uri ;
typedef int rbuf ;
typedef int method ;
typedef enum RTSPMethod { ____Placeholder_RTSPMethod } RTSPMethod ;
struct TYPE_13__ {TYPE_1__* priv_data; } ;
struct TYPE_12__ {int seq; int member_0; } ;
struct TYPE_11__ {int state; int seq; } ;
typedef TYPE_1__ RTSPState ;
typedef TYPE_2__ RTSPMessageHeader ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int FUNC_1 (TYPE_3__*,unsigned char*,int,char*,int,unsigned char*,int,int*) ;
 int FUNC_2 (TYPE_3__*,unsigned char*,int,int*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,unsigned char*) ;
 int FUNC_4 (TYPE_3__*,int ,char*,int ) ;

int FUNC_5(AVFormatContext *VAR_7)
{
    RTSPState *VAR_8 = VAR_7->priv_data;
    unsigned char VAR_9[4096];
    unsigned char VAR_10[10];
    char VAR_11[500];
    int VAR_12;
    int VAR_13 = 0;
    RTSPMessageHeader VAR_14 = { 0 };
    enum RTSPMethod VAR_15;

    VAR_12 = FUNC_2(VAR_7, VAR_9, sizeof(VAR_9), &VAR_13);
    if (VAR_12 < 0)
        return VAR_12;
    VAR_12 = FUNC_1(VAR_7, VAR_9, VAR_13, VAR_11, sizeof(VAR_11), VAR_10,
                             sizeof(VAR_10), &VAR_15);
    if (VAR_12) {
        FUNC_0(VAR_7, VAR_0, "RTSP: Unexpected Command\n");
        return VAR_12;
    }

    VAR_12 = FUNC_3(VAR_7, &VAR_14, VAR_10);
    if (VAR_12)
        return VAR_12;
    VAR_8->seq++;
    if (VAR_15 == VAR_2) {
        VAR_8->state = VAR_4;
        VAR_12 = FUNC_4(VAR_7, VAR_5, ((void*)0) , VAR_14.seq);

    } else if (VAR_15 == VAR_1) {
        VAR_12 = FUNC_4(VAR_7, VAR_5,
                              "Public: ANNOUNCE, PAUSE, SETUP, TEARDOWN, "
                              "RECORD\r\n", VAR_14.seq);
    } else if (VAR_15 == VAR_6) {
        VAR_8->state = VAR_3;
        VAR_12 = FUNC_4(VAR_7, VAR_5, ((void*)0) , VAR_14.seq);
    }
    return VAR_12;
}
