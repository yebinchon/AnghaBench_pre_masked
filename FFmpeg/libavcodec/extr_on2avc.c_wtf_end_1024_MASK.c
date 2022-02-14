
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int (* fft_calc ) (TYPE_4__*,int *) ;int (* fft_permute ) (TYPE_4__*,int *) ;} ;
struct TYPE_14__ {int (* fft_calc ) (TYPE_3__*,int *) ;int (* fft_permute ) (TYPE_3__*,int *) ;} ;
struct TYPE_13__ {TYPE_3__ fft1024; TYPE_4__ fft256; } ;
typedef TYPE_1__ On2AVCContext ;
typedef int FFTComplex ;


 int FUNC_0 (float*,float*,float*,float*,float*,int ,int ,int ,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (float*,float*,int) ;
 int FUNC_2 (float*,float*,int,int,int,int,int,int ) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_4__*,int *) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_4__*,int *) ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (TYPE_4__*,int *) ;
 int FUNC_12 (TYPE_3__*,int *) ;
 int FUNC_13 (float*,int,int,int) ;

__attribute__((used)) static void FUNC_14(On2AVCContext *VAR_8, float *VAR_9, float *VAR_10,
                         float *VAR_11, float *VAR_12)
{
    FUNC_1(VAR_10, VAR_11, 768 * sizeof(*VAR_11));
    FUNC_1(VAR_11 + 768, VAR_10 + 768, 256 * sizeof(*VAR_11));

    FUNC_13(VAR_10, 256, 16, 4);
    FUNC_13(VAR_10 + 256, 256, 16, 4);
    FUNC_13(VAR_10 + 512, 256, 13, 7);
    FUNC_13(VAR_10 + 768, 256, 15, 5);

    VAR_8->fft256.fft_permute(&VAR_8->fft256, (FFTComplex*)VAR_10);
    VAR_8->fft256.fft_permute(&VAR_8->fft256, (FFTComplex*)(VAR_10 + 256));
    VAR_8->fft256.fft_permute(&VAR_8->fft256, (FFTComplex*)(VAR_10 + 512));
    VAR_8->fft256.fft_permute(&VAR_8->fft256, (FFTComplex*)(VAR_10 + 768));
    VAR_8->fft256.fft_calc(&VAR_8->fft256, (FFTComplex*)VAR_10);
    VAR_8->fft256.fft_calc(&VAR_8->fft256, (FFTComplex*)(VAR_10 + 256));
    VAR_8->fft256.fft_calc(&VAR_8->fft256, (FFTComplex*)(VAR_10 + 512));
    VAR_8->fft256.fft_calc(&VAR_8->fft256, (FFTComplex*)(VAR_10 + 768));
    FUNC_0(VAR_10, VAR_10 + 256, VAR_10 + 512, VAR_10 + 768, VAR_12,
                VAR_0, VAR_1,
                VAR_2, VAR_3, 1024, 1);
    VAR_8->fft1024.fft_permute(&VAR_8->fft1024, (FFTComplex*)VAR_12);
    VAR_8->fft1024.fft_calc(&VAR_8->fft1024, (FFTComplex*)VAR_12);

    FUNC_2(&VAR_11[ 0], VAR_12, 1024, 84, 4, 16, 4, VAR_4);
    FUNC_2(&VAR_11[256], VAR_12, 1024, 84, 4, 16, 4, VAR_5);
    FUNC_2(&VAR_11[512], VAR_12, 1024, 84, 4, 13, 7, VAR_6);
    FUNC_2(&VAR_11[768], VAR_12, 1024, 84, 4, 15, 5, VAR_7);

    FUNC_1(VAR_10, VAR_12, 1024 * sizeof(float));
}
