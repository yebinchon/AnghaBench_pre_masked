
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int VAR_0 ;



 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int,int*) ;
 int VAR_1 ;

__attribute__((used)) static UINT16 FUNC_3( UINT8 *VAR_2, UINT8 VAR_3 )
{
    static const UINT8 VAR_4[130] = {0xFB, 0x34, 0x9B, 0x5F, 0x80, 0x00, 0x00, 0x80,
                                                   0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
                                                  };
    UINT16 VAR_5 = 0;
    UINT32 VAR_6;
    BOOLEAN VAR_7;
    UINT8 VAR_8;

    switch (VAR_3) {
    case 129:
        FUNC_1 (VAR_5, VAR_2);
        break;
    case 128:
        FUNC_2 (VAR_6, VAR_2);
        if (VAR_6 < 0x10000) {
            VAR_5 = (UINT16) VAR_6;
        }
        break;
    case 130:

        VAR_7 = VAR_1;
        for (VAR_8 = 0; VAR_8 < 130 - 4; VAR_8++) {
            if (VAR_2[VAR_8] != VAR_4[VAR_8]) {
                VAR_7 = VAR_0;
                break;
            }
        }
        if (VAR_7) {
            if ((VAR_2[130 - 1] == 0) && (VAR_2[130 - 2] == 0)) {
                VAR_2 += (130 - 4);
                FUNC_1(VAR_5, VAR_2);
            }
        }
        break;
    default:
        FUNC_0("btm_convert_uuid_to_uuid16 invalid uuid size\n");
        break;
    }

    return ( VAR_5);
}
