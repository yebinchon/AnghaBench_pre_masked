
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int VLC ;
struct TYPE_3__ {int sym; int len; } ;
typedef TYPE_1__ HuffEntry ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int*,int,int,int*,int,int,int*,int,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(const uint8_t *VAR_2, VLC *VAR_3, int *VAR_4)
{
    int VAR_5;
    HuffEntry VAR_6[256];
    int VAR_7;
    uint32_t VAR_8[256];
    uint8_t VAR_9[256];
    uint8_t VAR_10[256];
    uint32_t VAR_11;

    *VAR_4 = -1;
    for (VAR_5 = 0; VAR_5 < 256; VAR_5++) {
        VAR_6[VAR_5].sym = VAR_5;
        VAR_6[VAR_5].len = *VAR_2++;
    }
    FUNC_1(VAR_6, 256, sizeof(*VAR_6), VAR_1);

    if (!VAR_6[0].len) {
        *VAR_4 = VAR_6[0].sym;
        return 0;
    }

    VAR_7 = 255;
    while (VAR_6[VAR_7].len == 255 && VAR_7)
        VAR_7--;

    if (VAR_6[VAR_7].len > 32)
        return -1;

    VAR_11 = 1;
    for (VAR_5 = VAR_7; VAR_5 >= 0; VAR_5--) {
        VAR_8[VAR_5] = VAR_11 >> (32 - VAR_6[VAR_5].len);
        VAR_9[VAR_5] = VAR_6[VAR_5].len;
        VAR_10[VAR_5] = VAR_6[VAR_5].sym;
        VAR_11 += 0x80000000u >> (VAR_6[VAR_5].len - 1);
    }

    return FUNC_0(VAR_3, VAR_0, VAR_7 + 1,
                              VAR_9, sizeof(*VAR_9), sizeof(*VAR_9),
                              VAR_8, sizeof(*VAR_8), sizeof(*VAR_8),
                              VAR_10, sizeof(*VAR_10), sizeof(*VAR_10), 0);
}
