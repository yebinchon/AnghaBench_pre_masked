
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mfxU16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const char *FUNC_0(mfxU16 VAR_2)
{
    if (VAR_2 == VAR_1)
        return "ON";
    else if (VAR_2 == VAR_0)
        return "OFF";
    return "unknown";
}
