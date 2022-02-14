
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int* MDS1; int* MDS2; int* MDS3; int* MDS4; int ksize; int S; } ;
typedef TYPE_1__ AVTWOFISH ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (size_t*,int ,int ) ;

__attribute__((used)) static void FUNC_1(AVTWOFISH *VAR_2)
{
    uint8_t VAR_3[4];
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < 256; VAR_4++) {
        VAR_3[0] = VAR_3[1] = VAR_3[2] = VAR_3[3] = VAR_4;
    FUNC_0(VAR_3, VAR_2->S, VAR_2->ksize);
        VAR_2->MDS1[VAR_4] = ((uint32_t)VAR_3[0]) ^ ((uint32_t)VAR_0[VAR_3[0]] << 8) ^ ((uint32_t)VAR_1[VAR_3[0]] << 16) ^ ((uint32_t)VAR_1[VAR_3[0]] << 24);
        VAR_2->MDS2[VAR_4] = ((uint32_t)VAR_1[VAR_3[1]]) ^ ((uint32_t)VAR_1[VAR_3[1]] << 8) ^ ((uint32_t)VAR_0[VAR_3[1]] << 16) ^ ((uint32_t)VAR_3[1] << 24);
        VAR_2->MDS3[VAR_4] = ((uint32_t)VAR_0[VAR_3[2]]) ^ ((uint32_t)VAR_1[VAR_3[2]] << 8) ^ ((uint32_t)VAR_3[2] << 16) ^ ((uint32_t)VAR_1[VAR_3[2]] << 24);
        VAR_2->MDS4[VAR_4] = ((uint32_t)VAR_0[VAR_3[3]]) ^ ((uint32_t)VAR_3[3] << 8) ^ ((uint32_t)VAR_1[VAR_3[3]] << 16) ^ ((uint32_t)VAR_0[VAR_3[3]] << 24);
    }
}
