
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef size_t UINT16 ;
typedef int BOOLEAN ;


 int FUNC_0 (int*,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,size_t,int ,int ,int*) ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int) ;

BOOLEAN FUNC_6 (UINT32 VAR_9, UINT16 VAR_10, UINT16 VAR_11,
                         UINT8 VAR_12[], UINT8 VAR_13[], UINT8 *VAR_14[])
{

    UINT16 VAR_15;
    UINT8 *VAR_16;
    UINT8 *VAR_17;
    UINT8 *VAR_18;
    BOOLEAN VAR_19;

    if ((VAR_16 = (UINT8 *) FUNC_5(sizeof(UINT8) * VAR_2 * 2)) == ((void*)0)) {
        FUNC_2("SDP_AddSequence cannot get a buffer!\n");
        return (VAR_1);
    }
    VAR_17 = VAR_16;


    for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
        VAR_18 = VAR_17;
        switch (VAR_13[VAR_15]) {
        case 1:
            FUNC_3 (VAR_17, (VAR_12[VAR_15] << 3) | VAR_6);
            break;
        case 2:
            FUNC_3 (VAR_17, (VAR_12[VAR_15] << 3) | VAR_8);
            break;
        case 4:
            FUNC_3 (VAR_17, (VAR_12[VAR_15] << 3) | VAR_4);
            break;
        case 8:
            FUNC_3 (VAR_17, (VAR_12[VAR_15] << 3) | VAR_3);
            break;
        case 16:
            FUNC_3 (VAR_17, (VAR_12[VAR_15] << 3) | VAR_7);
            break;
        default:
            FUNC_3 (VAR_17, (VAR_12[VAR_15] << 3) | VAR_5);
            FUNC_3 (VAR_17, VAR_13[VAR_15]);
            break;
        }

        FUNC_0 (VAR_17, VAR_14[VAR_15], VAR_13[VAR_15]);

        if (VAR_17 - VAR_16 > VAR_2) {

            VAR_17 = VAR_18;
            if (VAR_18 == VAR_16) {

                FUNC_2 ("SDP_AddSequence - too long(attribute is not added)!!\n");
                FUNC_4(VAR_16);
                return VAR_1;
            } else {
                FUNC_2 ("SDP_AddSequence - too long, add %d elements of %d\n", VAR_15, VAR_11);
            }
            break;
        }
    }
    VAR_19 = FUNC_1 (VAR_9, VAR_10, VAR_0, (UINT32) (VAR_17 - VAR_16), VAR_16);
    FUNC_4(VAR_16);
    return VAR_19;



}
