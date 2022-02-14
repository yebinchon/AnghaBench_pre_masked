
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct SwsContext {int dummy; } ;


 int FUNC_0 (struct SwsContext*,int const* const*,int*,int ,int const,int**,int*) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, const int VAR_1,
                 const uint8_t *VAR_2, const int VAR_3,
                 const int VAR_4, const int VAR_5, const int VAR_6,
                 struct SwsContext *VAR_7)
{
    int VAR_8, VAR_9;
    int VAR_10, VAR_11;
    int VAR_12;

    const uint8_t* const VAR_13[4] = {VAR_2};
    uint8_t *VAR_14[4] = {VAR_0};
    int VAR_15[4] = {VAR_3};
    int VAR_16[4] = {VAR_1};

    FUNC_0(VAR_7, VAR_13, VAR_15,
              0, VAR_5, VAR_14, VAR_16);

    if (VAR_6 > 0) {
        for (VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9) {
            for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
                VAR_10 = VAR_2[VAR_8 + VAR_9 * VAR_3];
                VAR_11 = VAR_0[VAR_8 + VAR_9 * VAR_1];
                VAR_12 = VAR_10 - VAR_11;

                if (VAR_12 > 0) {
                    if (VAR_12 > 2 * VAR_6)
                        VAR_0[VAR_8 + VAR_9 * VAR_1] = VAR_10;
                    else if (VAR_12 > VAR_6)

                        VAR_0[VAR_8 + VAR_9 * VAR_1] = VAR_10 - VAR_6;
                } else {
                    if (-VAR_12 > 2 * VAR_6)
                        VAR_0[VAR_8 + VAR_9 * VAR_1] = VAR_10;
                    else if (-VAR_12 > VAR_6)

                        VAR_0[VAR_8 + VAR_9 * VAR_1] = VAR_10 + VAR_6;
                }
            }
        }
    } else if (VAR_6 < 0) {
        for (VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9) {
            for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
                VAR_10 = VAR_2[VAR_8 + VAR_9 * VAR_3];
                VAR_11 = VAR_0[VAR_8 + VAR_9 * VAR_1];
                VAR_12 = VAR_10 - VAR_11;

                if (VAR_12 > 0) {
                    if (VAR_12 <= -VAR_6)
                        VAR_0[VAR_8 + VAR_9 * VAR_1] = VAR_10;
                    else if (VAR_12 <= -2 * VAR_6)

                        VAR_0[VAR_8 + VAR_9 * VAR_1] = VAR_11 - VAR_6;
                } else {
                    if (VAR_12 >= VAR_6)
                        VAR_0[VAR_8 + VAR_9 * VAR_1] = VAR_10;
                    else if (VAR_12 >= 2 * VAR_6)

                        VAR_0[VAR_8 + VAR_9 * VAR_1] = VAR_11 + VAR_6;
                }
            }
        }
    }
}
