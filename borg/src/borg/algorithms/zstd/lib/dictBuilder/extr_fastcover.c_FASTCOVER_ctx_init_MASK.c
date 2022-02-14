
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int U64 ;
typedef unsigned int U32 ;
struct TYPE_6__ {size_t const* samplesSizes; unsigned int nbSamples; unsigned int nbTrainSamples; unsigned int nbTestSamples; size_t nbDmers; unsigned int d; unsigned int f; size_t* offsets; unsigned int* freqs; int accelParams; int * samples; } ;
typedef TYPE_1__ FASTCOVER_ctx_t ;
typedef int FASTCOVER_accel_t ;
typedef int BYTE ;


 size_t const FUNC_0 (size_t const*,unsigned int const) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 size_t const FUNC_4 (unsigned int,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (unsigned int,int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_8(FASTCOVER_ctx_t* VAR_1,
                   const void* VAR_2,
                   const size_t* VAR_3, unsigned VAR_4,
                   unsigned VAR_5, double VAR_6, unsigned VAR_7,
                   FASTCOVER_accel_t VAR_8)
{
    const BYTE* const VAR_9 = (const BYTE*)VAR_2;
    const size_t VAR_10 = FUNC_0(VAR_3, VAR_4);

    const unsigned VAR_11 = VAR_6 < 1.0 ? (unsigned)((double)VAR_4 * VAR_6) : VAR_4;
    const unsigned VAR_12 = VAR_6 < 1.0 ? VAR_4 - VAR_11 : VAR_4;
    const size_t VAR_13 = VAR_6 < 1.0 ? FUNC_0(VAR_3, VAR_11) : VAR_10;
    const size_t VAR_14 = VAR_6 < 1.0 ? FUNC_0(VAR_3 + VAR_11, VAR_12) : VAR_10;


    if (VAR_10 < FUNC_4(VAR_5, sizeof(U64)) ||
        VAR_10 >= (size_t)VAR_0) {
        FUNC_1(1, "Total samples size is too large (%u MB), maximum size is %u MB\n",
                    (unsigned)(VAR_10 >> 20), (VAR_0 >> 20));
        return 0;
    }


    if (VAR_11 < 5) {
        FUNC_1(1, "Total number of training samples is %u and is invalid\n", VAR_11);
        return 0;
    }


    if (VAR_12 < 1) {
        FUNC_1(1, "Total number of testing samples is %u and is invalid.\n", VAR_12);
        return 0;
    }


    FUNC_7(VAR_1, 0, sizeof(*VAR_1));
    FUNC_1(2, "Training on %u samples of total size %u\n", VAR_11,
                    (unsigned)VAR_13);
    FUNC_1(2, "Testing on %u samples of total size %u\n", VAR_12,
                    (unsigned)VAR_14);

    VAR_1->samples = VAR_9;
    VAR_1->samplesSizes = VAR_3;
    VAR_1->nbSamples = VAR_4;
    VAR_1->nbTrainSamples = VAR_11;
    VAR_1->nbTestSamples = VAR_12;
    VAR_1->nbDmers = VAR_13 - FUNC_4(VAR_5, sizeof(U64)) + 1;
    VAR_1->d = VAR_5;
    VAR_1->f = VAR_7;
    VAR_1->accelParams = VAR_8;


    VAR_1->offsets = (size_t*)FUNC_6((VAR_4 + 1), sizeof(size_t));
    if (VAR_1->offsets == ((void*)0)) {
        FUNC_1(1, "Failed to allocate scratch buffers \n");
        FUNC_3(VAR_1);
        return 0;
    }


    { U32 VAR_15;
        VAR_1->offsets[0] = 0;
        FUNC_5(VAR_4 >= 5);
        for (VAR_15 = 1; VAR_15 <= VAR_4; ++VAR_15) {
            VAR_1->offsets[VAR_15] = VAR_1->offsets[VAR_15 - 1] + VAR_3[VAR_15 - 1];
        }
    }


    VAR_1->freqs = (U32*)FUNC_6(((U64)1 << VAR_7), sizeof(U32));
    if (VAR_1->freqs == ((void*)0)) {
        FUNC_1(1, "Failed to allocate frequency table \n");
        FUNC_3(VAR_1);
        return 0;
    }

    FUNC_1(2, "Computing frequencies\n");
    FUNC_2(VAR_1->freqs, VAR_1);

    return 1;
}
