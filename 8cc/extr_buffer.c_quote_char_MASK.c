
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;

char *FUNC_1(char VAR_0) {
    if (VAR_0 == '\\') return "\\\\";
    if (VAR_0 == '\'') return "\\'";
    return FUNC_0("%c", VAR_0);
}
