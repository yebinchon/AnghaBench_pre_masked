
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int buf ;
typedef int AVIOContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,char const*,char*) ;
 int FUNC_2 (char*,int const*,int,int ) ;

__attribute__((used)) static void FUNC_3(AVIOContext *VAR_0, const char *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    char VAR_4[150];
    VAR_3 = FUNC_0(sizeof(VAR_4) / 2 - 1, VAR_3);
    FUNC_2(VAR_4, VAR_2, VAR_3, 0);
    VAR_4[2 * VAR_3] = '\0';
    FUNC_1(VAR_0, "<param name=\"%s\" value=\"%s\" valuetype=\"data\"/>\n", VAR_1, VAR_4);
}
