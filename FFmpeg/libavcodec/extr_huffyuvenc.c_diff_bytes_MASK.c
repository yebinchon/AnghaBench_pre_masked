
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {int (* diff_int16 ) (int *,int const*,int const*,scalar_t__,int) ;} ;
struct TYPE_5__ {int (* diff_bytes ) (int *,int const*,int const*,int) ;} ;
struct TYPE_7__ {int bps; scalar_t__ n; TYPE_2__ hencdsp; TYPE_1__ llvidencdsp; } ;
typedef TYPE_3__ HYuvContext ;


 int FUNC_0 (int *,int const*,int const*,int) ;
 int FUNC_1 (int *,int const*,int const*,scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_2(HYuvContext *VAR_0, uint8_t *VAR_1,
                              const uint8_t *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    if (VAR_0->bps <= 8) {
        VAR_0->llvidencdsp.diff_bytes(VAR_1, VAR_2, VAR_3, VAR_4);
    } else {
        VAR_0->hencdsp.diff_int16((uint16_t *)VAR_1, (const uint16_t *)VAR_2, (const uint16_t *)VAR_3, VAR_0->n - 1, VAR_4);
    }
}
