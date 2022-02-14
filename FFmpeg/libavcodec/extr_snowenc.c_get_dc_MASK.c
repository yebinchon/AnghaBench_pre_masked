
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {scalar_t__* color; int type; } ;
struct TYPE_15__ {int width; int height; } ;
struct TYPE_12__ {scalar_t__ obmc_scratchpad; } ;
struct TYPE_13__ {TYPE_3__ sc; } ;
struct TYPE_14__ {int block_max_depth; int const chroma_h_shift; int const chroma_v_shift; int b_width; TYPE_7__* block; TYPE_4__ m; TYPE_2__* input_picture; TYPE_1__* current_picture; TYPE_6__* plane; } ;
struct TYPE_11__ {int** data; } ;
struct TYPE_10__ {int* linesize; } ;
typedef TYPE_5__ SnowContext ;
typedef TYPE_6__ Plane ;
typedef int IDWTELEM ;
typedef TYPE_7__ BlockNode ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int const,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_5__*,int ,int *,int*,int *,int const*,int,int,int const,int const,int const,int const,int const,int const,int const,int,int,int ,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int** VAR_4 ;
 int FUNC_6 (int*,int ,int const) ;

__attribute__((used)) static int FUNC_7(SnowContext *VAR_5, int VAR_6, int VAR_7, int VAR_8){
    int VAR_9, VAR_10, VAR_11;
    Plane *VAR_12= &VAR_5->plane[VAR_8];
    const int VAR_13 = VAR_3 >> VAR_5->block_max_depth;
    const int VAR_14 = VAR_8 ? VAR_13>>VAR_5->chroma_h_shift : VAR_13;
    const int VAR_15 = VAR_8 ? VAR_13>>VAR_5->chroma_v_shift : VAR_13;
    const uint8_t *VAR_16 = VAR_8 ? VAR_4[VAR_5->block_max_depth+VAR_5->chroma_h_shift] : VAR_4[VAR_5->block_max_depth];
    const int VAR_17= VAR_8 ? (2*VAR_13)>>VAR_5->chroma_h_shift : 2*VAR_13;
    const int VAR_18= VAR_5->current_picture->linesize[VAR_8];
    uint8_t *VAR_19= VAR_5-> input_picture->data[VAR_8];
    IDWTELEM *VAR_20= (IDWTELEM*)VAR_5->m.sc.obmc_scratchpad + VAR_8*VAR_13*VAR_13*4;
    const int VAR_21 = VAR_5->b_width << VAR_5->block_max_depth;
    const int VAR_22= VAR_12->width;
    const int VAR_23= VAR_12->height;
    int VAR_24= VAR_6 + VAR_7*VAR_21;
    BlockNode *VAR_25= &VAR_5->block[VAR_24];
    BlockNode VAR_26= *VAR_25;
    int VAR_27=0;
    int VAR_28=0;

    FUNC_4(VAR_5->chroma_h_shift == VAR_5->chroma_v_shift);

    VAR_25->type|= VAR_0;
    VAR_25->color[VAR_8]= 0;
    FUNC_6(VAR_20, 0, VAR_17*VAR_17*sizeof(IDWTELEM));

    for(VAR_9=0; VAR_9<4; VAR_9++){
        int VAR_29= VAR_6 + (VAR_9 &1) - 1;
        int VAR_30= VAR_7 + (VAR_9>>1) - 1;
        int VAR_31= VAR_14*VAR_29 + VAR_14/2;
        int VAR_32= VAR_15*VAR_30 + VAR_15/2;

        FUNC_3(VAR_5, 0, ((void*)0), VAR_20 + (VAR_9&1)*VAR_14 + (VAR_9>>1)*VAR_17*VAR_15, ((void*)0), VAR_16,
                    VAR_31, VAR_32, VAR_14, VAR_15, VAR_22, VAR_23, VAR_17, VAR_18, VAR_17, VAR_29, VAR_30, 0, 0, VAR_8);

        for(VAR_11= FUNC_0(VAR_32, 0); VAR_11<FUNC_1(VAR_23, VAR_32+VAR_15); VAR_11++){
            for(VAR_10= FUNC_0(VAR_31, 0); VAR_10<FUNC_1(VAR_22, VAR_31+VAR_14); VAR_10++){
                int VAR_33= VAR_10-(VAR_14*VAR_6 - VAR_14/2) + (VAR_11-(VAR_15*VAR_7 - VAR_15/2))*VAR_17;
                int VAR_34= VAR_16[VAR_33];
                int VAR_35;
                if(VAR_32<0) VAR_34 += VAR_16[VAR_33 + VAR_15*VAR_17];
                if(VAR_31<0) VAR_34 += VAR_16[VAR_33 + VAR_14];
                if(VAR_32+VAR_15>VAR_23) VAR_34 += VAR_16[VAR_33 - VAR_15*VAR_17];
                if(VAR_31+VAR_14>VAR_22) VAR_34 += VAR_16[VAR_33 - VAR_14];


                VAR_35 = -VAR_20[VAR_33] + (1<<(VAR_1-1));
                VAR_20[VAR_33] = VAR_35;
                VAR_27 += (VAR_19[VAR_10 + VAR_11*VAR_18] - (VAR_35>>VAR_1)) * VAR_34;
                VAR_28 += VAR_34 * VAR_34;
            }
        }
    }
    *VAR_25= VAR_26;

    return FUNC_5( FUNC_2(VAR_27<<VAR_2, VAR_28) );
}
