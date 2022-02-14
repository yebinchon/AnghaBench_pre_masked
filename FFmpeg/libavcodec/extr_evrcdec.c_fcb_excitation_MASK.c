
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ bitrate; } ;
typedef TYPE_1__ EVRCContext ;


 scalar_t__ VAR_0 ;
 float FUNC_0 (float,double,double) ;
 int FUNC_1 (int const,float*) ;
 int FUNC_2 (int const*,float*) ;

__attribute__((used)) static void FUNC_3(EVRCContext *VAR_1, const uint16_t *VAR_2,
                           float *VAR_3, float VAR_4,
                           int VAR_5, int VAR_6)
{
    int VAR_7;

    if (VAR_1->bitrate == VAR_0)
        FUNC_2(VAR_2, VAR_3);
    else
        FUNC_1(*VAR_2, VAR_3);

    VAR_4 = FUNC_0(VAR_4, 0.2, 0.9);

    for (VAR_7 = VAR_5; VAR_7 < VAR_6; VAR_7++)
        VAR_3[VAR_7] += VAR_4 * VAR_3[VAR_7 - VAR_5];
}
