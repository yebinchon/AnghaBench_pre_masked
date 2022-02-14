
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct GPU_FFT_COMPLEX {double re; double im; } ;
struct GPU_FFT {int step; struct GPU_FFT_COMPLEX* out; struct GPU_FFT_COMPLEX* in; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 () ;
 char* VAR_2 ;
 int FUNC_1 (char*) ;
 double FUNC_2 (int) ;
 int FUNC_3 (struct GPU_FFT*) ;
 int FUNC_4 (int,int,int ,int,struct GPU_FFT**) ;
 int FUNC_5 (struct GPU_FFT*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (double,int) ;
 int FUNC_8 (char*,...) ;
 double FUNC_9 (double) ;
 int FUNC_10 (int) ;

int FUNC_11(int VAR_3, char *VAR_4[]) {
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = FUNC_6();
    unsigned VAR_15[2];
    double VAR_16[2];

    struct GPU_FFT_COMPLEX *VAR_17;
    struct GPU_FFT *VAR_18;

    VAR_11 = VAR_3>1? FUNC_1(VAR_4[1]) : 12;
    VAR_12 = VAR_3>2? FUNC_1(VAR_4[2]) : 1;
    VAR_9 = VAR_3>3? FUNC_1(VAR_4[3]) : 1;

    if (VAR_3<2 || VAR_12<1 || VAR_9<1) {
        FUNC_8(VAR_2);
        return -1;
    }

    VAR_13 = 1<<VAR_11;
    VAR_8 = FUNC_4(VAR_14, VAR_11, VAR_1, VAR_12, &VAR_18);

    switch(VAR_8) {
        case -1: FUNC_8("Unable to enable V3D. Please check your firmware is up to date.\n"); return -1;
        case -2: FUNC_8("log2_N=%d not supported.  Try between 8 and 22.\n", VAR_11); return -1;
        case -3: FUNC_8("Out of memory.  Try a smaller batch or increase GPU memory.\n"); return -1;
        case -4: FUNC_8("Unable to map Videocore peripherals into ARM memory space.\n"); return -1;
        case -5: FUNC_8("Can't open libbcm_host.\n"); return -1;
    }

    for (VAR_7=0; VAR_7<VAR_9; VAR_7++) {

        for (VAR_6=0; VAR_6<VAR_12; VAR_6++) {
            VAR_17 = VAR_18->in + VAR_6*VAR_18->step;
            for (VAR_5=0; VAR_5<VAR_13; VAR_5++) VAR_17[VAR_5].re = VAR_17[VAR_5].im = 0;
            VAR_10 = VAR_6+1;
            VAR_17[VAR_10].re = VAR_17[VAR_13-VAR_10].re = 0.5;
        }

        FUNC_10(1);
        VAR_15[0] = FUNC_0();
        FUNC_3(VAR_18);
        VAR_15[1] = FUNC_0();

        VAR_16[0]=VAR_16[1]=0;
        for (VAR_6=0; VAR_6<VAR_12; VAR_6++) {
            VAR_17 = VAR_18->out + VAR_6*VAR_18->step;
            VAR_10 = VAR_6+1;
            for (VAR_5=0; VAR_5<VAR_13; VAR_5++) {
                double VAR_19 = FUNC_2(2*VAR_0*VAR_10*VAR_5/VAR_13);
                VAR_16[0] += FUNC_7(VAR_19, 2);
                VAR_16[1] += FUNC_7(VAR_19 - VAR_17[VAR_5].re, 2) + FUNC_7(VAR_17[VAR_5].im, 2);
            }
        }

        FUNC_8("rel_rms_err = %0.2g, usecs = %d, k = %d\n",
            FUNC_9(VAR_16[1]/VAR_16[0]), (VAR_15[1]-VAR_15[0])/VAR_12, VAR_7);
    }

    FUNC_5(VAR_18);
    return 0;
}
