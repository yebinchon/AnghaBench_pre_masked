
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ byRFType; scalar_t__ byBBType; int* abyBBVGA; int byPacketType; } ;
typedef int PVOID ;
typedef TYPE_1__* PSDevice ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5 (PVOID VAR_5)
{
    PSDevice VAR_6 = (PSDevice) VAR_5;


    if( (VAR_6->byRFType == VAR_4 ) && (VAR_6->byBBType == VAR_0) )
    {
        FUNC_3(VAR_6, VAR_2);
    }
    else
    {
        FUNC_3(VAR_6, VAR_6->byBBType);
    }
    VAR_6->byPacketType = FUNC_0(VAR_6);

    if (VAR_6->byBBType == VAR_0) {
        FUNC_2(VAR_6, VAR_3, 0x88, 0x03);
    } else if (VAR_6->byBBType == VAR_1) {
        FUNC_2(VAR_6, VAR_3, 0x88, 0x02);
    } else if (VAR_6->byBBType == VAR_2) {
        FUNC_2(VAR_6, VAR_3, 0x88, 0x08);
    }

    FUNC_4(VAR_6);
    FUNC_1(VAR_6, (BYTE)VAR_6->byBBType);

    if ( VAR_6->byBBType == VAR_0 ) {

        if (VAR_6->byRFType == VAR_4) {
            VAR_6->abyBBVGA[0] = 0x20;
            FUNC_2(VAR_6, VAR_3, 0xE7, VAR_6->abyBBVGA[0]);
        }
        VAR_6->abyBBVGA[2] = 0x10;
        VAR_6->abyBBVGA[3] = 0x10;
    } else {

        if (VAR_6->byRFType == VAR_4) {
            VAR_6->abyBBVGA[0] = 0x1C;
            FUNC_2(VAR_6, VAR_3, 0xE7, VAR_6->abyBBVGA[0]);
        }
        VAR_6->abyBBVGA[2] = 0x0;
        VAR_6->abyBBVGA[3] = 0x0;
    }
}
