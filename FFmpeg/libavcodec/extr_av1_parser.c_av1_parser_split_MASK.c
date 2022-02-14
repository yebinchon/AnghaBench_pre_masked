
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ type; } ;
typedef int AVCodecContext ;
typedef TYPE_1__ AV1OBU ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int const*,int,int *) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_2,
                            const uint8_t *VAR_3, int VAR_4)
{
    AV1OBU VAR_5;
    const uint8_t *VAR_6 = VAR_3, *VAR_7 = VAR_3 + VAR_4;

    while (VAR_6 < VAR_7) {
        int VAR_8 = FUNC_0(&VAR_5, VAR_6, VAR_4, VAR_2);
        if (VAR_8 < 0)
            break;

        if (VAR_5.type == VAR_1 ||
            VAR_5.type == VAR_0) {
            return VAR_6 - VAR_3;
        }
        VAR_6 += VAR_8;
        VAR_4 -= VAR_8;
    }

    return 0;
}
