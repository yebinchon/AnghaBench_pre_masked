
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int (* clear_block ) (int ) ;} ;
struct TYPE_5__ {int mpv_flags; scalar_t__ mv_type; int dquant; int lambda2; int* block_last_index; int * block; TYPE_1__ bdsp; scalar_t__* coded_score; } ;
typedef TYPE_2__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int const** VAR_4 ;
 int const* VAR_5 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(MpegEncContext * VAR_6,
                      int16_t VAR_7[6][64],
                      int VAR_8, int VAR_9){
    int VAR_10, VAR_11;

    if (VAR_6->mpv_flags & VAR_1) {
        int VAR_12= VAR_2;
        int VAR_13= VAR_2;
        int VAR_14 = (-1), VAR_15= (-1);
        const int VAR_16= (VAR_6->mv_type==VAR_3 ? 0 : 16) + (VAR_6->dquant ? 8 : 0);
        const int VAR_17= VAR_6->lambda2 >> (VAR_0 - 6);

        for(VAR_11=0; VAR_11<4; VAR_11++){
            int VAR_18= VAR_5[VAR_11 + VAR_16] * VAR_17;
            if(VAR_11&1) VAR_18 += VAR_6->coded_score[5];
            if(VAR_11&2) VAR_18 += VAR_6->coded_score[4];

            if(VAR_18 < VAR_13){
                VAR_13= VAR_18;
                VAR_14= VAR_11;
            }
        }

        for(VAR_11=0; VAR_11<16; VAR_11++){
            int VAR_19= VAR_4[VAR_11 ^ 0xF][1] * VAR_17;
            if(VAR_11&1) VAR_19 += VAR_6->coded_score[3];
            if(VAR_11&2) VAR_19 += VAR_6->coded_score[2];
            if(VAR_11&4) VAR_19 += VAR_6->coded_score[1];
            if(VAR_11&8) VAR_19 += VAR_6->coded_score[0];

            if(VAR_19 < VAR_12){
                VAR_12= VAR_19;
                VAR_15= VAR_11;
            }
        }
        VAR_10= VAR_14 + 4*VAR_15;
        if ((VAR_8 | VAR_9 | VAR_6->dquant) == 0 && VAR_6->mv_type==VAR_3){
            if(VAR_12 + VAR_13 + 2*VAR_17 >= 0)
                VAR_10= 0;
        }

        for (VAR_11 = 0; VAR_11 < 6; VAR_11++) {
            if (VAR_6->block_last_index[VAR_11] >= 0 && ((VAR_10 >> (5 - VAR_11))&1)==0 ){
                VAR_6->block_last_index[VAR_11]= -1;
                VAR_6->bdsp.clear_block(VAR_6->block[VAR_11]);
            }
        }
    }else{
        VAR_10= 0;
        for (VAR_11 = 0; VAR_11 < 6; VAR_11++) {
            if (VAR_6->block_last_index[VAR_11] >= 0)
                VAR_10 |= 1 << (5 - VAR_11);
        }
    }
    return VAR_10;
}
