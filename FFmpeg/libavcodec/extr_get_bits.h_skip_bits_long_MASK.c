
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int index; scalar_t__ size_in_bits_plus8; } ;
typedef TYPE_1__ GetBitContext ;


 scalar_t__ FUNC_0 (int,int,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static inline void FUNC_2(GetBitContext *VAR_0, int VAR_1)
{






    VAR_0->index += FUNC_0(VAR_1, -VAR_0->index, VAR_0->size_in_bits_plus8 - VAR_0->index);


}
