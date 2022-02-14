
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int size_in_bits; } ;
typedef TYPE_1__ PutBitContext ;
typedef int GetBitContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int const*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(PutBitContext *VAR_0,
                      const uint8_t *VAR_1, int VAR_2,
                      GetBitContext *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;

    VAR_6 = VAR_5 = FUNC_3(VAR_3);
    if (VAR_6 < VAR_4)
        return;
    if (VAR_4 > VAR_0->size_in_bits - FUNC_5(VAR_0))
        return;
    VAR_6 &= 7; VAR_5 >>= 3;
    if ((VAR_6 = FUNC_0(VAR_6, VAR_4)) > 0)
        FUNC_4(VAR_0, VAR_6, FUNC_2(VAR_3, VAR_6));
    FUNC_1(VAR_0, VAR_1 + VAR_2 - VAR_5,
                 FUNC_0(VAR_4 - VAR_6, VAR_5 << 3));
}
