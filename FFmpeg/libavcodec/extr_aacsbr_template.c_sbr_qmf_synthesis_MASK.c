
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int (* vector_fmul_add ) (int *,int *,int const*,int *,int) ;int (* vector_fmul ) (int *,int *,int const*,int) ;} ;
struct TYPE_12__ {int (* imdct_half ) (TYPE_2__*,int *,int *) ;} ;
struct TYPE_11__ {int (* qmf_deint_bfly ) (int *,int *,int *) ;int (* neg_odd_64 ) (int *) ;int (* qmf_deint_neg ) (int *,int *) ;} ;
typedef TYPE_1__ SBRDSPContext ;
typedef int INTFLOAT ;
typedef TYPE_2__ FFTContext ;
typedef TYPE_3__ AVFloatDSPContext ;
typedef int AVFixedDSPContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;
 int FUNC_2 (int *,int *,int const*,int *,int) ;
 int FUNC_3 (int *,int *,int const*,int *,int) ;
 int FUNC_4 (int *,int *,int const*,int *,int) ;
 int FUNC_5 (int *,int *,int const*,int *,int) ;
 int FUNC_6 (int *,int *,int const*,int *,int) ;
 int FUNC_7 (int *,int *,int const*,int *,int) ;
 int FUNC_8 (int *,int *,int const*,int *,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*,int *,int *) ;
 int FUNC_12 (TYPE_2__*,int *,int *) ;
 int FUNC_13 (int *,int *,int *) ;
 int FUNC_14 (int *,int *,int const*,int) ;
 int FUNC_15 (int *,int *,int const*,int *,int) ;
 int FUNC_16 (int *,int *,int const*,int *,int) ;

__attribute__((used)) static void FUNC_17(FFTContext *VAR_3,



                              SBRDSPContext *VAR_4, AVFloatDSPContext *VAR_5,

                              INTFLOAT *VAR_6, INTFLOAT VAR_7[2][38][64],
                              INTFLOAT VAR_8[2][64],
                              INTFLOAT *VAR_9, int *VAR_10, const unsigned int VAR_11)
{
    int VAR_12, VAR_13;
    const INTFLOAT *VAR_14 = VAR_11 ? VAR_1 : VAR_2;
    const int VAR_15 = 128 >> VAR_11;
    INTFLOAT *VAR_16;
    for (VAR_12 = 0; VAR_12 < 32; VAR_12++) {
        if (*VAR_10 < VAR_15) {
            int VAR_17 = (1280 - 128) >> VAR_11;
            FUNC_0(&VAR_9[VAR_0 - VAR_17], VAR_9, VAR_17 * sizeof(INTFLOAT));
            *VAR_10 = VAR_0 - VAR_17 - VAR_15;
        } else {
            *VAR_10 -= VAR_15;
        }
        VAR_16 = VAR_9 + *VAR_10;
        if (VAR_11) {
            for (VAR_13 = 0; VAR_13 < 32; VAR_13++) {
                VAR_7[0][VAR_12][ VAR_13] = -VAR_7[0][VAR_12][VAR_13];
                VAR_7[0][VAR_12][32+VAR_13] = VAR_7[1][VAR_12][31-VAR_13];
            }
            VAR_3->imdct_half(VAR_3, VAR_8[0], VAR_7[0][VAR_12]);
            VAR_4->qmf_deint_neg(VAR_16, VAR_8[0]);
        } else {
            VAR_4->neg_odd_64(VAR_7[1][VAR_12]);
            VAR_3->imdct_half(VAR_3, VAR_8[0], VAR_7[0][VAR_12]);
            VAR_3->imdct_half(VAR_3, VAR_8[1], VAR_7[1][VAR_12]);
            VAR_4->qmf_deint_bfly(VAR_16, VAR_8[1], VAR_8[0]);
        }
        VAR_5->vector_fmul (VAR_6, VAR_16 , VAR_14 , 64 >> VAR_11);
        VAR_5->vector_fmul_add(VAR_6, VAR_16 + ( 192 >> VAR_11), VAR_14 + ( 64 >> VAR_11), VAR_6 , 64 >> VAR_11);
        VAR_5->vector_fmul_add(VAR_6, VAR_16 + ( 256 >> VAR_11), VAR_14 + (128 >> VAR_11), VAR_6 , 64 >> VAR_11);
        VAR_5->vector_fmul_add(VAR_6, VAR_16 + ( 448 >> VAR_11), VAR_14 + (192 >> VAR_11), VAR_6 , 64 >> VAR_11);
        VAR_5->vector_fmul_add(VAR_6, VAR_16 + ( 512 >> VAR_11), VAR_14 + (256 >> VAR_11), VAR_6 , 64 >> VAR_11);
        VAR_5->vector_fmul_add(VAR_6, VAR_16 + ( 704 >> VAR_11), VAR_14 + (320 >> VAR_11), VAR_6 , 64 >> VAR_11);
        VAR_5->vector_fmul_add(VAR_6, VAR_16 + ( 768 >> VAR_11), VAR_14 + (384 >> VAR_11), VAR_6 , 64 >> VAR_11);
        VAR_5->vector_fmul_add(VAR_6, VAR_16 + ( 960 >> VAR_11), VAR_14 + (448 >> VAR_11), VAR_6 , 64 >> VAR_11);
        VAR_5->vector_fmul_add(VAR_6, VAR_16 + (1024 >> VAR_11), VAR_14 + (512 >> VAR_11), VAR_6 , 64 >> VAR_11);
        VAR_5->vector_fmul_add(VAR_6, VAR_16 + (1216 >> VAR_11), VAR_14 + (576 >> VAR_11), VAR_6 , 64 >> VAR_11);
        VAR_6 += 64 >> VAR_11;
    }
}
