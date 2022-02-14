
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int upper; int lower; } ;
struct TYPE_13__ {int val; TYPE_1__ val32; } ;
typedef TYPE_4__ u64bit ;
struct TYPE_14__ {int max_cmd_sgentries; int pdev; } ;
typedef TYPE_5__ ctlr_info_t ;
struct TYPE_12__ {int SGTotal; } ;
struct TYPE_16__ {TYPE_6__* SG; TYPE_3__ Header; } ;
struct TYPE_11__ {int upper; int lower; } ;
struct TYPE_15__ {int Len; TYPE_2__ Addr; } ;
typedef TYPE_6__ SGDescriptor_struct ;
typedef TYPE_7__ CommandList_struct ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(ctlr_info_t *VAR_1, CommandList_struct *VAR_2)
{
 SGDescriptor_struct *VAR_3;
 u64bit VAR_4;

 if (VAR_2->Header.SGTotal <= VAR_1->max_cmd_sgentries)
  return;

 VAR_3 = &VAR_2->SG[VAR_1->max_cmd_sgentries - 1];
 VAR_4 = VAR_3->Addr.lower;
 VAR_4 = VAR_3->Addr.upper;
 FUNC_0(VAR_1->pdev, VAR_4, VAR_3->Len, VAR_0);
}
