
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int status_in; int dst; scalar_t__ frame_blocked_in; scalar_t__ frame_wanted_out; int status_in_pts; } ;
typedef TYPE_1__ AVFilterLink ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(AVFilterLink *VAR_0, int VAR_1, int64_t VAR_2)
{
    if (VAR_0->status_in == VAR_1)
        return;
    FUNC_0(!VAR_0->status_in);
    VAR_0->status_in = VAR_1;
    VAR_0->status_in_pts = VAR_2;
    VAR_0->frame_wanted_out = 0;
    VAR_0->frame_blocked_in = 0;
    FUNC_2(VAR_0->dst);
    FUNC_1(VAR_0->dst, 200);
}
