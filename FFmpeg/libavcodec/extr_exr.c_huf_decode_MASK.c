
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_9__ {int const* buffer; } ;
struct TYPE_8__ {int len; int lit; size_t* p; } ;
typedef TYPE_1__ HufDec ;
typedef TYPE_2__ GetByteContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,int,TYPE_2__*) ;
 int FUNC_2 (int,int,int,int,TYPE_2__*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_3(const uint64_t *VAR_3, const HufDec *VAR_4,
                      GetByteContext *VAR_5, int VAR_6,
                      int VAR_7, int VAR_8, uint16_t *VAR_9)
{
    uint64_t VAR_10 = 0;
    uint16_t *VAR_11 = VAR_9;
    uint16_t *VAR_12 = VAR_9 + VAR_8;
    const uint8_t *VAR_13 = VAR_5->buffer + (VAR_6 + 7) / 8;
    uint8_t VAR_14;
    uint16_t VAR_15;
    int VAR_16, VAR_17 = 0;

    while (VAR_5->buffer < VAR_13) {
        FUNC_1(VAR_10, VAR_17, VAR_5);

        while (VAR_17 >= VAR_1) {
            const HufDec VAR_18 = VAR_4[(VAR_10 >> (VAR_17 - VAR_1)) & VAR_2];

            if (VAR_18.len) {
                VAR_17 -= VAR_18.len;
                FUNC_2(VAR_18.lit, VAR_7, VAR_10, VAR_17, VAR_5, VAR_9, VAR_12, VAR_11);
            } else {
                int VAR_19;

                if (!VAR_18.p)
                    return VAR_0;

                for (VAR_19 = 0; VAR_19 < VAR_18.lit; VAR_19++) {
                    int VAR_20 = VAR_3[VAR_18.p[VAR_19]] & 63;

                    while (VAR_17 < VAR_20 && FUNC_0(VAR_5) > 0)
                        FUNC_1(VAR_10, VAR_17, VAR_5);

                    if (VAR_17 >= VAR_20) {
                        if ((VAR_3[VAR_18.p[VAR_19]] >> 6) ==
                            ((VAR_10 >> (VAR_17 - VAR_20)) & ((1LL << VAR_20) - 1))) {
                            VAR_17 -= VAR_20;
                            FUNC_2(VAR_18.p[VAR_19], VAR_7, VAR_10, VAR_17, VAR_5, VAR_9, VAR_12, VAR_11);
                            break;
                        }
                    }
                }

                if (VAR_19 == VAR_18.lit)
                    return VAR_0;
            }
        }
    }

    VAR_16 = (8 - VAR_6) & 7;
    VAR_10 >>= VAR_16;
    VAR_17 -= VAR_16;

    while (VAR_17 > 0) {
        const HufDec VAR_21 = VAR_4[(VAR_10 << (VAR_1 - VAR_17)) & VAR_2];

        if (VAR_21.len && VAR_17 >= VAR_21.len) {
            VAR_17 -= VAR_21.len;
            FUNC_2(VAR_21.lit, VAR_7, VAR_10, VAR_17, VAR_5, VAR_9, VAR_12, VAR_11);
        } else {
            return VAR_0;
        }
    }

    if (VAR_9 - VAR_11 != VAR_8)
        return VAR_0;
    return 0;
}
