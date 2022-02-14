
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int cmd ;
struct TYPE_9__ {TYPE_1__* priv_data; } ;
struct TYPE_8__ {scalar_t__ status_code; } ;
struct TYPE_7__ {int state; int control_uri; } ;
typedef TYPE_1__ RTSPState ;
typedef TYPE_2__ RTSPMessageHeader ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_3__*,char*,int ,char*,TYPE_2__*,int *) ;
 int FUNC_2 (char*,int,char*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2)
{
    RTSPState *VAR_3 = VAR_2->priv_data;
    RTSPMessageHeader VAR_4, *VAR_5 = &VAR_4;
    char VAR_6[1024];

    FUNC_2(VAR_6, sizeof(VAR_6),
             "Range: npt=0.000-\r\n");
    FUNC_1(VAR_2, "RECORD", VAR_3->control_uri, VAR_6, VAR_5, ((void*)0));
    if (VAR_5->status_code != VAR_1)
        return FUNC_0(VAR_5->status_code, -1);
    VAR_3->state = VAR_0;
    return 0;
}
