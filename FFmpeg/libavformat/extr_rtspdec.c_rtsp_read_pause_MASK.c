
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv_data; } ;
struct TYPE_8__ {scalar_t__ status_code; } ;
struct TYPE_7__ {scalar_t__ state; scalar_t__ server_type; int control_uri; scalar_t__ need_subscription; } ;
typedef TYPE_1__ RTSPState ;
typedef TYPE_2__ RTSPMessageHeader ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_3__*,char*,int ,int *,TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_4)
{
    RTSPState *VAR_5 = VAR_4->priv_data;
    RTSPMessageHeader VAR_6, *VAR_7 = &VAR_6;

    if (VAR_5->state != VAR_2)
        return 0;
    else if (!(VAR_5->server_type == VAR_0 && VAR_5->need_subscription)) {
        FUNC_1(VAR_4, "PAUSE", VAR_5->control_uri, ((void*)0), VAR_7, ((void*)0));
        if (VAR_7->status_code != VAR_3) {
            return FUNC_0(VAR_7->status_code, -1);
        }
    }
    VAR_5->state = VAR_1;
    return 0;
}
