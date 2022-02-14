
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ values; TYPE_1__* list; } ;
typedef TYPE_2__ vorbis_enc_floor ;
struct TYPE_4__ {size_t sort; int x; } ;


 size_t FUNC_0 (int,int ) ;
 size_t FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (float) ;

__attribute__((used)) static float FUNC_3(vorbis_enc_floor * VAR_0, float *VAR_1, int VAR_2)
{
    int VAR_3 = VAR_0->list[VAR_0->list[FUNC_0(VAR_2-1, 0)].sort].x;
    int VAR_4 = VAR_0->list[VAR_0->list[FUNC_1(VAR_2+1, VAR_0->values - 1)].sort].x;
    int VAR_5;
    float VAR_6 = 0;

    for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5++)
        VAR_6 += FUNC_2(VAR_1[VAR_5]);
    return VAR_6 / (VAR_4 - VAR_3);
}
