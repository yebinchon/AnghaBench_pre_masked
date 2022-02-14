
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {int seq; int member_0; } ;
struct TYPE_8__ {int seq; } ;
typedef TYPE_1__ RTSPState ;
typedef TYPE_2__ RTSPMessageHeader ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1)
{
    RTSPState *VAR_2 = VAR_1->priv_data;
    RTSPMessageHeader VAR_3 = { 0 };
    int VAR_4 = 0;


    VAR_4 = FUNC_0(VAR_1, &VAR_3, "OPTIONS");
    if (VAR_4)
        return VAR_4;
    VAR_2->seq++;

    FUNC_1(VAR_1, VAR_0,
                    "Public: ANNOUNCE, PAUSE, SETUP, TEARDOWN, RECORD\r\n",
                    VAR_3.seq);
    return 0;
}
