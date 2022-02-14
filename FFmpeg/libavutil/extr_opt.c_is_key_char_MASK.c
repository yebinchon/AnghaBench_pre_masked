
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char VAR_0)
{
    return (unsigned)((VAR_0 | 32) - 'a') < 26 ||
           (unsigned)(VAR_0 - '0') < 10 ||
           VAR_0 == '-' || VAR_0 == '_' || VAR_0 == '/' || VAR_0 == '.';
}
