
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int mb_intra; int** dct_error_sum; scalar_t__** dct_offset; int * dct_count; } ;
typedef TYPE_1__ MpegEncContext ;



__attribute__((used)) static void FUNC_0(MpegEncContext *VAR_0, int16_t *VAR_1){
    const int VAR_2= VAR_0->mb_intra;
    int VAR_3;

    VAR_0->dct_count[VAR_2]++;

    for(VAR_3=0; VAR_3<64; VAR_3++){
        int VAR_4= VAR_1[VAR_3];

        if(VAR_4){
            if(VAR_4>0){
                VAR_0->dct_error_sum[VAR_2][VAR_3] += VAR_4;
                VAR_4 -= VAR_0->dct_offset[VAR_2][VAR_3];
                if(VAR_4<0) VAR_4=0;
            }else{
                VAR_0->dct_error_sum[VAR_2][VAR_3] -= VAR_4;
                VAR_4 += VAR_0->dct_offset[VAR_2][VAR_3];
                if(VAR_4>0) VAR_4=0;
            }
            VAR_1[VAR_3]= VAR_4;
        }
    }
}
