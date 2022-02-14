
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef double int32_t ;
typedef double int16_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_4__ {double noise_scale; int method; } ;
struct TYPE_5__ {TYPE_1__ dither; } ;
typedef TYPE_2__ SwrContext ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 double VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (double*) ;
 double* FUNC_3 (int,int) ;
 double FUNC_4 (int) ;

int FUNC_5(SwrContext *VAR_4, void *VAR_5, int VAR_6, unsigned VAR_7, enum AVSampleFormat VAR_8) {
    double VAR_9 = VAR_4->dither.noise_scale;

    double *VAR_10 = FUNC_3(VAR_6 + 2, sizeof(double));
    int VAR_11;

    if (!VAR_10)
        return FUNC_0(VAR_0);

    for(VAR_11=0; VAR_11<VAR_6 + 2; VAR_11++){
        double VAR_12;
        VAR_7 = VAR_7* 1664525 + 1013904223;

        switch(VAR_4->dither.method){
            case 129: VAR_12= ((double)VAR_7) / VAR_3 - 0.5; break;
            default:
                FUNC_1(VAR_4->dither.method < VAR_1);
                VAR_12 = ((double)VAR_7) / VAR_3;
                VAR_7 = VAR_7*1664525 + 1013904223;
                VAR_12-= ((double)VAR_7) / VAR_3;
                break;
        }
        VAR_10[VAR_11] = VAR_12;
    }

    for(VAR_11=0; VAR_11<VAR_6; VAR_11++){
        double VAR_13;

        switch(VAR_4->dither.method){
            default:
                FUNC_1(VAR_4->dither.method < VAR_1);
                VAR_13 = VAR_10[VAR_11];
                break;
            case 128 :
                VAR_13 = (- VAR_10[VAR_11] + 2*VAR_10[VAR_11+1] - VAR_10[VAR_11+2]) / FUNC_4(6);
                break;
        }

        VAR_13*= VAR_9;

        switch(VAR_8){
            case 131: ((int16_t*)VAR_5)[VAR_11] = VAR_13; break;
            case 130: ((int32_t*)VAR_5)[VAR_11] = VAR_13; break;
            case 132: ((float *)VAR_5)[VAR_11] = VAR_13; break;
            case 133: ((double *)VAR_5)[VAR_11] = VAR_13; break;
            default: FUNC_1(0);
        }
    }

    FUNC_2(VAR_10);
    return 0;
}
