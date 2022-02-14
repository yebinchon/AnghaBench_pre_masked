
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBTM_STATUS ;
typedef int UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;

tBTM_STATUS FUNC_2(UINT16 VAR_2)
{
    FUNC_0 ("BTM: BTM_WriteVoiceSettings: Settings: 0x%04x.", VAR_2);


    if (FUNC_1 ((UINT16)(VAR_2 & 0x03ff))) {
        return (VAR_1);
    }

    return (VAR_0);
}
