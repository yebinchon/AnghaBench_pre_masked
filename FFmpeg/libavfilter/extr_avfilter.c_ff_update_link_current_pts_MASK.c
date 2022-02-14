
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ age_index; scalar_t__ graph; int time_base; int current_pts_us; scalar_t__ current_pts; } ;
typedef TYPE_1__ AVFilterLink ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;

void FUNC_2(AVFilterLink *VAR_2, int64_t VAR_3)
{
    if (VAR_3 == VAR_0)
        return;
    VAR_2->current_pts = VAR_3;
    VAR_2->current_pts_us = FUNC_0(VAR_3, VAR_2->time_base, VAR_1);

    if (VAR_2->graph && VAR_2->age_index >= 0)
        FUNC_1(VAR_2->graph, VAR_2);
}
