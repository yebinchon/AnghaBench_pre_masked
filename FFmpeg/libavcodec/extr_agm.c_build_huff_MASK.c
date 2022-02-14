
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int VLC ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int,int*,int,int,int *,int,int,int*,int,int,int ) ;
 int FUNC_2 (int const*,int *) ;

__attribute__((used)) static int FUNC_3(const uint8_t *VAR_1, VLC *VAR_2)
{
    uint32_t VAR_3[256];
    uint8_t VAR_4[256];
    uint8_t VAR_5[256];
    uint32_t VAR_6[256];
    int VAR_7 = 0;

    int VAR_8 = FUNC_2(VAR_1, VAR_3);
    if (VAR_8 < 0)
        return VAR_8;

    for (int VAR_9 = 0; VAR_9 < 256; VAR_9++) {
        if (VAR_1[VAR_9]) {
            VAR_4[VAR_7] = VAR_1[VAR_9];
            VAR_6[VAR_7] = VAR_3[VAR_9];
            VAR_5[VAR_7] = VAR_9;
            VAR_7++;
        }
    }

    FUNC_0(VAR_2);
    return FUNC_1(VAR_2, 13, VAR_7,
                              VAR_4, 1, 1,
                              VAR_6, 4, 4,
                              VAR_5, 1, 1,
                              VAR_0);
}
