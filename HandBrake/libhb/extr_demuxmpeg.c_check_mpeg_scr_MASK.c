
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int last_scr; scalar_t__ last_pts; int scr_changes; } ;
typedef TYPE_1__ hb_psdemux_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0( hb_psdemux_t *VAR_1, int64_t VAR_2, int VAR_3 )
{
    int VAR_4 = 0;
    int64_t VAR_5 = VAR_2 - VAR_1->last_scr;
    if (VAR_1->last_scr == VAR_0 ||
        VAR_5 > 90*VAR_3 || VAR_5 < -90*10)
    {
        ++VAR_1->scr_changes;
        VAR_1->last_pts = VAR_0;
        VAR_4 = 1;
    }
    VAR_1->last_scr = VAR_2;
    return VAR_4;
}
