
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char result; int step; } ;
typedef TYPE_1__ base64_encodestate ;


 void* FUNC_0 (char) ;




int FUNC_1(const char* VAR_0, int VAR_1, char* VAR_2, base64_encodestate* VAR_3)
{
    const char* VAR_4 = VAR_0;
    const char* const VAR_5 = VAR_0 + VAR_1;
    char* VAR_6 = VAR_2;
    char VAR_7;
    char VAR_8;

    VAR_7 = VAR_3->result;

    switch (VAR_3->step) {
        while (1) {
        case 130:
            if (VAR_4 == VAR_5) {
                VAR_3->result = VAR_7;
                VAR_3->step = 130;
                return VAR_6 - VAR_2;
            }
            VAR_8 = *VAR_4++;
            VAR_7 = (VAR_8 & 0x0fc) >> 2;
            *VAR_6++ = FUNC_0(VAR_7);
            VAR_7 = (VAR_8 & 0x003) << 4;
        case 129:
            if (VAR_4 == VAR_5) {
                VAR_3->result = VAR_7;
                VAR_3->step = 129;
                return VAR_6 - VAR_2;
            }
            VAR_8 = *VAR_4++;
            VAR_7 |= (VAR_8 & 0x0f0) >> 4;
            *VAR_6++ = FUNC_0(VAR_7);
            VAR_7 = (VAR_8 & 0x00f) << 2;
        case 128:
            if (VAR_4 == VAR_5) {
                VAR_3->result = VAR_7;
                VAR_3->step = 128;
                return VAR_6 - VAR_2;
            }
            VAR_8 = *VAR_4++;
            VAR_7 |= (VAR_8 & 0x0c0) >> 6;
            *VAR_6++ = FUNC_0(VAR_7);
            VAR_7 = (VAR_8 & 0x03f) >> 0;
            *VAR_6++ = FUNC_0(VAR_7);
        }
    }

    return VAR_6 - VAR_2;
}
