
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int (* diff_bytes ) (int*,int*,int*,int) ;} ;
struct TYPE_6__ {TYPE_1__ llvidencdsp; } ;
typedef TYPE_2__ PNGEncContext ;







 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int*,int*,int) ;
 int FUNC_2 (TYPE_2__*,int*,int*,int,int) ;
 int FUNC_3 (int*,int*,int*,int,int) ;

__attribute__((used)) static void FUNC_4(PNGEncContext *VAR_0, uint8_t *VAR_1, int VAR_2,
                           uint8_t *VAR_3, uint8_t *VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7;

    switch (VAR_2) {
    case 131:
        FUNC_0(VAR_1, VAR_3, VAR_5);
        break;
    case 129:
        FUNC_2(VAR_0, VAR_1, VAR_3, VAR_6, VAR_5);
        break;
    case 128:
        VAR_0->llvidencdsp.diff_bytes(VAR_1, VAR_3, VAR_4, VAR_5);
        break;
    case 132:
        for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
            VAR_1[VAR_7] = VAR_3[VAR_7] - (VAR_4[VAR_7] >> 1);
        for (; VAR_7 < VAR_5; VAR_7++)
            VAR_1[VAR_7] = VAR_3[VAR_7] - ((VAR_3[VAR_7 - VAR_6] + VAR_4[VAR_7]) >> 1);
        break;
    case 130:
        for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
            VAR_1[VAR_7] = VAR_3[VAR_7] - VAR_4[VAR_7];
        FUNC_3(VAR_1 + VAR_7, VAR_3 + VAR_7, VAR_4 + VAR_7, VAR_5 - VAR_7, VAR_6);
        break;
    }
}
