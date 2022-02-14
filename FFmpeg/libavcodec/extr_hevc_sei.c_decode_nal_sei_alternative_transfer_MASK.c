
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int present; int preferred_transfer_characteristics; } ;
typedef TYPE_1__ HEVCSEIAlternativeTransfer ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(HEVCSEIAlternativeTransfer *VAR_0, GetBitContext *VAR_1)
{
    VAR_0->present = 1;
    VAR_0->preferred_transfer_characteristics = FUNC_0(VAR_1, 8);
    return 0;
}
