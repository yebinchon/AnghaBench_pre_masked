
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float* temp; } ;
typedef TYPE_1__ On2AVCContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (float*,int ,int) ;
 int FUNC_1 (float*,float*,int,int ,int,int,int,int,int ) ;
 int FUNC_2 (TYPE_1__*,float*,float*,float*,float*) ;
 int FUNC_3 (TYPE_1__*,float*,float*,float*,float*) ;

__attribute__((used)) static void FUNC_4(On2AVCContext *VAR_20, float *VAR_21, float *VAR_22, int VAR_23)
{
    float *VAR_24 = VAR_20->temp, *VAR_25 = VAR_20->temp + 1024;

    FUNC_0(VAR_24, 0, sizeof(*VAR_24) * 1024);
    FUNC_0(VAR_25, 0, sizeof(*VAR_25) * 1024);

    if (VAR_23 == 512) {
        FUNC_1(VAR_22, &VAR_24[ 0], 16, VAR_0, 10, 2, 1, 3, VAR_16);
        FUNC_1(VAR_22 + 8, &VAR_24[ 0], 16, VAR_1, 10, 2, 3, 1, VAR_17);
        FUNC_1(VAR_22 + 16, &VAR_24[16], 16, VAR_1, 10, 2, 3, 1, VAR_17);
        FUNC_1(VAR_22 + 24, &VAR_24[16], 16, VAR_0, 10, 2, 1, 3, VAR_16);
        FUNC_1(VAR_22 + 32, &VAR_24[32], 16, VAR_0, 10, 2, 1, 3, VAR_16);
        FUNC_1(VAR_22 + 40, &VAR_24[32], 16, VAR_1, 10, 2, 3, 1, VAR_17);
        FUNC_1(VAR_22 + 48, &VAR_24[48], 16, VAR_1, 10, 2, 3, 1, VAR_17);
        FUNC_1(VAR_22 + 56, &VAR_24[48], 16, VAR_0, 10, 2, 1, 3, VAR_16);
        FUNC_1(&VAR_24[ 0], &VAR_25[ 0], 32, VAR_2, 20, 2, 5, 4, VAR_18);
        FUNC_1(&VAR_24[16], &VAR_25[ 0], 32, VAR_3, 20, 2, 4, 5, VAR_19);
        FUNC_1(&VAR_24[32], &VAR_25[32], 32, VAR_3, 20, 2, 4, 5, VAR_19);
        FUNC_1(&VAR_24[48], &VAR_25[32], 32, VAR_2, 20, 2, 5, 4, VAR_18);
        FUNC_1(VAR_22 + 64, &VAR_25[64], 32, VAR_2, 20, 2, 5, 4, VAR_18);
        FUNC_1(VAR_22 + 80, &VAR_25[64], 32, VAR_3, 20, 2, 4, 5, VAR_19);
        FUNC_1(VAR_22 + 96, &VAR_25[96], 32, VAR_3, 20, 2, 4, 5, VAR_19);
        FUNC_1(VAR_22 + 112, &VAR_25[96], 32, VAR_2, 20, 2, 5, 4, VAR_18);

        FUNC_0(VAR_24, 0, 64 * sizeof(*VAR_24));

        FUNC_1(&VAR_25[ 0], &VAR_24[ 0], 128, VAR_6, 84, 4, 16, 4, VAR_12);
        FUNC_1(&VAR_25[32], &VAR_24[ 0], 128, VAR_7, 84, 4, 16, 4, VAR_13);
        FUNC_1(&VAR_25[64], &VAR_24[ 0], 128, VAR_8, 84, 4, 13, 7, VAR_14);
        FUNC_1(&VAR_25[96], &VAR_24[ 0], 128, VAR_9, 84, 4, 15, 5, VAR_15);
        FUNC_1(VAR_22 + 128, &VAR_24[128], 128, VAR_9, 84, 4, 15, 5, VAR_15);
        FUNC_1(VAR_22 + 160, &VAR_24[128], 128, VAR_8, 84, 4, 13, 7, VAR_14);
        FUNC_1(VAR_22 + 192, &VAR_24[128], 128, VAR_7, 84, 4, 16, 4, VAR_13);
        FUNC_1(VAR_22 + 224, &VAR_24[128], 128, VAR_6, 84, 4, 16, 4, VAR_12);
        FUNC_1(VAR_22 + 256, &VAR_24[256], 128, VAR_4, 40, 2, 11, 8, VAR_10);
        FUNC_1(VAR_22 + 320, &VAR_24[256], 128, VAR_5, 40, 2, 8, 11, VAR_11);

        FUNC_3(VAR_20, VAR_21, VAR_22, VAR_24, VAR_25);
    } else {
        FUNC_1(VAR_22, &VAR_24[ 0], 32, VAR_2, 20, 2, 5, 4, VAR_18);
        FUNC_1(VAR_22 + 16, &VAR_24[ 0], 32, VAR_3, 20, 2, 4, 5, VAR_19);
        FUNC_1(VAR_22 + 32, &VAR_24[ 32], 32, VAR_3, 20, 2, 4, 5, VAR_19);
        FUNC_1(VAR_22 + 48, &VAR_24[ 32], 32, VAR_2, 20, 2, 5, 4, VAR_18);
        FUNC_1(VAR_22 + 64, &VAR_24[ 64], 32, VAR_2, 20, 2, 5, 4, VAR_18);
        FUNC_1(VAR_22 + 80, &VAR_24[ 64], 32, VAR_3, 20, 2, 4, 5, VAR_19);
        FUNC_1(VAR_22 + 96, &VAR_24[ 96], 32, VAR_3, 20, 2, 4, 5, VAR_19);
        FUNC_1(VAR_22 + 112, &VAR_24[ 96], 32, VAR_2, 20, 2, 5, 4, VAR_18);
        FUNC_1(&VAR_24[ 0], &VAR_25[ 0], 64, VAR_4, 40, 2, 11, 8, VAR_10);
        FUNC_1(&VAR_24[32], &VAR_25[ 0], 64, VAR_5, 40, 2, 8, 11, VAR_11);
        FUNC_1(&VAR_24[64], &VAR_25[ 64], 64, VAR_5, 40, 2, 8, 11, VAR_11);
        FUNC_1(&VAR_24[96], &VAR_25[ 64], 64, VAR_4, 40, 2, 11, 8, VAR_10);
        FUNC_1(VAR_22 + 128, &VAR_25[128], 64, VAR_4, 40, 2, 11, 8, VAR_10);
        FUNC_1(VAR_22 + 160, &VAR_25[128], 64, VAR_5, 40, 2, 8, 11, VAR_11);
        FUNC_1(VAR_22 + 192, &VAR_25[192], 64, VAR_5, 40, 2, 8, 11, VAR_11);
        FUNC_1(VAR_22 + 224, &VAR_25[192], 64, VAR_4, 40, 2, 11, 8, VAR_10);

        FUNC_0(VAR_24, 0, 128 * sizeof(*VAR_24));

        FUNC_1(&VAR_25[ 0], &VAR_24[ 0], 256, VAR_6, 84, 4, 16, 4, VAR_12);
        FUNC_1(&VAR_25[ 64], &VAR_24[ 0], 256, VAR_7, 84, 4, 16, 4, VAR_13);
        FUNC_1(&VAR_25[128], &VAR_24[ 0], 256, VAR_8, 84, 4, 13, 7, VAR_14);
        FUNC_1(&VAR_25[192], &VAR_24[ 0], 256, VAR_9, 84, 4, 15, 5, VAR_15);
        FUNC_1(VAR_22 + 256, &VAR_24[256], 256, VAR_9, 84, 4, 15, 5, VAR_15);
        FUNC_1(VAR_22 + 320, &VAR_24[256], 256, VAR_8, 84, 4, 13, 7, VAR_14);
        FUNC_1(VAR_22 + 384, &VAR_24[256], 256, VAR_7, 84, 4, 16, 4, VAR_13);
        FUNC_1(VAR_22 + 448, &VAR_24[256], 256, VAR_6, 84, 4, 16, 4, VAR_12);
        FUNC_1(VAR_22 + 512, &VAR_24[512], 256, VAR_4, 40, 2, 11, 8, VAR_10);
        FUNC_1(VAR_22 + 640, &VAR_24[512], 256, VAR_5, 40, 2, 8, 11, VAR_11);

        FUNC_2(VAR_20, VAR_21, VAR_22, VAR_24, VAR_25);
    }
}
