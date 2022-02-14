
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {int status_out; int src; int dst; int frame_wanted_out; } ;
typedef TYPE_1__ AVFilterLink ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int ) ;

void FUNC_4(AVFilterLink *VAR_1, int VAR_2, int64_t VAR_3)
{
    FUNC_0(!VAR_1->frame_wanted_out);
    FUNC_0(!VAR_1->status_out);
    VAR_1->status_out = VAR_2;
    if (VAR_3 != VAR_0)
        FUNC_2(VAR_1, VAR_3);
    FUNC_3(VAR_1->dst);
    FUNC_1(VAR_1->src, 200);
}
