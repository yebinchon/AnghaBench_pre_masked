
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t X ;
struct TYPE_3__ {int* MDS1; int* MDS2; int* MDS3; int* MDS4; } ;
typedef TYPE_1__ AVTWOFISH ;



__attribute__((used)) static uint32_t FUNC_0(AVTWOFISH *VAR_0, uint32_t VAR_1)
{
    return VAR_0->MDS1[(VAR_1) & 0xff] ^ VAR_0->MDS2[((VAR_1) >> 8) & 0xff] ^ VAR_0->MDS3[((VAR_1) >> 16) & 0xff] ^ VAR_0->MDS4[(VAR_1) >> 24];
}
