
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int PVOID ;
typedef int PSDevice ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (int ,int,int ,int ,int*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int ,int ,int ,int ,int,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5 (PVOID VAR_16, BYTE VAR_17)
{
    PSDevice VAR_18 = (PSDevice) VAR_16;
    BYTE VAR_19[4] = {0,0,0,0};
    BYTE VAR_20[4] = {0,0,0,0};
    WORD VAR_21[4] = {0,0,0,0};
    BYTE VAR_22[9] = {0,0,0,0,0,0,0,0,0};
    BYTE VAR_23[9] = {0,0,0,0,0,0,0,0,0};
    BYTE VAR_24[34];
    int VAR_25;


    FUNC_0(VAR_18,
                         14,
                         FUNC_3(VAR_18, VAR_7),
                         VAR_3,
                         &VAR_21[0],
                         &VAR_19[0],
                         &VAR_20[0]
    );


    FUNC_0(VAR_18,
                         14,
                         FUNC_3(VAR_18, VAR_9),
                         VAR_3,
                         &VAR_21[1],
                         &VAR_19[1],
                         &VAR_20[1]
    );


    FUNC_0(VAR_18,
                         14,
                         FUNC_3(VAR_18, VAR_13),
                         VAR_3,
                         &VAR_21[2],
                         &VAR_19[2],
                         &VAR_20[2]
    );


    FUNC_0(VAR_18,
                         14,
                         FUNC_3(VAR_18, VAR_4),
                         VAR_3,
                         &VAR_21[3],
                         &VAR_19[3],
                         &VAR_20[3]
    );


    FUNC_1 (VAR_14,
                                 VAR_17,
                                 &VAR_22[0],
                                 &VAR_23[0]);


    FUNC_1 (VAR_15,
                                 VAR_17,
                                 &VAR_22[1],
                                 &VAR_23[1]);


    FUNC_1 (VAR_5,
                                 VAR_17,
                                 &VAR_22[2],
                                 &VAR_23[2]);


    FUNC_1 (VAR_6,
                                 VAR_17,
                                 &VAR_22[3],
                                 &VAR_23[3]);


    FUNC_1 (VAR_8,
                                 VAR_17,
                                 &VAR_22[4],
                                 &VAR_23[4]);


    FUNC_1 (FUNC_4(VAR_18, VAR_10),
                                 VAR_17,
                                 &VAR_22[5],
                                 &VAR_23[5]);


    FUNC_1 (FUNC_4(VAR_18, VAR_11),
                                 VAR_17,
                                 &VAR_22[6],
                                 &VAR_23[6]);


    FUNC_1 (FUNC_4(VAR_18, VAR_12),
                                 VAR_17,
                                 &VAR_22[7],
                                 &VAR_23[7]);


    FUNC_1 (FUNC_4(VAR_18, VAR_12),
                                 VAR_17,
                                 &VAR_22[8],
                                 &VAR_23[8]);

    VAR_24[0] = (BYTE)(VAR_21[0]&0xFF);
    VAR_24[1] = (BYTE)(VAR_21[0]>>8);
    VAR_24[2] = VAR_20[0];
    VAR_24[3] = VAR_19[0];

    VAR_24[4] = (BYTE)(VAR_21[1]&0xFF);
    VAR_24[5] = (BYTE)(VAR_21[1]>>8);
    VAR_24[6] = VAR_20[1];
    VAR_24[7] = VAR_19[1];

    VAR_24[8] = (BYTE)(VAR_21[2]&0xFF);
    VAR_24[9] = (BYTE)(VAR_21[2]>>8);
    VAR_24[10] = VAR_20[2];
    VAR_24[11] = VAR_19[2];

    VAR_24[12] = (BYTE)(VAR_21[3]&0xFF);
    VAR_24[13] = (BYTE)(VAR_21[3]>>8);
    VAR_24[14] = VAR_20[3];
    VAR_24[15] = VAR_19[3];

    for(VAR_25=0;VAR_25<9;VAR_25++) {
        VAR_24[16+VAR_25*2] = VAR_22[VAR_25];
        VAR_24[16+VAR_25*2+1] = VAR_23[VAR_25];
    }


    FUNC_2(VAR_18,
                        VAR_2,
                        VAR_0,
                        VAR_1,
                        34,
                        &VAR_24[0]);

}
