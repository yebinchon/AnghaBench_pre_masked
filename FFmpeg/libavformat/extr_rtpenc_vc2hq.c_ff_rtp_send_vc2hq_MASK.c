
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int AVFormatContext ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;





 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int,int ,int const*,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (int *,int const*,scalar_t__,int) ;

void FUNC_4(AVFormatContext *VAR_1, const uint8_t *VAR_2, int VAR_3, int VAR_4)
{
    const uint8_t *VAR_5 = VAR_2 + VAR_3;
    const uint8_t *VAR_6 = VAR_2;
    uint8_t VAR_7;
    uint32_t VAR_8;

    while (VAR_6 < VAR_5) {
        VAR_7 = VAR_6[4];
        VAR_8 = FUNC_0(&VAR_6[5]);

        switch (VAR_7) {


        case 128:
        case 131:
            FUNC_2(VAR_1, VAR_7, 0, VAR_6 + VAR_0, VAR_8 - VAR_0, 0, 0, 0);
            break;

        case 129:
            FUNC_3(VAR_1, VAR_6 + VAR_0, VAR_8 - VAR_0, VAR_4);
            break;

        case 132:
        case 130:
            break;
        default:
            FUNC_1(VAR_1, "VC-2 parse code %d", VAR_7);
            break;
        }
        VAR_6 += VAR_8;
    }
}
