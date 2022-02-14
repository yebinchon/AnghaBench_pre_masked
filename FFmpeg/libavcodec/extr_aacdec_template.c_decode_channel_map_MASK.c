
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum RawDataBlockType { ____Placeholder_RawDataBlockType } RawDataBlockType ;
typedef enum ChannelPosition { ____Placeholder_ChannelPosition } ChannelPosition ;
typedef int GetBitContext ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(uint8_t VAR_2[][3],
                               enum ChannelPosition VAR_3,
                               GetBitContext *VAR_4, int VAR_5)
{
    while (VAR_5--) {
        enum RawDataBlockType VAR_6;
        switch (VAR_3) {
        case 130:
        case 132:
        case 128:
            VAR_6 = FUNC_2(VAR_4);
            break;
        case 131:
            FUNC_3(VAR_4);
            VAR_6 = VAR_0;
            break;
        case 129:
            VAR_6 = VAR_1;
            break;
        default:

            FUNC_0(0);
        }
        VAR_2[0][0] = VAR_6;
        VAR_2[0][1] = FUNC_1(VAR_4, 4);
        VAR_2[0][2] = VAR_3;
        VAR_2++;
    }
}
