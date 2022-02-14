
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_4__ {int got_error; } ;
typedef TYPE_1__ RangeCoder ;
typedef int DCTBlockCoder ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,int*,int,int) ;
 int FUNC_1 (int *,int,int*) ;

__attribute__((used)) static void FUNC_2(RangeCoder *VAR_0, DCTBlockCoder *VAR_1,
                             uint8_t *VAR_2, ptrdiff_t VAR_3, int VAR_4,
                             int *VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;
    int VAR_10, VAR_11;
    int VAR_12 = VAR_4 >> 3;

    VAR_10 = VAR_6 * VAR_12;
    VAR_11 = VAR_7 * VAR_12;

    for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
        for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++) {
            if (FUNC_0(VAR_0, VAR_1, VAR_5, VAR_10 + VAR_8, VAR_11 + VAR_9)) {
                VAR_0->got_error = 1;
                return;
            }
            FUNC_1(VAR_2 + VAR_8 * 8, VAR_3, VAR_5);
        }
        VAR_2 += 8 * VAR_3;
    }
}
