
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int responseheaders ;
struct TYPE_12__ {TYPE_1__* priv_data; } ;
struct TYPE_11__ {int seq; int member_0; } ;
struct TYPE_10__ {char* session_id; int state; int seq; } ;
typedef TYPE_1__ RTSPState ;
typedef TYPE_2__ RTSPMessageHeader ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_3__*,int ,char*,int ) ;
 int FUNC_3 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2)
{
    RTSPState *VAR_3 = VAR_2->priv_data;
    RTSPMessageHeader VAR_4 = { 0 };
    int VAR_5 = 0;
    char VAR_6[1024];

    VAR_5 = FUNC_1(VAR_2, &VAR_4, "RECORD");
    if (VAR_5)
        return VAR_5;
    VAR_5 = FUNC_0(VAR_2, &VAR_4);
    if (VAR_5)
        return VAR_5;
    VAR_3->seq++;
    FUNC_3(VAR_6, sizeof(VAR_6), "Session: %s\r\n",
             VAR_3->session_id);
    FUNC_2(VAR_2, VAR_1, VAR_6, VAR_4.seq);

    VAR_3->state = VAR_0;
    return 0;
}
