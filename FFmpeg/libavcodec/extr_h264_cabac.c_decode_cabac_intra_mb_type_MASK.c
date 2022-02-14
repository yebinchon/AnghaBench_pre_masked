
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* left_type; int top_type; int cabac; int * cabac_state; } ;
typedef TYPE_1__ H264SliceContext ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(H264SliceContext *VAR_3,
                                      int VAR_4, int VAR_5)
{
    uint8_t *VAR_6= &VAR_3->cabac_state[VAR_4];
    int VAR_7;

    if(VAR_5){
        int VAR_8=0;
        if (VAR_3->left_type[VAR_0] & (VAR_1|VAR_2))
            VAR_8++;
        if (VAR_3->top_type & (VAR_1|VAR_2))
            VAR_8++;
        if( FUNC_0( &VAR_3->cabac, &VAR_6[VAR_8] ) == 0 )
            return 0;
        VAR_6 += 2;
    }else{
        if( FUNC_0( &VAR_3->cabac, VAR_6 ) == 0 )
            return 0;
    }

    if( FUNC_1( &VAR_3->cabac ) )
        return 25;

    VAR_7 = 1;
    VAR_7 += 12 * FUNC_0( &VAR_3->cabac, &VAR_6[1] );
    if( FUNC_0( &VAR_3->cabac, &VAR_6[2] ) )
        VAR_7 += 4 + 4 * FUNC_0( &VAR_3->cabac, &VAR_6[2+VAR_5] );
    VAR_7 += 2 * FUNC_0( &VAR_3->cabac, &VAR_6[3+VAR_5] );
    VAR_7 += 1 * FUNC_0( &VAR_3->cabac, &VAR_6[3+2*VAR_5] );
    return VAR_7;
}
