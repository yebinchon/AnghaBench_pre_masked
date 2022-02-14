
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int upper; int lower; } ;
union u64bit {int val; TYPE_1__ val32; } ;
struct ctlr_info {int max_cmd_sg_entries; int pdev; } ;
struct TYPE_5__ {int upper; int lower; } ;
struct SGDescriptor {int Len; TYPE_2__ Addr; } ;
struct TYPE_6__ {int SGTotal; } ;
struct CommandList {struct SGDescriptor* SG; TYPE_3__ Header; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ctlr_info *VAR_1,
 struct CommandList *VAR_2)
{
 struct SGDescriptor *VAR_3;
 union u64bit VAR_4;

 if (VAR_2->Header.SGTotal <= VAR_1->max_cmd_sg_entries)
  return;

 VAR_3 = &VAR_2->SG[VAR_1->max_cmd_sg_entries - 1];
 VAR_4 = VAR_3->Addr.lower;
 VAR_4 = VAR_3->Addr.upper;
 FUNC_0(VAR_1->pdev, VAR_4, VAR_3->Len, VAR_0);
}
