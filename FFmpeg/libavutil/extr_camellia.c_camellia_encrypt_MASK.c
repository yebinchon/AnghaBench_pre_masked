
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_3__ {int key_bits; int * Kw; int * K; int * Ke; } ;
typedef TYPE_1__ AVCAMELLIA ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(AVCAMELLIA *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2)
{
    uint64_t VAR_3, VAR_4;
    VAR_3 = FUNC_0(VAR_2);
    VAR_4 = FUNC_0(VAR_2 + 8);
    VAR_3 ^= VAR_0->Kw[0];
    VAR_4 ^= VAR_0->Kw[1];
    VAR_4 ^= FUNC_2(VAR_3, VAR_0->K[0]);
    VAR_3 ^= FUNC_2(VAR_4, VAR_0->K[1]);
    VAR_4 ^= FUNC_2(VAR_3, VAR_0->K[2]);
    VAR_3 ^= FUNC_2(VAR_4, VAR_0->K[3]);
    VAR_4 ^= FUNC_2(VAR_3, VAR_0->K[4]);
    VAR_3 ^= FUNC_2(VAR_4, VAR_0->K[5]);
    VAR_3 = FUNC_3(VAR_3, VAR_0->Ke[0]);
    VAR_4 = FUNC_4(VAR_4, VAR_0->Ke[1]);
    VAR_4 ^= FUNC_2(VAR_3, VAR_0->K[6]);
    VAR_3 ^= FUNC_2(VAR_4, VAR_0->K[7]);
    VAR_4 ^= FUNC_2(VAR_3, VAR_0->K[8]);
    VAR_3 ^= FUNC_2(VAR_4, VAR_0->K[9]);
    VAR_4 ^= FUNC_2(VAR_3, VAR_0->K[10]);
    VAR_3 ^= FUNC_2(VAR_4, VAR_0->K[11]);
    VAR_3 = FUNC_3(VAR_3, VAR_0->Ke[2]);
    VAR_4 = FUNC_4(VAR_4, VAR_0->Ke[3]);
    VAR_4 ^= FUNC_2(VAR_3, VAR_0->K[12]);
    VAR_3 ^= FUNC_2(VAR_4, VAR_0->K[13]);
    VAR_4 ^= FUNC_2(VAR_3, VAR_0->K[14]);
    VAR_3 ^= FUNC_2(VAR_4, VAR_0->K[15]);
    VAR_4 ^= FUNC_2(VAR_3, VAR_0->K[16]);
    VAR_3 ^= FUNC_2(VAR_4, VAR_0->K[17]);
    if (VAR_0->key_bits != 128) {
        VAR_3 = FUNC_3(VAR_3, VAR_0->Ke[4]);
        VAR_4 = FUNC_4(VAR_4, VAR_0->Ke[5]);
        VAR_4 ^= FUNC_2(VAR_3, VAR_0->K[18]);
        VAR_3 ^= FUNC_2(VAR_4, VAR_0->K[19]);
        VAR_4 ^= FUNC_2(VAR_3, VAR_0->K[20]);
        VAR_3 ^= FUNC_2(VAR_4, VAR_0->K[21]);
        VAR_4 ^= FUNC_2(VAR_3, VAR_0->K[22]);
        VAR_3 ^= FUNC_2(VAR_4, VAR_0->K[23]);
    }
    VAR_4 ^= VAR_0->Kw[2];
    VAR_3 ^= VAR_0->Kw[3];
    FUNC_1(VAR_1, VAR_4);
    FUNC_1(VAR_1 + 8, VAR_3);
}
