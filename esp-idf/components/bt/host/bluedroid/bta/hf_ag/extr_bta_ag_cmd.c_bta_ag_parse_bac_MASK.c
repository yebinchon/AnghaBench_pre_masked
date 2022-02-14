
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBTA_AG_SCB ;
typedef int tBTA_AG_PEER_CODEC ;
typedef int UINT16 ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;


 int FUNC_1 (char*) ;

__attribute__((used)) static tBTA_AG_PEER_CODEC FUNC_2(tBTA_AG_SCB *VAR_5, char *VAR_6)
{
    tBTA_AG_PEER_CODEC VAR_7 = VAR_2;
    UINT16 VAR_8;
    BOOLEAN VAR_9 = VAR_3;
    char *VAR_10;

    while (VAR_6) {

        for (VAR_10 = VAR_6; *VAR_10 != ',' && *VAR_10 != 0; VAR_10++);


        if (*VAR_10 != 0) {
            *VAR_10 = 0;
            VAR_9 = VAR_4;
        } else {
            VAR_9 = VAR_3;
        }
        VAR_8 = FUNC_1(VAR_6);
        switch(VAR_8) {
            case 129:
                VAR_7 |= VAR_0;
                break;

            case 128:
                VAR_7 |= VAR_1;
                break;

            default:
                FUNC_0("Unknown Codec UUID(%d) received", VAR_8);
                return VAR_2;
        }
        if (VAR_9) {
            VAR_6 = VAR_10 + 1;
        }
        else {
            break;
        }
    }
    return (VAR_7);
}
