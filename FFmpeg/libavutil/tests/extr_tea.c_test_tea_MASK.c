
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct AVTEA {int dummy; } ;


 int FUNC_0 (struct AVTEA*,int*,int const*,int,int*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(struct AVTEA *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2,
                     const uint8_t *VAR_3, int VAR_4, uint8_t *VAR_5, int VAR_6,
                     const char *VAR_7)
{
    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5, VAR_6);
    if (FUNC_2(VAR_1, VAR_3, 8*VAR_4)) {
        int VAR_8;
        FUNC_3("%s failed\ngot      ", VAR_7);
        for (VAR_8 = 0; VAR_8 < 8*VAR_4; VAR_8++)
            FUNC_3("%02x ", VAR_1[VAR_8]);
        FUNC_3("\nexpected ");
        for (VAR_8 = 0; VAR_8 < 8*VAR_4; VAR_8++)
            FUNC_3("%02x ", VAR_3[VAR_8]);
        FUNC_3("\n");
        FUNC_1(1);
    }
}
