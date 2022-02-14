
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVXTEA ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(AVXTEA *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2,
                      const uint8_t *VAR_3, int VAR_4, uint8_t *VAR_5, int VAR_6,
                      const char *VAR_7,
                      void (*VAR_8)(AVXTEA *, uint8_t *, const uint8_t *, int, uint8_t *, int))
{
    VAR_8(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5, VAR_6);
    if (FUNC_1(VAR_1, VAR_3, 8*VAR_4)) {
        int VAR_9;
        FUNC_2("%s failed\ngot      ", VAR_7);
        for (VAR_9 = 0; VAR_9 < 8*VAR_4; VAR_9++)
            FUNC_2("%02x ", VAR_1[VAR_9]);
        FUNC_2("\nexpected ");
        for (VAR_9 = 0; VAR_9 < 8*VAR_4; VAR_9++)
            FUNC_2("%02x ", VAR_3[VAR_9]);
        FUNC_2("\n");
        FUNC_0(1);
    }
}
