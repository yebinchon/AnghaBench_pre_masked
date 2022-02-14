
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** ref_cache; scalar_t__ slice_type_nos; int* direct_cache; int * cabac_state; int cabac; } ;
typedef TYPE_1__ H264SliceContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_1(H264SliceContext *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6 = VAR_3->ref_cache[VAR_4][VAR_2[VAR_5] - 1];
    int VAR_7 = VAR_3->ref_cache[VAR_4][VAR_2[VAR_5] - 8];
    int VAR_8 = 0;
    int VAR_9 = 0;

    if (VAR_3->slice_type_nos == VAR_0) {
        if( VAR_6 > 0 && !(VAR_3->direct_cache[VAR_2[VAR_5] - 1]&(VAR_1>>1)) )
            VAR_9++;
        if( VAR_7 > 0 && !(VAR_3->direct_cache[VAR_2[VAR_5] - 8]&(VAR_1>>1)) )
            VAR_9 += 2;
    } else {
        if( VAR_6 > 0 )
            VAR_9++;
        if( VAR_7 > 0 )
            VAR_9 += 2;
    }

    while( FUNC_0( &VAR_3->cabac, &VAR_3->cabac_state[54+VAR_9] ) ) {
        VAR_8++;
        VAR_9 = (VAR_9>>2)+4;
        if(VAR_8 >= 32 ){
            return -1;
        }
    }
    return VAR_8;
}
