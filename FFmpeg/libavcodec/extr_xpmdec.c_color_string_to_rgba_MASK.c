
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int color_name ;
struct TYPE_3__ {int rgb_color; } ;
typedef TYPE_1__ ColorEntry ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (char*,int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char const) ;
 int FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static uint32_t FUNC_6(const char *VAR_2, int VAR_3)
{
    uint32_t VAR_4 = 0xFF000000;
    const ColorEntry *VAR_5;
    char VAR_6[100];

    VAR_3 = FUNC_1(FUNC_0(VAR_3, 0), sizeof(VAR_6) - 1);

    if (*VAR_2 == '#') {
        VAR_2++;
        VAR_3--;
        if (VAR_3 == 3) {
            VAR_4 |= (FUNC_4(VAR_2[2]) << 4) |
                   (FUNC_4(VAR_2[1]) << 12) |
                   (FUNC_4(VAR_2[0]) << 20);
        } else if (VAR_3 == 4) {
            VAR_4 = (FUNC_4(VAR_2[3]) << 4) |
                   (FUNC_4(VAR_2[2]) << 12) |
                   (FUNC_4(VAR_2[1]) << 20) |
                   (FUNC_4(VAR_2[0]) << 28);
        } else if (VAR_3 == 6) {
            VAR_4 |= FUNC_4(VAR_2[5]) |
                   (FUNC_4(VAR_2[4]) << 4) |
                   (FUNC_4(VAR_2[3]) << 8) |
                   (FUNC_4(VAR_2[2]) << 12) |
                   (FUNC_4(VAR_2[1]) << 16) |
                   (FUNC_4(VAR_2[0]) << 20);
        } else if (VAR_3 == 8) {
            VAR_4 = FUNC_4(VAR_2[7]) |
                   (FUNC_4(VAR_2[6]) << 4) |
                   (FUNC_4(VAR_2[5]) << 8) |
                   (FUNC_4(VAR_2[4]) << 12) |
                   (FUNC_4(VAR_2[3]) << 16) |
                   (FUNC_4(VAR_2[2]) << 20) |
                   (FUNC_4(VAR_2[1]) << 24) |
                   (FUNC_4(VAR_2[0]) << 28);
        }
    } else {
        FUNC_5(VAR_6, VAR_2, VAR_3);
        VAR_6[VAR_3] = '\0';

        VAR_5 = FUNC_3(VAR_6,
                        VAR_0,
                        FUNC_2(VAR_0),
                        sizeof(ColorEntry),
                        VAR_1);

        if (!VAR_5)
            return VAR_4;

        VAR_4 = VAR_5->rgb_color;
    }
    return VAR_4;
}
