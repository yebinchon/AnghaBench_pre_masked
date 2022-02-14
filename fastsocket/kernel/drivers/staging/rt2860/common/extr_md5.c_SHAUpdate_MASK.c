
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
typedef int UCHAR ;
struct TYPE_3__ {int* LenInBitCount; int* Input; int Buf; } ;
typedef TYPE_1__ SHA_CTX ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int*,int) ;

UCHAR FUNC_4(SHA_CTX *VAR_0, UCHAR *VAR_1, UINT32 VAR_2)
{
    UINT32 VAR_3;
    UINT32 VAR_4,VAR_5;
 unsigned int VAR_6;
 UCHAR VAR_7=1;

    VAR_4 = VAR_0->LenInBitCount[0];
    VAR_5 = VAR_0->LenInBitCount[1];

    VAR_0->LenInBitCount[0] = (UINT32) (VAR_0->LenInBitCount[0] + (VAR_2 << 3));
    if (VAR_0->LenInBitCount[0] < VAR_4)
        VAR_0->LenInBitCount[1]++;


    VAR_0->LenInBitCount[1] = (UINT32) (VAR_0->LenInBitCount[1] +(VAR_2 >> 29));
    if (VAR_0->LenInBitCount[1] < VAR_5)
        return (VAR_7);



    VAR_4 = (VAR_4 >> 3) & 0x3f;


    if (VAR_4)
    {
        UCHAR *VAR_8 = (UCHAR *) VAR_0->Input + VAR_4;

        if ((VAR_4+VAR_2) < 64)
        {
            FUNC_0(VAR_8, (UCHAR *)VAR_1, VAR_2);
            return (0);
        }

        FUNC_0(VAR_8, (UCHAR *)VAR_1, 64-VAR_4);
        FUNC_3((UCHAR *)VAR_0->Input, 16);

        FUNC_1((UCHAR *)VAR_0->Input + 64, 16);
        FUNC_2(VAR_0->Buf, (UINT32 *)VAR_0->Input);

        VAR_1 += 64-VAR_4;
        VAR_2 -= 64-VAR_4;
    }


    VAR_3 = (VAR_2 >> 6);

    for (VAR_6=VAR_3; VAR_6>0; VAR_6--)
    {
        FUNC_0(VAR_0->Input, (UCHAR *)VAR_1, 64);
        FUNC_3((UCHAR *)VAR_0->Input, 16);

        FUNC_1((UCHAR *)VAR_0->Input + 64, 16);
        FUNC_2(VAR_0->Buf, (UINT32 *)VAR_0->Input);
        VAR_1 += 64;
        VAR_2 -= 64;
    }


    if(VAR_2)
        FUNC_0(VAR_0->Input, (UCHAR *)VAR_1, VAR_2);

 return (0);

}
