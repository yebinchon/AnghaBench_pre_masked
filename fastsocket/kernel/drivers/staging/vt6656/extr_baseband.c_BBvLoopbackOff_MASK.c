
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int byBBCRc9; int byBBCR88; int byBBCR09; int byBBCR4d; scalar_t__ wCurrentRate; } ;
typedef TYPE_1__* PSDevice ;
typedef int BYTE ;


 int FUNC_0 (TYPE_1__*,int ,int,int*) ;
 int FUNC_1 (TYPE_1__*,int ,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_2 (PSDevice VAR_2)
{
    BYTE VAR_3;

    FUNC_1(VAR_2, VAR_0, 0xC9, VAR_2->byBBCRc9);
    FUNC_1(VAR_2, VAR_0, 0x88, VAR_2->byBBCR88);
    FUNC_1(VAR_2, VAR_0, 0x09, VAR_2->byBBCR09);
    FUNC_1(VAR_2, VAR_0, 0x4D, VAR_2->byBBCR4d);

    if (VAR_2->wCurrentRate <= VAR_1) {

        FUNC_0 (VAR_2, VAR_0, 0x21, &VAR_3);
        FUNC_1(VAR_2, VAR_0, 0x21, (BYTE)(VAR_3 & 0xFE));
    }
    else {
        FUNC_0 (VAR_2, VAR_0, 0x9A, &VAR_3);
        FUNC_1(VAR_2, VAR_0, 0x9A, (BYTE)(VAR_3 & 0xFE));
    }
    FUNC_0 (VAR_2, VAR_0, 0x0E, &VAR_3);
    FUNC_1(VAR_2, VAR_0, 0x0E, (BYTE)(VAR_3 | 0x80));

}
