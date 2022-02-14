
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int x; int coeff; } ;
typedef TYPE_5__ x_and_coeff ;
typedef int uint16_t ;
struct TYPE_17__ {int avctx; int c; } ;
struct TYPE_16__ {int width; int height; int ** state; TYPE_5__* x_coeff; } ;
struct TYPE_14__ {int coeff; } ;
struct TYPE_13__ {int x; } ;
struct TYPE_12__ {int x; } ;
struct TYPE_11__ {int coeff; } ;
typedef TYPE_6__ SubBand ;
typedef TYPE_7__ SnowContext ;


 int VAR_0 ;
 int FUNC_0 (int,int const) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int) ;
 int* VAR_2 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_6(SnowContext *VAR_3, SubBand *VAR_4, SubBand * VAR_5, int VAR_6){
    const int VAR_7= VAR_4->width;
    const int VAR_8= VAR_4->height;
    int VAR_9,VAR_10;

    int VAR_11, VAR_12;
    x_and_coeff *VAR_13= VAR_4->x_coeff;
    x_and_coeff *VAR_14= ((void*)0);
    x_and_coeff *VAR_15= VAR_13;
    x_and_coeff *VAR_16= VAR_5 ? VAR_5->x_coeff : ((void*)0);
    x_and_coeff *VAR_17= VAR_16;

    VAR_12= FUNC_5(&VAR_3->c, VAR_4->state[30], 0);
    if(VAR_12-- > 0) VAR_11= FUNC_5(&VAR_3->c, VAR_4->state[1], 3);
    else VAR_11= VAR_1;

    for(VAR_10=0; VAR_10<VAR_8; VAR_10++){
        int VAR_18=0;
        int VAR_19=0, VAR_20=0, VAR_21=0;

        if(VAR_10 && VAR_14->x == 0){
            VAR_21= VAR_14->coeff;
        }
        for(VAR_9=0; VAR_9<VAR_7; VAR_9++){
            int VAR_22=0;
            const int VAR_23= VAR_18;

            VAR_19= VAR_20; VAR_20= VAR_21;

            if(VAR_10){
                if(VAR_14->x <= VAR_9)
                    VAR_14++;
                if(VAR_14->x == VAR_9 + 1)
                    VAR_21= VAR_14->coeff;
                else
                    VAR_21=0;
            }
            if(VAR_16){
                if(VAR_9>>1 > VAR_16->x){
                    VAR_16++;
                }
                if(VAR_9>>1 == VAR_16->x){
                    VAR_22= VAR_16->coeff;
                }
            }
            if( VAR_23|VAR_19|VAR_20|VAR_21|VAR_22){
                int VAR_24= FUNC_3( 3*(VAR_23>>1) + (VAR_19>>1) + (VAR_20&~1) + (VAR_21>>1) + (VAR_22>>1));

                VAR_18=FUNC_4(&VAR_3->c, &VAR_4->state[0][VAR_24]);
                if(VAR_18){
                    VAR_18= 2*(FUNC_5(&VAR_3->c, VAR_4->state[VAR_24 + 2], VAR_24-4) + 1);
                    VAR_18+=FUNC_4(&VAR_3->c, &VAR_4->state[0][16 + 1 + 3 + VAR_2[VAR_23&0xFF] + 3*VAR_2[VAR_20&0xFF]]);
                    if ((uint16_t)VAR_18 != VAR_18) {
                        FUNC_2(VAR_3->avctx, VAR_0, "Coefficient damaged\n");
                        VAR_18 = 1;
                    }
                    VAR_13->x=VAR_9;
                    (VAR_13++)->coeff= VAR_18;
                }
            }else{
                if(!VAR_11){
                    if(VAR_12-- > 0) VAR_11= FUNC_5(&VAR_3->c, VAR_4->state[1], 3);
                    else VAR_11= VAR_1;
                    VAR_18= 2*(FUNC_5(&VAR_3->c, VAR_4->state[0 + 2], 0-4) + 1);
                    VAR_18+=FUNC_4(&VAR_3->c, &VAR_4->state[0][16 + 1 + 3]);
                    if ((uint16_t)VAR_18 != VAR_18) {
                        FUNC_2(VAR_3->avctx, VAR_0, "Coefficient damaged\n");
                        VAR_18 = 1;
                    }

                    VAR_13->x=VAR_9;
                    (VAR_13++)->coeff= VAR_18;
                }else{
                    int VAR_25;
                    VAR_11--;
                    VAR_18=0;
                    FUNC_1(VAR_11 >= 0);
                    if(VAR_10) VAR_25= FUNC_0(VAR_11, VAR_14->x - VAR_9 - 2);
                    else VAR_25= FUNC_0(VAR_11, VAR_7-VAR_9-1);
                    if(VAR_16)
                        VAR_25= FUNC_0(VAR_25, 2*VAR_16->x - VAR_9 - 1);
                    FUNC_1(VAR_25 >= 0 && VAR_25 <= VAR_11);

                    VAR_9+= VAR_25;
                    VAR_11-= VAR_25;
                }
            }
        }
        (VAR_13++)->x= VAR_7+1;
        VAR_14= VAR_15;
        VAR_15= VAR_13;

        if(VAR_16){
            if(VAR_10&1){
                while(VAR_16->x != VAR_5->width+1)
                    VAR_16++;
                VAR_16++;
                VAR_17= VAR_16;
            }else{
                VAR_16= VAR_17;
            }
        }
    }

    (VAR_13++)->x= VAR_7+1;
}
