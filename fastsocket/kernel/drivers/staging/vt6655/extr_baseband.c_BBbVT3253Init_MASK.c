
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ byRFType; scalar_t__ byLocalID; int* abyBBVGA; int* ldBmThreshold; int bUpdateBBVGA; scalar_t__ PortOffset; } ;
typedef TYPE_1__* PSDevice ;
typedef scalar_t__ DWORD_PTR ;
typedef scalar_t__ BYTE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int) ;
 int** VAR_19 ;
 int** VAR_20 ;
 int** VAR_21 ;
 int** VAR_22 ;
 int** VAR_23 ;
 int** VAR_24 ;

BOOL FUNC_5 (PSDevice VAR_25)
{
    BOOL VAR_26 = VAR_18;
    int VAR_27;
    DWORD_PTR VAR_28 = VAR_25->PortOffset;
    BYTE VAR_29 = VAR_25->byRFType;
    BYTE VAR_30 = VAR_25->byLocalID;

    if (VAR_29 == VAR_14) {
        if (VAR_30 <= VAR_10) {
            for (VAR_27 = 0; VAR_27 < VAR_6; VAR_27++) {
                VAR_26 &= FUNC_0(VAR_28,VAR_24[VAR_27][0],VAR_24[VAR_27][1]);
            }
        } else {
            for (VAR_27 = 0; VAR_27 < VAR_4; VAR_27++) {
                VAR_26 &= FUNC_0(VAR_28,VAR_22[VAR_27][0],VAR_22[VAR_27][1]);
            }
            for (VAR_27 = 0; VAR_27 < VAR_2; VAR_27++) {
             VAR_26 &= FUNC_0(VAR_28,VAR_20[VAR_27][0],VAR_20[VAR_27][1]);
            }
            FUNC_4(VAR_28 + VAR_8, 0x23);
            FUNC_1(VAR_28, VAR_9, VAR_0);
        }
        VAR_25->abyBBVGA[0] = 0x18;
        VAR_25->abyBBVGA[1] = 0x0A;
        VAR_25->abyBBVGA[2] = 0x0;
        VAR_25->abyBBVGA[3] = 0x0;
        VAR_25->ldBmThreshold[0] = -70;
        VAR_25->ldBmThreshold[1] = -50;
        VAR_25->ldBmThreshold[2] = 0;
        VAR_25->ldBmThreshold[3] = 0;
    } else if ((VAR_29 == VAR_11) || (VAR_29 == VAR_13) ) {
        for (VAR_27 = 0; VAR_27 < VAR_3; VAR_27++) {
         VAR_26 &= FUNC_0(VAR_28,VAR_21[VAR_27][0],VAR_21[VAR_27][1]);
     }
        for (VAR_27 = 0; VAR_27 < VAR_1; VAR_27++) {
         VAR_26 &= FUNC_0(VAR_28,VAR_19[VAR_27][0],VAR_19[VAR_27][1]);
     }
        VAR_25->abyBBVGA[0] = 0x1C;
        VAR_25->abyBBVGA[1] = 0x10;
        VAR_25->abyBBVGA[2] = 0x0;
        VAR_25->abyBBVGA[3] = 0x0;
        VAR_25->ldBmThreshold[0] = -70;
        VAR_25->ldBmThreshold[1] = -48;
        VAR_25->ldBmThreshold[2] = 0;
        VAR_25->ldBmThreshold[3] = 0;
    } else if (VAR_29 == VAR_15) {
        for (VAR_27 = 0; VAR_27 < VAR_5; VAR_27++) {
             VAR_26 &= FUNC_0(VAR_28,VAR_23[VAR_27][0],VAR_23[VAR_27][1]);
     }
        for (VAR_27 = 0; VAR_27 < VAR_1; VAR_27++) {
         VAR_26 &= FUNC_0(VAR_28,VAR_19[VAR_27][0],VAR_19[VAR_27][1]);
     }
        FUNC_3(VAR_28 + VAR_8, 0x23);
        FUNC_1(VAR_28, VAR_9, VAR_0);

        VAR_25->abyBBVGA[0] = 0x14;
        VAR_25->abyBBVGA[1] = 0x0A;
        VAR_25->abyBBVGA[2] = 0x0;
        VAR_25->abyBBVGA[3] = 0x0;
        VAR_25->ldBmThreshold[0] = -60;
        VAR_25->ldBmThreshold[1] = -50;
        VAR_25->ldBmThreshold[2] = 0;
        VAR_25->ldBmThreshold[3] = 0;
    } else if (VAR_29 == VAR_16) {
        for (VAR_27 = 0; VAR_27 < VAR_5; VAR_27++) {
            VAR_26 &= FUNC_0(VAR_28,VAR_23[VAR_27][0],VAR_23[VAR_27][1]);
     }





        VAR_26 &= FUNC_0(VAR_28,0xd7,0x06);


        VAR_26 &= FUNC_0(VAR_28,0x90,0x20);
        VAR_26 &= FUNC_0(VAR_28,0x97,0xeb);



        VAR_26 &= FUNC_0(VAR_28,0xa6,0x00);
        VAR_26 &= FUNC_0(VAR_28,0xa8,0x30);

        VAR_26 &= FUNC_0(VAR_28,0xb0,0x58);

        for (VAR_27 = 0; VAR_27 < VAR_1; VAR_27++) {
         VAR_26 &= FUNC_0(VAR_28,VAR_19[VAR_27][0],VAR_19[VAR_27][1]);
     }



        VAR_25->abyBBVGA[0] = 0x14;
        VAR_25->abyBBVGA[1] = 0x0A;
        VAR_25->abyBBVGA[2] = 0x0;
        VAR_25->abyBBVGA[3] = 0x0;
        VAR_25->ldBmThreshold[0] = -60;
        VAR_25->ldBmThreshold[1] = -50;
        VAR_25->ldBmThreshold[2] = 0;
        VAR_25->ldBmThreshold[3] = 0;


    } else if (VAR_29 == VAR_17) {
        for (VAR_27 = 0; VAR_27 < VAR_3; VAR_27++) {
         VAR_26 &= FUNC_0(VAR_28,VAR_21[VAR_27][0],VAR_21[VAR_27][1]);
     }
        for (VAR_27 = 0; VAR_27 < VAR_1; VAR_27++) {
         VAR_26 &= FUNC_0(VAR_28,VAR_19[VAR_27][0],VAR_19[VAR_27][1]);
     }
        VAR_25->abyBBVGA[0] = 0x1C;
        VAR_25->abyBBVGA[1] = 0x10;
        VAR_25->abyBBVGA[2] = 0x0;
        VAR_25->abyBBVGA[3] = 0x0;
        VAR_25->ldBmThreshold[0] = -70;
        VAR_25->ldBmThreshold[1] = -48;
        VAR_25->ldBmThreshold[2] = 0;
        VAR_25->ldBmThreshold[3] = 0;

        FUNC_2(VAR_28);

    } else if (VAR_29 == VAR_12) {
        for (VAR_27 = 0; VAR_27 < VAR_3; VAR_27++) {
         VAR_26 &= FUNC_0(VAR_28,VAR_21[VAR_27][0],VAR_21[VAR_27][1]);
     }







        VAR_26 &= FUNC_0(VAR_28,0xd7,0x06);


        for (VAR_27 = 0; VAR_27 < VAR_1; VAR_27++) {
         VAR_26 &= FUNC_0(VAR_28,VAR_19[VAR_27][0],VAR_19[VAR_27][1]);
     }
        VAR_25->abyBBVGA[0] = 0x1C;
        VAR_25->abyBBVGA[1] = 0x10;
        VAR_25->abyBBVGA[2] = 0x0;
        VAR_25->abyBBVGA[3] = 0x0;
        VAR_25->ldBmThreshold[0] = -70;
        VAR_25->ldBmThreshold[1] = -48;
        VAR_25->ldBmThreshold[2] = 0;
        VAR_25->ldBmThreshold[3] = 0;

    } else {

     VAR_25->bUpdateBBVGA = VAR_7;
        VAR_25->abyBBVGA[0] = 0x1C;
    }

    if (VAR_30 > VAR_10) {
        FUNC_0(VAR_28, 0x04, 0x7F);
        FUNC_0(VAR_28, 0x0D, 0x01);
    }

    return VAR_26;
}
