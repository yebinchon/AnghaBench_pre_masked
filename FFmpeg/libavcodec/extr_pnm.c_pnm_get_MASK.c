
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_3__ {int const* bytestream; int const* bytestream_end; } ;
typedef TYPE_1__ PNMContext ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(PNMContext *VAR_0, char *VAR_1, int VAR_2)
{
    char *VAR_3;
    int VAR_4;
    uint8_t *VAR_5 = VAR_0->bytestream;
    const uint8_t *VAR_6 = VAR_0->bytestream_end;


    while (VAR_5 < VAR_6) {
        VAR_4 = *VAR_5++;
        if (VAR_4 == '#') {
            while (VAR_4 != '\n' && VAR_5 < VAR_6) {
                VAR_4 = *VAR_5++;
            }
        } else if (!FUNC_0(VAR_4)) {
            break;
        }
    }

    VAR_3 = VAR_1;
    while (VAR_5 < VAR_6 && !FUNC_0(VAR_4) && (VAR_3 - VAR_1) < VAR_2 - 1) {
        *VAR_3++ = VAR_4;
        VAR_4 = *VAR_5++;
    }
    *VAR_3 = '\0';
    VAR_0->bytestream = VAR_5;
}
