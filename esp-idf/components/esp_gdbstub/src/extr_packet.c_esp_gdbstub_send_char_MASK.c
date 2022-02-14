
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 char VAR_0 ;

void FUNC_1(char VAR_1)
{
    if (VAR_1 == '#' || VAR_1 == '$' || VAR_1 == '}' || VAR_1 == '*') {
        FUNC_0('}');
        FUNC_0(VAR_1 ^ 0x20);
        VAR_0 += (VAR_1 ^ 0x20) + '}';
    } else {
        FUNC_0(VAR_1);
        VAR_0 += VAR_1;
    }
}
