
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frame_wanted_out; int src; int status_out; int status_in; } ;
typedef TYPE_1__ AVFilterLink ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(AVFilterLink *VAR_0)
{
    FUNC_0(!VAR_0->status_in);
    FUNC_0(!VAR_0->status_out);
    VAR_0->frame_wanted_out = 1;
    FUNC_1(VAR_0->src, 100);
}
