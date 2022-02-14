
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int status_out; int status_in; int current_pts; int status_in_pts; int fifo; } ;
typedef TYPE_1__ AVFilterLink ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(AVFilterLink *VAR_0, int *VAR_1, int64_t *VAR_2)
{
    *VAR_2 = VAR_0->current_pts;
    if (FUNC_0(&VAR_0->fifo))
        return *VAR_1 = 0;
    if (VAR_0->status_out)
        return *VAR_1 = VAR_0->status_out;
    if (!VAR_0->status_in)
        return *VAR_1 = 0;
    *VAR_1 = VAR_0->status_out = VAR_0->status_in;
    FUNC_1(VAR_0, VAR_0->status_in_pts);
    *VAR_2 = VAR_0->current_pts;
    return 1;
}
