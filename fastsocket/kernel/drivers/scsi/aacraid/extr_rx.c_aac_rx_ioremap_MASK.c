
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_2__* rx; } ;
struct aac_dev {TYPE_1__ regs; int * IndexRegs; TYPE_2__* base; int base_start; } ;
struct TYPE_5__ {int IndexRegs; } ;


 TYPE_2__* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct aac_dev * VAR_0, u32 VAR_1)
{
 if (!VAR_1) {
  FUNC_1(VAR_0->regs.rx);
  return 0;
 }
 VAR_0->base = VAR_0->regs.rx = FUNC_0(VAR_0->base_start, VAR_1);
 if (VAR_0->base == ((void*)0))
  return -1;
 VAR_0->IndexRegs = &VAR_0->regs.rx->IndexRegs;
 return 0;
}
