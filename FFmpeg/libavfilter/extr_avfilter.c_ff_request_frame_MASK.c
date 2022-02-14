
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int status_out; int frame_wanted_out; int src; int status_in_pts; scalar_t__ status_in; TYPE_2__* dst; int fifo; } ;
struct TYPE_8__ {int ready; TYPE_1__* filter; } ;
struct TYPE_7__ {int activate; } ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_3__*,int) ;
 int VAR_0 ;

int FUNC_6(AVFilterLink *VAR_1)
{
    FUNC_0(((void*)0), VAR_0); FUNC_5(((void*)0), VAR_1, 1);

    FUNC_1(!VAR_1->dst->filter->activate);
    if (VAR_1->status_out)
        return VAR_1->status_out;
    if (VAR_1->status_in) {
        if (FUNC_4(&VAR_1->fifo)) {
            FUNC_1(!VAR_1->frame_wanted_out);
            FUNC_1(VAR_1->dst->ready >= 300);
            return 0;
        } else {



            FUNC_2(VAR_1, VAR_1->status_in, VAR_1->status_in_pts);
            return VAR_1->status_out;
        }
    }
    VAR_1->frame_wanted_out = 1;
    FUNC_3(VAR_1->src, 100);
    return 0;
}
