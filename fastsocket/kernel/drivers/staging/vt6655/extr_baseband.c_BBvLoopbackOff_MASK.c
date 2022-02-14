
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int byBBCRc9; int byBBCR88; int byBBCR09; int byBBCR4d; scalar_t__ uConnectionRate; int PortOffset; } ;
typedef TYPE_1__* PSDevice ;
typedef int DWORD_PTR ;
typedef int BYTE ;


 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int,int) ;
 scalar_t__ VAR_0 ;

void FUNC_2 (PSDevice VAR_1)
{
    BYTE VAR_2;
    DWORD_PTR VAR_3 = VAR_1->PortOffset;

    FUNC_1(VAR_3, 0xC9, VAR_1->byBBCRc9);
    FUNC_1(VAR_3, 0x88, VAR_1->byBBCR88);
    FUNC_1(VAR_3, 0x09, VAR_1->byBBCR09);
    FUNC_1(VAR_3, 0x4D, VAR_1->byBBCR4d);

    if (VAR_1->uConnectionRate <= VAR_0) {

        FUNC_0(VAR_3, 0x21, &VAR_2);
        FUNC_1(VAR_3, 0x21, (BYTE)(VAR_2 & 0xFE));
    }
    else {
        FUNC_0(VAR_3, 0x9A, &VAR_2);
        FUNC_1(VAR_3, 0x9A, (BYTE)(VAR_2 & 0xFE));
    }
    FUNC_0(VAR_3, 0x0E, &VAR_2);
    FUNC_1(VAR_3, 0x0E, (BYTE)(VAR_2 | 0x80));

}
