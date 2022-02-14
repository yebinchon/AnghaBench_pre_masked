
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct ctlr_info {size_t max_cmd_sg_entries; int pdev; struct SGDescriptor** cmd_sg_list; } ;
struct TYPE_4__ {void* upper; void* lower; } ;
struct SGDescriptor {int Len; TYPE_2__ Addr; int Ext; } ;
struct TYPE_3__ {int SGTotal; } ;
struct CommandList {size_t cmdindex; TYPE_1__ Header; struct SGDescriptor* SG; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct SGDescriptor*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct ctlr_info *VAR_2,
 struct CommandList *VAR_3)
{
 struct SGDescriptor *VAR_4, *VAR_5;
 u64 VAR_6;

 VAR_4 = &VAR_3->SG[VAR_2->max_cmd_sg_entries - 1];
 VAR_5 = VAR_2->cmd_sg_list[VAR_3->cmdindex];
 VAR_4->Ext = VAR_0;
 VAR_4->Len = sizeof(*VAR_4) *
  (VAR_3->Header.SGTotal - VAR_2->max_cmd_sg_entries);
 VAR_6 = FUNC_0(VAR_2->pdev, VAR_5, VAR_4->Len,
    VAR_1);
 VAR_4->Addr.lower = (u32) (VAR_6 & 0x0FFFFFFFFULL);
 VAR_4->Addr.upper = (u32) ((VAR_6 >> 32) & 0x0FFFFFFFFULL);
}
