
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static const char* FUNC_1(int VAR_4)
{
    static char VAR_5[512];

    if (VAR_4 == 0)
        return " no mods";

    VAR_5[0] = '\0';

    if (VAR_4 & VAR_2)
        FUNC_0(VAR_5, " shift");
    if (VAR_4 & VAR_1)
        FUNC_0(VAR_5, " control");
    if (VAR_4 & VAR_0)
        FUNC_0(VAR_5, " alt");
    if (VAR_4 & VAR_3)
        FUNC_0(VAR_5, " super");

    return VAR_5;
}
