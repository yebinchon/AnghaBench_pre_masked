
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;


 int VAR_0 ;



 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int*,scalar_t__) ;
 int FUNC_3 (char*,int*,scalar_t__) ;

void FUNC_4(uint8_t *VAR_1, uint16_t VAR_2)
{

    if (!VAR_1 || VAR_2 == 0) {
        return;
    }
    uint8_t VAR_3 = VAR_1[0];
    switch (VAR_3)
    {
        case 137: {
            uint32_t VAR_4 = (VAR_1[1]) | (VAR_1[2]<< 8) | (VAR_1[3]<< 16) | (VAR_1[4] << 24);
            uint32_t VAR_5 = VAR_2 - 5;
            uint8_t *VAR_6 = &VAR_1[5];
            FUNC_1(VAR_0, "recevice Notification Attributes response Command_id %d NotificationUID %d", VAR_3, VAR_4);
            while(VAR_5 > 0) {
                uint8_t VAR_7 = VAR_6[0];
                uint16_t VAR_8 = VAR_6[1] | (VAR_6[2] << 8);
                if(VAR_8 > (VAR_5 -3)) {
                    FUNC_0(VAR_0, "data error");
                    break;
                }
                switch (VAR_7)
                {
                    case 135:
                        FUNC_2("Identifier", &VAR_6[3], VAR_8);
                        break;
                    case 128:
                        FUNC_2("Title", &VAR_6[3], VAR_8);
                        break;
                    case 129:
                        FUNC_2("Subtitle", &VAR_6[3], VAR_8);
                        break;
                    case 133:
                        FUNC_2("Message", &VAR_6[3], VAR_8);
                        break;
                    case 132:
                        FUNC_2("MessageSize", &VAR_6[3], VAR_8);
                        break;
                    case 134:

                        FUNC_2("Date", &VAR_6[3], VAR_8);
                        break;
                    case 130:
                        FUNC_3("PActionLabel", &VAR_6[3], VAR_8);
                        break;
                    case 131:
                        FUNC_3("NActionLabel", &VAR_6[3], VAR_8);
                        break;
                    default:
                        FUNC_3("unknownAttributeID", &VAR_6[3], VAR_8);
                        break;
                }

                VAR_6 += (1 + 2 + VAR_8);
                VAR_5 -= (1 + 2 + VAR_8);
            }

            break;
        }
        case 138:
            FUNC_1(VAR_0, "recevice APP Attributes response");
            break;
        case 136:
            FUNC_1(VAR_0, "recevice Perform Notification Action");
            break;
        default:
            FUNC_1(VAR_0, "unknown Command ID");
            break;
    }
}
