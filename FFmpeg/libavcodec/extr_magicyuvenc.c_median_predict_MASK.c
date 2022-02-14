
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t ptrdiff_t ;
struct TYPE_4__ {int (* sub_median_pred ) (int*,int*,int*,int,int*,int*) ;} ;
struct TYPE_5__ {TYPE_1__ llvidencdsp; } ;
typedef TYPE_2__ MagicYUVContext ;


 int FUNC_0 (int*,int*,int*,int,int*,int*) ;

__attribute__((used)) static void FUNC_1(MagicYUVContext *VAR_0,
                           uint8_t *VAR_1, uint8_t *VAR_2, ptrdiff_t VAR_3,
                           int VAR_4, int VAR_5)
{
    int VAR_6 = 0, VAR_7;
    int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        VAR_2[VAR_8] = VAR_1[VAR_8] - VAR_6;
        VAR_6 = VAR_1[VAR_8];
    }
    VAR_2 += VAR_4;
    VAR_1 += VAR_3;
    for (VAR_9 = 1; VAR_9 < VAR_5; VAR_9++) {
        VAR_6 = VAR_7 = VAR_1[-VAR_3];
        VAR_0->llvidencdsp.sub_median_pred(VAR_2, VAR_1 - VAR_3, VAR_1, VAR_4, &VAR_6, &VAR_7);
        VAR_2 += VAR_4;
        VAR_1 += VAR_3;
    }
}
