
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int upper; int lower; } ;
struct TYPE_13__ {TYPE_2__ val32; int val; } ;
typedef TYPE_3__ u64bit ;
struct TYPE_14__ {int max_cmd_sgentries; int pdev; } ;
typedef TYPE_4__ ctlr_info_t ;
struct TYPE_16__ {TYPE_5__* SG; } ;
struct TYPE_11__ {int upper; int lower; } ;
struct TYPE_15__ {int Len; TYPE_1__ Addr; int Ext; } ;
typedef TYPE_5__ SGDescriptor_struct ;
typedef TYPE_6__ CommandList_struct ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_5__*,int,int ) ;

__attribute__((used)) static void FUNC_1(ctlr_info_t *VAR_2, CommandList_struct *VAR_3,
 SGDescriptor_struct *VAR_4, int VAR_5)
{
 SGDescriptor_struct *VAR_6;
 u64bit VAR_7;

 VAR_6 = &VAR_3->SG[VAR_2->max_cmd_sgentries - 1];
 VAR_6->Ext = VAR_0;
 VAR_6->Len = VAR_5;
 VAR_7 = FUNC_0(VAR_2->pdev, VAR_4, VAR_5,
    VAR_1);
 VAR_6->Addr.lower = VAR_7;
 VAR_6->Addr.upper = VAR_7;
}
