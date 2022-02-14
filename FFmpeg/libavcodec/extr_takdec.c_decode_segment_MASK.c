
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct CParam {int init; unsigned int escape; unsigned int aescape; unsigned int scale; scalar_t__ bias; } ;
typedef int int8_t ;
typedef unsigned int int32_t ;
struct TYPE_3__ {int gb; } ;
typedef TYPE_1__ TAKDecContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (struct CParam*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 unsigned int FUNC_4 (int *,int,int) ;
 int FUNC_5 (unsigned int*,int ,int) ;
 struct CParam* VAR_1 ;

__attribute__((used)) static int FUNC_6(TAKDecContext *VAR_2, int8_t VAR_3, int32_t *VAR_4, int VAR_5)
{
    struct CParam VAR_6;
    GetBitContext *VAR_7 = &VAR_2->gb;
    int VAR_8;

    if (!VAR_3) {
        FUNC_5(VAR_4, 0, VAR_5 * sizeof(*VAR_4));
        return 0;
    }

    if (VAR_3 > FUNC_0(VAR_1))
        return VAR_0;
    VAR_6 = VAR_1[VAR_3 - 1];

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        unsigned VAR_9 = FUNC_3(VAR_7, VAR_6.init);
        if (VAR_9 >= VAR_6.escape && FUNC_2(VAR_7)) {
            VAR_9 |= 1 << VAR_6.init;
            if (VAR_9 >= VAR_6.aescape) {
                unsigned VAR_10 = FUNC_4(VAR_7, 1, 9);
                if (VAR_10 == 9) {
                    int VAR_11 = FUNC_1(VAR_7, 3);
                    if (VAR_11 > 0) {
                        if (VAR_11 == 7) {
                            VAR_11 += FUNC_1(VAR_7, 5);
                            if (VAR_11 > 29)
                                return VAR_0;
                        }
                        VAR_10 = FUNC_3(VAR_7, VAR_11) + 1;
                        VAR_9 += VAR_6.scale * VAR_10;
                    }
                    VAR_9 += VAR_6.bias;
                } else
                    VAR_9 += VAR_6.scale * VAR_10 - VAR_6.escape;
            } else
                VAR_9 -= VAR_6.escape;
        }
        VAR_4[VAR_8] = (VAR_9 >> 1) ^ -(VAR_9 & 1);
    }

    return 0;
}
