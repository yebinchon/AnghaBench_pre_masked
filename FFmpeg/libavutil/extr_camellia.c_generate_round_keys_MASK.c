
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_3__ {int key_bits; void** Kw; void** Ke; void** K; } ;
typedef TYPE_1__ AVCAMELLIA ;


 int FUNC_0 (void**,void**,int) ;
 int** VAR_0 ;
 size_t** VAR_1 ;

__attribute__((used)) static void FUNC_1(AVCAMELLIA *VAR_2, uint64_t VAR_3[2], uint64_t VAR_4[2], uint64_t VAR_5[2], uint64_t VAR_6[2])
{
    int VAR_7;
    uint64_t *VAR_8[4], VAR_9[2];
    VAR_8[0] = VAR_3;
    VAR_8[1] = VAR_4;
    VAR_8[2] = VAR_5;
    VAR_8[3] = VAR_6;
    VAR_2->Kw[0] = VAR_3[0];
    VAR_2->Kw[1] = VAR_3[1];
    if (VAR_2->key_bits == 128) {
        for (VAR_7 = 0; VAR_7 < 9; VAR_7++) {
            FUNC_0(VAR_9, VAR_8[VAR_1[0][VAR_7]], VAR_0[0][VAR_7]);
            VAR_2->K[2*VAR_7] = VAR_9[0];
            VAR_2->K[2*VAR_7+1] = VAR_9[1];
        }
        FUNC_0(VAR_9, VAR_8[0], 60);
        VAR_2->K[9] = VAR_9[1];
        FUNC_0(VAR_9, VAR_8[2], 30);
        VAR_2->Ke[0] = VAR_9[0];
        VAR_2->Ke[1] = VAR_9[1];
        FUNC_0(VAR_9, VAR_8[0], 77);
        VAR_2->Ke[2] = VAR_9[0];
        VAR_2->Ke[3] = VAR_9[1];
        FUNC_0(VAR_9, VAR_8[2], 111);
        VAR_2->Kw[2] = VAR_9[0];
        VAR_2->Kw[3] = VAR_9[1];
    } else {
        for (VAR_7 = 0; VAR_7 < 12; VAR_7++) {
            FUNC_0(VAR_9, VAR_8[VAR_1[1][VAR_7]], VAR_0[1][VAR_7]);
            VAR_2->K[2*VAR_7] = VAR_9[0];
            VAR_2->K[2*VAR_7+1] = VAR_9[1];
        }
        FUNC_0(VAR_9, VAR_8[1], 30);
        VAR_2->Ke[0] = VAR_9[0];
        VAR_2->Ke[1] = VAR_9[1];
        FUNC_0(VAR_9, VAR_8[0], 60);
        VAR_2->Ke[2] = VAR_9[0];
        VAR_2->Ke[3] = VAR_9[1];
        FUNC_0(VAR_9, VAR_8[2], 77);
        VAR_2->Ke[4] = VAR_9[0];
        VAR_2->Ke[5] = VAR_9[1];
        FUNC_0(VAR_9, VAR_8[3], 111);
        VAR_2->Kw[2] = VAR_9[0];
        VAR_2->Kw[3] = VAR_9[1];
    }
}
