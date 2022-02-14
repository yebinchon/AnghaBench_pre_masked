
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (char*,int,char*) ;

const char *FUNC_1(void)
{
    static char VAR_0[64];





    return FUNC_0(VAR_0, sizeof VAR_0,
                                   "ip route show default 2>/dev/null|awk '/default/{print $3}'");



}
