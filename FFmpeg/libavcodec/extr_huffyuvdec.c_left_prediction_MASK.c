
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int (* add_left_pred ) (int *,int const*,int,int) ;int (* add_left_pred_int16 ) (int *,int const*,scalar_t__,int,int) ;} ;
struct TYPE_5__ {int bps; scalar_t__ n; TYPE_1__ llviddsp; } ;
typedef TYPE_2__ HYuvContext ;


 int FUNC_0 (int *,int const*,int,int) ;
 int FUNC_1 (int *,int const*,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_2(HYuvContext *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2, int VAR_3, int VAR_4)
{
    if (VAR_0->bps <= 8) {
        return VAR_0->llviddsp.add_left_pred(VAR_1, VAR_2, VAR_3, VAR_4);
    } else {
        return VAR_0->llviddsp.add_left_pred_int16(( uint16_t *)VAR_1, (const uint16_t *)VAR_2, VAR_0->n-1, VAR_3, VAR_4);
    }
}
