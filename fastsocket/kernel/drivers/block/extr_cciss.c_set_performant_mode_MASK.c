
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ transMethod; int* blockFetchTable; } ;
typedef TYPE_2__ ctlr_info_t ;
struct TYPE_6__ {size_t SGList; } ;
struct TYPE_8__ {int busaddr; TYPE_1__ Header; } ;
typedef TYPE_3__ CommandList_struct ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(ctlr_info_t *VAR_1, CommandList_struct *VAR_2)
{
 if (FUNC_0(VAR_1->transMethod == VAR_0))
  VAR_2->busaddr |= 1 | (VAR_1->blockFetchTable[VAR_2->Header.SGList] << 1);
}
