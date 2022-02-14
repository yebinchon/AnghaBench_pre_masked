
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pict_type; } ;
struct TYPE_5__ {scalar_t__ fcm; int bi_type; TYPE_1__ s; scalar_t__ dmb_is_raw; } ;
typedef TYPE_2__ VC1Context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline int FUNC_0(const VC1Context *VAR_3)
{
    if (VAR_3->dmb_is_raw)
        return 0;
    return (VAR_3->fcm == VAR_2 || VAR_3->fcm == VAR_1) &&
           (VAR_3->s.pict_type == VAR_0 && !VAR_3->bi_type);
}
