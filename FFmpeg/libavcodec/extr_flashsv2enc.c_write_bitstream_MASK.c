
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {double total_bits; } ;
typedef TYPE_1__ FlashSV2Context ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int const*,int,int) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int FUNC_4(FlashSV2Context * VAR_0, const uint8_t * VAR_1, int VAR_2,
                           uint8_t * VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;

    VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5);
    if (VAR_7)
        return VAR_7;
    VAR_7 = FUNC_0(VAR_0, VAR_5);
    if (VAR_7)
        return VAR_7;

    VAR_7 = FUNC_3(VAR_0, VAR_3, VAR_4);
    if (VAR_7 < 0) {
        return VAR_7;
    } else {
        VAR_6 = VAR_7;
    }
    VAR_7 = FUNC_2(VAR_0, VAR_3 + VAR_6, VAR_4 - VAR_6);
    if (VAR_7 < 0)
        return VAR_7;
    VAR_6 += VAR_7;

    VAR_0->total_bits += ((double) VAR_6) * 8.0;


    return VAR_6;
}
