
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; scalar_t__ bits; } ;
typedef int GetBitContext ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(GetBitContext *VAR_1, int VAR_2)
{
    int VAR_3 = VAR_0[VAR_2].base;
    if (VAR_0[VAR_2].bits)
        VAR_3 += FUNC_0(VAR_1, VAR_0[VAR_2].bits);
    return VAR_3;
}
