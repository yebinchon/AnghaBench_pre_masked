
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ctlr_info {scalar_t__ vaddr; TYPE_1__* pdev; } ;
struct TYPE_5__ {int lower; } ;
struct TYPE_6__ {TYPE_2__ Tag; } ;
struct CommandList {int busaddr; TYPE_3__ Header; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ctlr_info *VAR_2,
 struct CommandList *VAR_3)
{
 FUNC_0(&VAR_2->pdev->dev, "Sending %x, tag = %x\n", VAR_3->busaddr,
  VAR_3->Header.Tag.lower);
 FUNC_2(VAR_3->busaddr, VAR_2->vaddr + VAR_0);
 (void) FUNC_1(VAR_2->vaddr + VAR_1);
}
