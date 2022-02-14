
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct GPU_FFT_TRANS {int dummy; } ;
struct GPU_FFT_COMPLEX {int re; int im; } ;
struct GPU_FFT {int dummy; } ;
typedef int bih ;
typedef int bfh ;
struct TYPE_5__ {int bfType; int bfSize; int bfOffBits; int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biCompression; } ;
typedef int FILE ;
typedef TYPE_1__ BITMAPINFOHEADER ;
typedef TYPE_1__ BITMAPFILEHEADER ;


 int VAR_0 ;
 int VAR_1 ;
 struct GPU_FFT_COMPLEX* FUNC_0 (struct GPU_FFT*,int ,int) ;
 unsigned int FUNC_1 () ;
 int VAR_2 ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (TYPE_1__*,int,int,int *) ;
 int FUNC_5 (struct GPU_FFT*) ;
 int FUNC_6 (int,int ,int ,int,struct GPU_FFT**) ;
 int FUNC_7 (struct GPU_FFT*) ;
 int FUNC_8 (struct GPU_FFT_TRANS*) ;
 int FUNC_9 (int,struct GPU_FFT*,struct GPU_FFT*,struct GPU_FFT_TRANS**) ;
 int FUNC_10 (struct GPU_FFT_TRANS*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 int VAR_5 ;
 int FUNC_13 (char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_14 (int) ;

int FUNC_15(int VAR_6, char *VAR_7[]) {
    int VAR_8, VAR_9, VAR_10, VAR_11 = FUNC_11();
    unsigned VAR_12[4];

    struct GPU_FFT_COMPLEX *VAR_13;
    struct GPU_FFT_TRANS *VAR_14;
    struct GPU_FFT *VAR_15[2];

    BITMAPFILEHEADER VAR_16;
    BITMAPINFOHEADER VAR_17;


    FILE *VAR_18 = FUNC_2("hello_fft_2d.bmp", "wb");
    if (!VAR_18) return -666;


    FUNC_12(&VAR_16, 0, sizeof(VAR_16));
    VAR_16.bfType = 0x4D42;
    VAR_16.bfSize = VAR_2*VAR_2*3;
    VAR_16.bfOffBits = sizeof(VAR_16) + sizeof(VAR_17);
    FUNC_4(&VAR_16, sizeof(VAR_16), 1, VAR_18);


    FUNC_12(&VAR_17, 0, sizeof(VAR_17));
    VAR_17.biSize = sizeof(VAR_17);
    VAR_17.biWidth = VAR_2;
    VAR_17.biHeight = VAR_2;
    VAR_17.biPlanes = 1;
    VAR_17.biBitCount = 24;
    VAR_17.biCompression = VAR_0;
    FUNC_4(&VAR_17, sizeof(VAR_17), 1, VAR_18);


    VAR_10 = FUNC_6(VAR_11, VAR_4, VAR_1, VAR_2, VAR_15+0);
    if (VAR_10) {
        return VAR_10;
    }

    VAR_10 = FUNC_6(VAR_11, VAR_4, VAR_1, VAR_2, VAR_15+1);
    if (VAR_10) {
        FUNC_7(VAR_15[0]);
        return VAR_10;
    }

    VAR_10 = FUNC_9(VAR_11, VAR_15[0], VAR_15[1], &VAR_14);
    if (VAR_10) {
        FUNC_7(VAR_15[0]);
        FUNC_7(VAR_15[1]);
        return VAR_10;
    }


    for (VAR_9=0; VAR_9<VAR_2; VAR_9++) {
        VAR_13 = FUNC_0(VAR_15[0], VAR_3, VAR_9);
        for (VAR_8=0; VAR_8<VAR_2; VAR_8++) VAR_13[VAR_8].re = VAR_13[VAR_8].im = 0;
    }


    FUNC_0(VAR_15[0], VAR_3, 2)[ 2].re = 60;
    FUNC_0(VAR_15[0], VAR_3, VAR_2-2)[VAR_2-2].re = 60;


    FUNC_14(1); VAR_12[0] = FUNC_1();
    FUNC_5(VAR_15[0]); VAR_12[1] = FUNC_1();
    FUNC_8(VAR_14); VAR_12[2] = FUNC_1();
    FUNC_5(VAR_15[1]); VAR_12[3] = FUNC_1();


    for (VAR_9=0; VAR_9<VAR_2; VAR_9++) {
        VAR_13 = FUNC_0(VAR_15[1], VAR_5, VAR_9);
        for (VAR_8=0; VAR_8<VAR_2; VAR_8++) {
            FUNC_3(128+VAR_13[VAR_8].re, VAR_18);
            FUNC_3(128+VAR_13[VAR_8].re, VAR_18);
            FUNC_3(128+VAR_13[VAR_8].re, VAR_18);
        }
    }

    FUNC_13( "1st FFT   %6d usecs\n"
            "Transpose %6d usecs\n"
            "2nd FFT   %6d usecs\n",
            VAR_12[3]-VAR_12[2], VAR_12[2]-VAR_12[1], VAR_12[1]-VAR_12[0]);


    FUNC_7(VAR_15[0]);
    FUNC_7(VAR_15[1]);
    FUNC_10(VAR_14);

    return 0;
}
