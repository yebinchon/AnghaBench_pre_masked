
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pict_type; } ;
struct TYPE_5__ {scalar_t__ fcm; scalar_t__ mv_mode; int mv_mode2; int p_frame_skipped; TYPE_1__ s; } ;
typedef TYPE_2__ VC1Context ;
typedef int VAMvModeVC1 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline VAMvModeVC1 FUNC_1(const VC1Context *VAR_4)
{
    if ((VAR_4->fcm == VAR_3 || VAR_4->fcm == VAR_1) &&
        (VAR_4->s.pict_type == VAR_0 && !VAR_4->p_frame_skipped) &&
        VAR_4->mv_mode == VAR_2)
        return FUNC_0(VAR_4->mv_mode2);
    return 0;
}
