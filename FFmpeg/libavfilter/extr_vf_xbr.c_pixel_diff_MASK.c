
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static uint32_t FUNC_1(uint32_t VAR_3, uint32_t VAR_4, const uint32_t *VAR_5)
{





    uint32_t VAR_6 = VAR_5[VAR_3 & 0xffffff];
    uint32_t VAR_7 = VAR_5[VAR_4 & 0xffffff];

    return ((abs((int)(VAR_6 & 0xff0000)-(int)(VAR_7 & 0xff0000))) >> 16) +
           ((FUNC_0((int)(VAR_6 & 0x00ff00)-(int)(VAR_7 & 0x00ff00))) >> 8) +
            (FUNC_0((int)(VAR_6 & 0x0000ff)-(int)(VAR_7 & 0x0000ff)));
}
