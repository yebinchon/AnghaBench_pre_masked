
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ,char*,char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int const) ;

__attribute__((used)) static void FUNC_2 (const uint8_t *VAR_2, const char *VAR_3)
{
    char VAR_4[VAR_0 * 2 + 1];
    VAR_4[VAR_0 * 2] = 0;
    for (int VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
        FUNC_1(&VAR_4[VAR_5 * 2], "%02x", VAR_2[VAR_5]);
    }
    FUNC_0(VAR_1, "%s: %s", VAR_3, VAR_4);
}
