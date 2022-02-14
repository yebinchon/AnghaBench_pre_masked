
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int* Buf; scalar_t__* LenInBitCount; } ;
typedef TYPE_1__ SHA_CTX ;



VOID FUNC_0(SHA_CTX *VAR_0)
{
    VAR_0->Buf[0]=0x67452301;
    VAR_0->Buf[1]=0xefcdab89;
    VAR_0->Buf[2]=0x98badcfe;
    VAR_0->Buf[3]=0x10325476;
    VAR_0->Buf[4]=0xc3d2e1f0;

    VAR_0->LenInBitCount[0]=0;
    VAR_0->LenInBitCount[1]=0;
}
