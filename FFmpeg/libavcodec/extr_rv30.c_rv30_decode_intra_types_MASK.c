
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_4__ {int avctx; } ;
struct TYPE_5__ {int intra_types_stride; TYPE_1__ s; } ;
typedef TYPE_2__ RV34DecContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int* VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_2(RV34DecContext *VAR_3, GetBitContext *VAR_4, int8_t *VAR_5)
{
    int VAR_6, VAR_7, VAR_8;

    for(VAR_6 = 0; VAR_6 < 4; VAR_6++, VAR_5 += VAR_3->intra_types_stride - 4){
        for(VAR_7 = 0; VAR_7 < 4; VAR_7+= 2){
            unsigned VAR_9 = FUNC_1(VAR_4) << 1;
            if (VAR_9 > 80U*2U) {
                FUNC_0(VAR_3->s.avctx, VAR_0, "Incorrect intra prediction code\n");
                return -1;
            }
            for(VAR_8 = 0; VAR_8 < 2; VAR_8++){
                int VAR_10 = VAR_5[-VAR_3->intra_types_stride] + 1;
                int VAR_11 = VAR_5[-1] + 1;
                *VAR_5++ = VAR_2[VAR_10 * 90 + VAR_11 * 9 + VAR_1[VAR_9 + VAR_8]];
                if(VAR_5[-1] == 9){
                    FUNC_0(VAR_3->s.avctx, VAR_0, "Incorrect intra prediction mode\n");
                    return -1;
                }
            }
        }
    }
    return 0;
}
