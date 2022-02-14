
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVFormatContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int,char*,char const*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int const*,int,int) ;

__attribute__((used)) static void FUNC_4(AVFormatContext *VAR_0, int VAR_1,
                    const char *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    char VAR_5[33];
    VAR_4 = FUNC_0(VAR_4, 16);
    if (FUNC_2() < VAR_1)
        return;
    FUNC_3(VAR_5, VAR_3, VAR_4, 1);
    VAR_5[VAR_4 << 1] = '\0';
    FUNC_1(VAR_0, VAR_1, "%s: %s\n", VAR_2, VAR_5);
}
