
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_5__ {int bits; int table; } ;
typedef TYPE_1__ VLC ;
struct TYPE_6__ {int group_size; int num_coeffs; int bits; int is_signed; } ;
typedef int GetBitContext ;
typedef TYPE_2__ Atrac3pSpecCodeTab ;


 int FUNC_0 (unsigned int,int) ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(GetBitContext *VAR_0, const Atrac3pSpecCodeTab *VAR_1,
                              VLC *VAR_2, int16_t *VAR_3, const int VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8;
    int VAR_9 = VAR_1->group_size;
    int VAR_10 = VAR_1->num_coeffs;
    int VAR_11 = VAR_1->bits;
    int VAR_12 = VAR_1->is_signed;
    unsigned VAR_13;

    for (VAR_7 = 0; VAR_7 < VAR_4;) {
        if (VAR_9 == 1 || FUNC_1(VAR_0)) {
            for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
                VAR_13 = FUNC_2(VAR_0, VAR_2->table, VAR_2->bits, 1);

                for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++) {
                    VAR_8 = FUNC_0(VAR_13, VAR_11);
                    if (VAR_12)
                        VAR_8 = FUNC_3(VAR_8, VAR_11);
                    else if (VAR_8 && FUNC_1(VAR_0))
                        VAR_8 = -VAR_8;

                    VAR_3[VAR_7++] = VAR_8;
                    VAR_13 >>= VAR_11;
                }
            }
        } else
            VAR_7 += VAR_9 * VAR_10;
    }
}
