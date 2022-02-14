
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int ,char*,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_2,
                                       const uint8_t *VAR_3, int VAR_4,
                                       unsigned *VAR_5, unsigned *VAR_6)
{
    unsigned VAR_7;

    if (VAR_4 < 2) {
        FUNC_1(VAR_2, VAR_1, "Invalid %d bytes packet\n", VAR_4);
        return VAR_0;
    }

    *VAR_6 = !!(VAR_3[0] & 0x80);
    if (!(VAR_3[0] & 0x40)) {
        VAR_7 = 1;
        *VAR_5 = VAR_3[0] & ~0xc0;
    } else {
        VAR_7 = 2;
        *VAR_5 = FUNC_0(VAR_3) & ~0xc000;
    }

    return VAR_7;
}
