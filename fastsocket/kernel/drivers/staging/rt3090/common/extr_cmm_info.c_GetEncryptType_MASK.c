
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* PSTRING ;
typedef scalar_t__ CHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

PSTRING FUNC_0(CHAR VAR_5)
{
    if(VAR_5 == VAR_3)
        return "NONE";
    if(VAR_5 == VAR_4)
 return "WEP";
    if(VAR_5 == VAR_0)
 return "TKIP";
    if(VAR_5 == VAR_1)
 return "AES";
 if(VAR_5 == VAR_2)
 return "TKIPAES";
    else
 return "UNKNOW";
}
