
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cabac; TYPE_1__* h264; int * cabac_state; } ;
struct TYPE_4__ {int avctx; } ;
typedef TYPE_2__ H264SliceContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(H264SliceContext *VAR_3, int VAR_4, int VAR_5, int *VAR_6)
{
    int VAR_7;

    if(!FUNC_1(&VAR_3->cabac, &VAR_3->cabac_state[VAR_4+((VAR_5-3)>>(VAR_1-1))+((VAR_5-33)>>(VAR_1-1))+2])){

        *VAR_6= 0;
        return 0;
    }

    VAR_7= 1;
    VAR_4+= 3;
    while( VAR_7 < 9 && FUNC_1( &VAR_3->cabac, &VAR_3->cabac_state[VAR_4] ) ) {
        if( VAR_7 < 4 )
            VAR_4++;
        VAR_7++;
    }

    if( VAR_7 >= 9 ) {
        int VAR_8 = 3;
        while( FUNC_2( &VAR_3->cabac ) ) {
            VAR_7 += 1 << VAR_8;
            VAR_8++;
            if(VAR_8>24){
                FUNC_0(VAR_3->h264->avctx, VAR_0, "overflow in decode_cabac_mb_mvd\n");
                return VAR_2;
            }
        }
        while( VAR_8-- ) {
            VAR_7 += FUNC_2( &VAR_3->cabac )<<VAR_8;
        }
        *VAR_6=VAR_7 < 70 ? VAR_7 : 70;
    }else
        *VAR_6=VAR_7;
    return FUNC_3( &VAR_3->cabac, -VAR_7 );
}
