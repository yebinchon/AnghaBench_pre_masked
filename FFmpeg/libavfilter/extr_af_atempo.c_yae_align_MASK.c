
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ xdat; } ;
typedef int RDFTContext ;
typedef int FFTSample ;
typedef int FFTComplex ;
typedef TYPE_1__ AudioFragment ;


 int FUNC_0 (int const,int ) ;
 int FUNC_1 (int const,int const) ;
 int VAR_0 ;
 int FUNC_2 (int*,int *,int const*,int const*,int const) ;

__attribute__((used)) static int FUNC_3(AudioFragment *VAR_1,
                     const AudioFragment *VAR_2,
                     const int VAR_3,
                     const int VAR_4,
                     const int VAR_5,
                     FFTSample *VAR_6,
                     RDFTContext *VAR_7)
{
    int VAR_8 = -VAR_5;
    FFTSample VAR_9 = -VAR_0;
    FFTSample *VAR_10;

    int VAR_11;
    int VAR_12;
    int VAR_13;

    FUNC_2(VAR_6,
                       VAR_7,
                       (const FFTComplex *)VAR_2->xdat,
                       (const FFTComplex *)VAR_1->xdat,
                       VAR_3);


    VAR_11 = FUNC_0(VAR_3 / 2 - VAR_4 - VAR_5, 0);
    VAR_11 = FUNC_1(VAR_11, VAR_3);

    VAR_12 = FUNC_1(VAR_3 / 2 + VAR_4 - VAR_5, VAR_3 - VAR_3 / 16);
    VAR_12 = FUNC_0(VAR_12, 0);


    VAR_10 = VAR_6 + VAR_11;

    for (VAR_13 = VAR_11; VAR_13 < VAR_12; VAR_13++, VAR_10++) {
        FFTSample VAR_14 = *VAR_10;


        FFTSample VAR_15 = (FFTSample)(VAR_5 + VAR_13);
        VAR_14 *= VAR_15 * (FFTSample)(VAR_13 - VAR_11) * (FFTSample)(VAR_12 - VAR_13);

        if (VAR_14 > VAR_9) {
            VAR_9 = VAR_14;
            VAR_8 = VAR_13 - VAR_3 / 2;
        }
    }

    return VAR_8;
}
