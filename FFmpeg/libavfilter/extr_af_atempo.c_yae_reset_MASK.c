
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_7__ {int format; int channels; int stride; int window; float* correlation; int ring; float* buffer; float* hann; int * complex_to_real; int * real_to_complex; TYPE_1__* frag; } ;
struct TYPE_6__ {float* data; float* xdat; } ;
typedef int FFTComplex ;
typedef TYPE_2__ ATempoContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 int FUNC_1 (float*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int,int ) ;
 double FUNC_7 (double) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(ATempoContext *VAR_4,
                     enum AVSampleFormat VAR_5,
                     int VAR_6,
                     int VAR_7)
{
    const int VAR_8 = FUNC_3(VAR_5);
    uint32_t VAR_9 = 0;
    uint32_t VAR_10;
    int VAR_11;

    VAR_4->format = VAR_5;
    VAR_4->channels = VAR_7;
    VAR_4->stride = VAR_8 * VAR_7;


    VAR_4->window = VAR_6 / 24;


    VAR_9 = FUNC_4(VAR_4->window);
    VAR_10 = 1 << VAR_9;
    FUNC_2(VAR_10 <= VAR_4->window);

    if (VAR_10 < VAR_4->window) {
        VAR_4->window = VAR_10 * 2;
        VAR_9++;
    }


    FUNC_1(VAR_4->frag[0].data, VAR_4->window * VAR_4->stride);
    FUNC_1(VAR_4->frag[1].data, VAR_4->window * VAR_4->stride);
    FUNC_1(VAR_4->frag[0].xdat, VAR_4->window * sizeof(FFTComplex));
    FUNC_1(VAR_4->frag[1].xdat, VAR_4->window * sizeof(FFTComplex));


    FUNC_5(VAR_4->real_to_complex);
    VAR_4->real_to_complex = ((void*)0);

    FUNC_5(VAR_4->complex_to_real);
    VAR_4->complex_to_real = ((void*)0);

    VAR_4->real_to_complex = FUNC_6(VAR_9 + 1, VAR_0);
    if (!VAR_4->real_to_complex) {
        FUNC_9(VAR_4);
        return FUNC_0(VAR_1);
    }

    VAR_4->complex_to_real = FUNC_6(VAR_9 + 1, VAR_2);
    if (!VAR_4->complex_to_real) {
        FUNC_9(VAR_4);
        return FUNC_0(VAR_1);
    }

    FUNC_1(VAR_4->correlation, VAR_4->window * sizeof(FFTComplex));

    VAR_4->ring = VAR_4->window * 3;
    FUNC_1(VAR_4->buffer, VAR_4->ring * VAR_4->stride);


    FUNC_1(VAR_4->hann, VAR_4->window * sizeof(float));

    for (VAR_11 = 0; VAR_11 < VAR_4->window; VAR_11++) {
        double VAR_12 = (double)VAR_11 / (double)(VAR_4->window - 1);
        double VAR_13 = 0.5 * (1.0 - FUNC_7(2.0 * VAR_3 * VAR_12));
        VAR_4->hann[VAR_11] = (float)VAR_13;
    }

    FUNC_8(VAR_4);
    return 0;
}
