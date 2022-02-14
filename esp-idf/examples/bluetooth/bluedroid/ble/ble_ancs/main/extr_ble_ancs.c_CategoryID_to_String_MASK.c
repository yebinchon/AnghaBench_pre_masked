
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
char *FUNC_0(uint8_t VAR_0)
{
    char *VAR_1 = ((void*)0);
    switch(VAR_0) {
        case 131:
            VAR_1 = "Other";
            break;
        case 135:
            VAR_1 = "IncomingCall";
            break;
        case 133:
            VAR_1 = "MissedCall";
            break;
        case 128:
            VAR_1 = "Voicemail";
            break;
        case 129:
            VAR_1 = "Social";
            break;
        case 130:
            VAR_1 = "Schedule";
            break;
        case 138:
            VAR_1 = "Email";
            break;
        case 132:
            VAR_1 = "News";
            break;
        case 136:
            VAR_1 = "HealthAndFitness";
            break;
        case 139:
            VAR_1 = "BusinessAndFinance";
            break;
        case 134:
            VAR_1 = "Location";
            break;
        case 137:
            VAR_1 = "Entertainment";
            break;
        default:
            VAR_1 = "Unknown CategoryID";
            break;
    }
    return VAR_1;
}
