
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
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

PSTRING FUNC_0(CHAR VAR_10)
{
    if(VAR_10 == VAR_1)
 return "OPEN";
    if(VAR_10 == VAR_2)
 return "SHARED";
 if(VAR_10 == VAR_0)
 return "AUTOWEP";
    if(VAR_10 == VAR_3)
 return "WPA";
    if(VAR_10 == VAR_9)
 return "WPAPSK";
    if(VAR_10 == VAR_8)
 return "WPANONE";
    if(VAR_10 == VAR_6)
 return "WPA2";
    if(VAR_10 == VAR_7)
 return "WPA2PSK";
 if(VAR_10 == VAR_5)
 return "WPA1WPA2";
 if(VAR_10 == VAR_4)
 return "WPA1PSKWPA2PSK";

 return "UNKNOW";
}
