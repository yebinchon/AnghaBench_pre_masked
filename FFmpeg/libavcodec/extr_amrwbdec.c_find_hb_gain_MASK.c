
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;
struct TYPE_4__ {float (* dot_productf ) (float const*,float const*,scalar_t__) ;} ;
struct TYPE_5__ {scalar_t__ fr_cur_mode; TYPE_1__ celpm_ctx; } ;
typedef TYPE_2__ AMRWBContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 float FUNC_0 (double,double,double) ;
 float* VAR_2 ;
 float FUNC_1 (float const*,float const*,scalar_t__) ;
 float FUNC_2 (float const*,float const*,scalar_t__) ;

__attribute__((used)) static float FUNC_3(AMRWBContext *VAR_3, const float *VAR_4,
                          uint16_t VAR_5, uint8_t VAR_6)
{
    int VAR_7 = (VAR_6 > 0);
    float VAR_8;
    float VAR_9;

    if (VAR_3->fr_cur_mode == VAR_1)
        return VAR_2[VAR_5] * (1.0f / (1 << 14));

    VAR_9 = VAR_3->celpm_ctx.dot_productf(VAR_4, VAR_4 + 1, VAR_0 - 1);

    if (VAR_9 > 0) {
        VAR_8 = VAR_9 / VAR_3->celpm_ctx.dot_productf(VAR_4, VAR_4, VAR_0);
    } else
        VAR_8 = 0;


    return FUNC_0((1.0 - VAR_8) * (1.25 - 0.25 * VAR_7), 0.1, 1.0);
}
