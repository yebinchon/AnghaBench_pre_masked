
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int slice_buffer ;
struct TYPE_8__ {int qbias; scalar_t__ spatial_idwt_buffer; int qlog; } ;
struct TYPE_7__ {int width; scalar_t__ ibuf; int stride_line; int buf_x_offset; TYPE_1__* x_coeff; scalar_t__ buf_y_offset; int qlog; } ;
struct TYPE_6__ {int coeff; int x; } ;
typedef TYPE_2__ SubBand ;
typedef TYPE_3__ SnowContext ;
typedef int IDWTELEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int const* VAR_5 ;
 int FUNC_1 (int*,int ,int) ;
 int* FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(SnowContext *VAR_6, SubBand *VAR_7, slice_buffer * VAR_8, int VAR_9, int VAR_10, int VAR_11[1]){
    const int VAR_12= VAR_7->width;
    int VAR_13;
    const int VAR_14= FUNC_0(VAR_6->qlog + VAR_7->qlog, 0, VAR_3*16);
    int VAR_15= VAR_5[VAR_14&(VAR_3-1)]<<(VAR_14>>VAR_4);
    int VAR_16= (VAR_6->qbias*VAR_15)>>VAR_1;
    int VAR_17 = 0;

    if(VAR_7->ibuf == VAR_6->spatial_idwt_buffer || VAR_6->qlog == VAR_0){
        VAR_16= 0;
        VAR_15= 1<<VAR_2;
    }


    if (VAR_9 != 0)
        VAR_17 = VAR_11[0];


    for(VAR_13=VAR_9; VAR_13<VAR_10; VAR_13++){
        int VAR_18 = 0;
        int VAR_19;
        IDWTELEM * VAR_20 = FUNC_2(VAR_8, VAR_13 * VAR_7->stride_line + VAR_7->buf_y_offset) + VAR_7->buf_x_offset;
        FUNC_1(VAR_20, 0, VAR_7->width*sizeof(IDWTELEM));
        VAR_19 = VAR_7->x_coeff[VAR_17].coeff;
        VAR_18 = VAR_7->x_coeff[VAR_17++].x;
        while(VAR_18 < VAR_12){
            register int VAR_21= (int)( (VAR_19>>1)*(unsigned)VAR_15 + VAR_16)>>VAR_2;
            register int VAR_22= -(VAR_19&1);
            VAR_20[VAR_18] = (VAR_21^VAR_22) - VAR_22;

            VAR_19 = VAR_7->x_coeff[VAR_17].coeff;
            VAR_18 = VAR_7->x_coeff[VAR_17++].x;
        }
    }


    VAR_11[0] = VAR_17;

    return;
}
