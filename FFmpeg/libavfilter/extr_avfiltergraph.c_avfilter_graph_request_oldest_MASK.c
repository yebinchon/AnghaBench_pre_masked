
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ int64_t ;
struct TYPE_16__ {int sink_links_count; TYPE_3__** sink_links; } ;
struct TYPE_15__ {int age_index; scalar_t__ frame_count_out; int status_in; int frame_blocked_in; int frame_wanted_out; TYPE_10__* dst; TYPE_1__* dstpad; } ;
struct TYPE_14__ {scalar_t__ activate; } ;
struct TYPE_13__ {char* name; } ;
struct TYPE_12__ {char* name; TYPE_2__* filter; } ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterGraph ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_10__*,int *,int ) ;
 int FUNC_3 (TYPE_10__*,int ,char*,char*,char*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*,int) ;

int FUNC_7(AVFilterGraph *VAR_4)
{
    AVFilterLink *VAR_5 = VAR_4->sink_links[0];
    int64_t VAR_6;
    int VAR_7;

    while (VAR_4->sink_links_count) {
        VAR_5 = VAR_4->sink_links[0];
        if (VAR_5->dst->filter->activate) {

            VAR_7 = FUNC_2(VAR_5->dst, ((void*)0),
                                              VAR_1);
            if (VAR_7 != VAR_0)
                return VAR_7;
        } else {
            VAR_7 = FUNC_5(VAR_5);
        }
        if (VAR_7 != VAR_0)
            break;
        FUNC_3(VAR_5->dst, VAR_2, "EOF on sink link %s:%s.\n",
               VAR_5->dst ? VAR_5->dst->name : "unknown",
               VAR_5->dstpad ? VAR_5->dstpad->name : "unknown");

        if (VAR_5->age_index < --VAR_4->sink_links_count)
            FUNC_6(VAR_4, VAR_4->sink_links[VAR_4->sink_links_count],
                             VAR_5->age_index);
        VAR_5->age_index = -1;
    }
    if (!VAR_4->sink_links_count)
        return VAR_0;
    FUNC_1(!VAR_5->dst->filter->activate);
    FUNC_1(VAR_5->age_index >= 0);
    VAR_6 = VAR_5->frame_count_out;
    while (VAR_6 == VAR_5->frame_count_out) {
        VAR_7 = FUNC_4(VAR_4);
        if (VAR_7 == FUNC_0(VAR_3) &&
            !VAR_5->frame_wanted_out && !VAR_5->frame_blocked_in &&
            !VAR_5->status_in)
            FUNC_5(VAR_5);
        else if (VAR_7 < 0)
            return VAR_7;
    }
    return 0;
}
