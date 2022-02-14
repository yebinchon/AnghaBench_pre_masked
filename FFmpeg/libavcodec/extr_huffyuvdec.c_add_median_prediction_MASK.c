
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {int (* add_hfyu_median_pred_int16 ) (int *,int const*,int const*,scalar_t__,int,int*,int*) ;} ;
struct TYPE_5__ {int (* add_median_pred ) (int *,int const*,int const*,int,int*,int*) ;} ;
struct TYPE_7__ {int bps; scalar_t__ n; TYPE_2__ hdsp; TYPE_1__ llviddsp; } ;
typedef TYPE_3__ HYuvContext ;


 int FUNC_0 (int *,int const*,int const*,int,int*,int*) ;
 int FUNC_1 (int *,int const*,int const*,scalar_t__,int,int*,int*) ;

__attribute__((used)) static void FUNC_2(HYuvContext *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2, const uint8_t *VAR_3, int VAR_4, int *VAR_5, int *VAR_6)
{
    if (VAR_0->bps <= 8) {
        VAR_0->llviddsp.add_median_pred(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    } else {
        VAR_0->hdsp.add_hfyu_median_pred_int16((uint16_t *)VAR_1, (const uint16_t *)VAR_2, (const uint16_t *)VAR_3, VAR_0->n-1, VAR_4, VAR_5, VAR_6);
    }
}
