
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size_in_bits; } ;
typedef TYPE_1__ GetBitContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static inline int FUNC_2(GetBitContext *VAR_0, int VAR_1)
{
    if (VAR_1 < FUNC_0(VAR_0) || VAR_1 > VAR_0->size_in_bits)
        return -1;
    FUNC_1(VAR_0, VAR_1 - FUNC_0(VAR_0));
    return 0;
}
