
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct process_range {int range_id; int mask; int get_scale; } ;
struct TYPE_4__ {float** cmyk_adjust; scalar_t__ is_16bit; int nb_process_ranges; struct process_range* process_ranges; } ;
typedef TYPE_1__ SelectiveColorContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int ,float const,float const,float const,float const) ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_3(SelectiveColorContext *VAR_20, int VAR_21)
{
    const float *VAR_22 = VAR_20->cmyk_adjust[VAR_21];



    if (VAR_22[0] || VAR_22[1] || VAR_22[2] || VAR_22[3]) {
        struct process_range *VAR_23 = &VAR_20->process_ranges[VAR_20->nb_process_ranges++];

        if (VAR_22[0] < -1.0 || VAR_22[0] > 1.0 ||
            VAR_22[1] < -1.0 || VAR_22[1] > 1.0 ||
            VAR_22[2] < -1.0 || VAR_22[2] > 1.0 ||
            VAR_22[3] < -1.0 || VAR_22[3] > 1.0) {
            FUNC_2(VAR_20, VAR_0, "Invalid %s adjustments (%g %g %g %g). "
                   "Settings must be set in [-1;1] range\n",
                   VAR_11[VAR_21], VAR_22[0], VAR_22[1], VAR_22[2], VAR_22[3]);
            return FUNC_0(VAR_1);
        }

        VAR_23->range_id = VAR_21;
        VAR_23->mask = 1 << VAR_21;
        if (VAR_23->mask & (1<<VAR_8 | 1<<VAR_5 | 1<<VAR_3)) VAR_23->get_scale = VAR_17;
        else if (VAR_23->mask & (1<<VAR_4 | 1<<VAR_6 | 1<<VAR_10)) VAR_23->get_scale = VAR_14;
        else if (!VAR_20->is_16bit && (VAR_23->mask & 1<<VAR_9)) VAR_23->get_scale = VAR_19;
        else if (!VAR_20->is_16bit && (VAR_23->mask & 1<<VAR_7)) VAR_23->get_scale = VAR_16;
        else if (!VAR_20->is_16bit && (VAR_23->mask & 1<<VAR_2)) VAR_23->get_scale = VAR_13;
        else if ( VAR_20->is_16bit && (VAR_23->mask & 1<<VAR_9)) VAR_23->get_scale = VAR_18;
        else if ( VAR_20->is_16bit && (VAR_23->mask & 1<<VAR_7)) VAR_23->get_scale = VAR_15;
        else if ( VAR_20->is_16bit && (VAR_23->mask & 1<<VAR_2)) VAR_23->get_scale = VAR_12;
        else
            FUNC_1(0);
    }
    return 0;
}
