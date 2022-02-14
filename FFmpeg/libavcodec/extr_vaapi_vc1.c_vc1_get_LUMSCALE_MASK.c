
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pict_type; } ;
struct TYPE_5__ {scalar_t__ fcm; scalar_t__ mv_mode; int lumscale; int intcompfield; int lumscale2; scalar_t__ intcomp; int p_frame_skipped; TYPE_1__ s; } ;
typedef TYPE_2__ VC1Context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static inline int FUNC_0(const VC1Context *VAR_5)
{
    if (VAR_5->s.pict_type == VAR_0 && !VAR_5->p_frame_skipped) {
        if ((VAR_5->fcm == VAR_4 && VAR_5->mv_mode == VAR_3) ||
            (VAR_5->fcm == VAR_2 && VAR_5->intcomp))
            return VAR_5->lumscale;
        else if (VAR_5->fcm == VAR_1 && VAR_5->mv_mode == VAR_3)
            switch (VAR_5->intcompfield) {
            case 1: return VAR_5->lumscale;
            case 2: return VAR_5->lumscale2;
            case 3: return VAR_5->lumscale;
        }
    }
    return 0;
}
