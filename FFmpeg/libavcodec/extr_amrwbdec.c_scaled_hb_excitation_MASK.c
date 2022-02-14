
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef float uint16_t ;
struct TYPE_4__ {float (* dot_productf ) (float const*,float const*,int ) ;} ;
struct TYPE_5__ {int prng; TYPE_1__ celpm_ctx; } ;
typedef TYPE_2__ AMRWBContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (float*,float*,float,int) ;
 float FUNC_2 (float const*,float const*,int ) ;

__attribute__((used)) static void FUNC_3(AMRWBContext *VAR_2, float *VAR_3,
                                 const float *VAR_4, float VAR_5)
{
    int VAR_6;
    float VAR_7 = VAR_2->celpm_ctx.dot_productf(VAR_4, VAR_4,
                                                VAR_0);


    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
        VAR_3[VAR_6] = 32768.0 - (uint16_t) FUNC_0(&VAR_2->prng);

    FUNC_1(VAR_3, VAR_3,
                                            VAR_7 * VAR_5 * VAR_5,
                                            VAR_1);
}
