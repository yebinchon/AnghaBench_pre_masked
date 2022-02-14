
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sm501fb_info {int regs_res; int regs; int fbmem_res; int fbmem; TYPE_1__* dev; } ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sm501fb_info *VAR_1)
{

 FUNC_3(VAR_1->dev->parent, VAR_0, 0);

 FUNC_0(VAR_1->fbmem);
 FUNC_2(VAR_1->fbmem_res);
 FUNC_1(VAR_1->fbmem_res);

 FUNC_0(VAR_1->regs);
 FUNC_2(VAR_1->regs_res);
 FUNC_1(VAR_1->regs_res);
}
