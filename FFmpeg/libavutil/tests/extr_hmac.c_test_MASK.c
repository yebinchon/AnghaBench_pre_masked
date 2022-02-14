
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int buf ;
typedef int AVHMAC ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int,int const*,int,int*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(AVHMAC *VAR_1, const uint8_t *VAR_2, int VAR_3,
                 const uint8_t *VAR_4, int VAR_5)
{
    uint8_t VAR_6[VAR_0];
    int VAR_7, VAR_8;


    if (!VAR_2[VAR_3 - 1])
        VAR_3--;
    if (!VAR_4[VAR_5 - 1])
        VAR_5--;
    VAR_7 = FUNC_0(VAR_1, VAR_4, VAR_5, VAR_2, VAR_3, VAR_6, sizeof(VAR_6));
    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
        FUNC_1("%02x", VAR_6[VAR_8]);
    FUNC_1("\n");
}
