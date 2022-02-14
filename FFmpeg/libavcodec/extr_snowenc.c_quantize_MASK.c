
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int qlog; } ;
struct TYPE_5__ {int width; int height; int qlog; } ;
typedef TYPE_1__ SubBand ;
typedef TYPE_2__ SnowContext ;
typedef int IDWTELEM ;
typedef void* DWTELEM ;


 int const VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int const* VAR_5 ;

__attribute__((used)) static void FUNC_1(SnowContext *VAR_6, SubBand *VAR_7, IDWTELEM *VAR_8, DWTELEM *VAR_9, int VAR_10, int VAR_11){
    const int VAR_12= VAR_7->width;
    const int VAR_13= VAR_7->height;
    const int VAR_14= FUNC_0(VAR_6->qlog + VAR_7->qlog, 0, VAR_3*16);
    const int VAR_15= VAR_5[VAR_14&(VAR_3-1)]<<((VAR_14>>VAR_4) + VAR_0);
    int VAR_16,VAR_17, VAR_18, VAR_19;

    if(VAR_6->qlog == VAR_1){
        for(VAR_17=0; VAR_17<VAR_13; VAR_17++)
            for(VAR_16=0; VAR_16<VAR_12; VAR_16++)
                VAR_8[VAR_16 + VAR_17*VAR_10]= VAR_9[VAR_16 + VAR_17*VAR_10];
        return;
    }

    VAR_11= VAR_11 ? 0 : (3*VAR_15)>>3;
    VAR_18= ((VAR_15 - VAR_11)>>VAR_2) - 1;
    VAR_19= 2*VAR_18;

    if(!VAR_11){
        for(VAR_17=0; VAR_17<VAR_13; VAR_17++){
            for(VAR_16=0; VAR_16<VAR_12; VAR_16++){
                int VAR_20= VAR_9[VAR_16 + VAR_17*VAR_10];

                if((unsigned)(VAR_20+VAR_18) > VAR_19){
                    if(VAR_20>=0){
                        VAR_20<<= VAR_2;
                        VAR_20/= VAR_15;
                        VAR_8[VAR_16 + VAR_17*VAR_10]= VAR_20;
                    }else{
                        VAR_20= -VAR_20;
                        VAR_20<<= VAR_2;
                        VAR_20/= VAR_15;
                        VAR_8[VAR_16 + VAR_17*VAR_10]= -VAR_20;
                    }
                }else
                    VAR_8[VAR_16 + VAR_17*VAR_10]= 0;
            }
        }
    }else{
        for(VAR_17=0; VAR_17<VAR_13; VAR_17++){
            for(VAR_16=0; VAR_16<VAR_12; VAR_16++){
                int VAR_21= VAR_9[VAR_16 + VAR_17*VAR_10];

                if((unsigned)(VAR_21+VAR_18) > VAR_19){
                    if(VAR_21>=0){
                        VAR_21<<= VAR_2;
                        VAR_21= (VAR_21 + VAR_11) / VAR_15;
                        VAR_8[VAR_16 + VAR_17*VAR_10]= VAR_21;
                    }else{
                        VAR_21= -VAR_21;
                        VAR_21<<= VAR_2;
                        VAR_21= (VAR_21 + VAR_11) / VAR_15;
                        VAR_8[VAR_16 + VAR_17*VAR_10]= -VAR_21;
                    }
                }else
                    VAR_8[VAR_16 + VAR_17*VAR_10]= 0;
            }
        }
    }
}
