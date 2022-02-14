
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int const bytestream_end; int const bytestream; } ;
struct TYPE_10__ {int* run_buffer; TYPE_4__ c; int avctx; } ;
struct TYPE_9__ {int width; int height; int ** state; TYPE_1__* parent; } ;
struct TYPE_8__ {int width; int height; } ;
typedef TYPE_2__ SubBand ;
typedef TYPE_3__ SnowContext ;
typedef int IDWTELEM ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int) ;
 int* VAR_2 ;
 int FUNC_5 (TYPE_4__*,int *,int) ;
 int FUNC_6 (TYPE_4__*,int *,int,int) ;

__attribute__((used)) static int FUNC_7(SnowContext *VAR_3, SubBand *VAR_4, const IDWTELEM *VAR_5, const IDWTELEM *VAR_6, int VAR_7, int VAR_8){
    const int VAR_9= VAR_4->width;
    const int VAR_10= VAR_4->height;
    int VAR_11, VAR_12;

    if(1){
        int VAR_13=0;
        int *VAR_14 = VAR_3->run_buffer;
        int VAR_15=0;
        int VAR_16;

        for(VAR_12=0; VAR_12<VAR_10; VAR_12++){
            for(VAR_11=0; VAR_11<VAR_9; VAR_11++){
                int VAR_17, VAR_18=0;
                int VAR_19=0, VAR_20=0, VAR_21=0, VAR_22=0;
                VAR_17= VAR_5[VAR_11 + VAR_12*VAR_7];

                if(VAR_12){
                    VAR_21= VAR_5[VAR_11 + (VAR_12-1)*VAR_7];
                    if(VAR_11){
                        VAR_20= VAR_5[VAR_11 - 1 + (VAR_12-1)*VAR_7];
                    }
                    if(VAR_11 + 1 < VAR_9){
                        VAR_22= VAR_5[VAR_11 + 1 + (VAR_12-1)*VAR_7];
                    }
                }
                if(VAR_11){
                    VAR_19= VAR_5[VAR_11 - 1 + VAR_12*VAR_7];




                }
                if(VAR_6){
                    int VAR_23= VAR_11>>1;
                    int VAR_24= VAR_12>>1;
                    if(VAR_23<VAR_4->parent->width && VAR_24<VAR_4->parent->height)
                        VAR_18= VAR_6[VAR_23 + VAR_24*2*VAR_7];
                }
                if(!( VAR_19|VAR_20|VAR_21|VAR_22|VAR_18)){
                    if(VAR_17){
                        VAR_14[VAR_15++]= VAR_13;
                        VAR_13=0;
                    }else{
                        VAR_13++;
                    }
                }
            }
        }
        VAR_16= VAR_15;
        VAR_14[VAR_15++]= VAR_13;
        VAR_15=0;
        VAR_13= VAR_14[VAR_15++];

        FUNC_6(&VAR_3->c, VAR_4->state[30], VAR_16, 0);
        if(VAR_15 <= VAR_16)
            FUNC_6(&VAR_3->c, VAR_4->state[1], VAR_13, 3);

        for(VAR_12=0; VAR_12<VAR_10; VAR_12++){
            if(VAR_3->c.bytestream_end - VAR_3->c.bytestream < VAR_9*40){
                FUNC_3(VAR_3->avctx, VAR_0, "encoded frame too large\n");
                return FUNC_0(VAR_1);
            }
            for(VAR_11=0; VAR_11<VAR_9; VAR_11++){
                int VAR_25, VAR_26=0;
                int VAR_27=0, VAR_28=0, VAR_29=0, VAR_30=0;
                VAR_25= VAR_5[VAR_11 + VAR_12*VAR_7];

                if(VAR_12){
                    VAR_29= VAR_5[VAR_11 + (VAR_12-1)*VAR_7];
                    if(VAR_11){
                        VAR_28= VAR_5[VAR_11 - 1 + (VAR_12-1)*VAR_7];
                    }
                    if(VAR_11 + 1 < VAR_9){
                        VAR_30= VAR_5[VAR_11 + 1 + (VAR_12-1)*VAR_7];
                    }
                }
                if(VAR_11){
                    VAR_27= VAR_5[VAR_11 - 1 + VAR_12*VAR_7];




                }
                if(VAR_6){
                    int VAR_31= VAR_11>>1;
                    int VAR_32= VAR_12>>1;
                    if(VAR_31<VAR_4->parent->width && VAR_32<VAR_4->parent->height)
                        VAR_26= VAR_6[VAR_31 + VAR_32*2*VAR_7];
                }
                if( VAR_27|VAR_28|VAR_29|VAR_30|VAR_26){
                    int VAR_33= FUNC_4( 3*FUNC_1(VAR_27) + FUNC_1(VAR_28) + 2*FUNC_1(VAR_29) + FUNC_1(VAR_30) + FUNC_1(VAR_26));

                    FUNC_5(&VAR_3->c, &VAR_4->state[0][VAR_33], !!VAR_25);
                }else{
                    if(!VAR_13){
                        VAR_13= VAR_14[VAR_15++];

                        if(VAR_15 <= VAR_16)
                            FUNC_6(&VAR_3->c, VAR_4->state[1], VAR_13, 3);
                        FUNC_2(VAR_25);
                    }else{
                        VAR_13--;
                        FUNC_2(!VAR_25);
                    }
                }
                if(VAR_25){
                    int VAR_34= FUNC_4( 3*FUNC_1(VAR_27) + FUNC_1(VAR_28) + 2*FUNC_1(VAR_29) + FUNC_1(VAR_30) + FUNC_1(VAR_26));
                    int VAR_35= 2*FUNC_1(VAR_27) + (VAR_27<0);
                    int VAR_36= 2*FUNC_1(VAR_29) + (VAR_29<0);

                    FUNC_6(&VAR_3->c, VAR_4->state[VAR_34 + 2], FUNC_1(VAR_25)-1, VAR_34-4);
                    FUNC_5(&VAR_3->c, &VAR_4->state[0][16 + 1 + 3 + VAR_2[VAR_35&0xFF] + 3*VAR_2[VAR_36&0xFF]], VAR_25<0);
                }
            }
        }
    }
    return 0;
}
