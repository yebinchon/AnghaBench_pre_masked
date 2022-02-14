
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * sa; } ;
struct aac_dev {int * base; int base_start; TYPE_1__ regs; } ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct aac_dev * VAR_0, u32 VAR_1)
{
 if (!VAR_1) {
  FUNC_1(VAR_0->regs.sa);
  return 0;
 }
 VAR_0->base = VAR_0->regs.sa = FUNC_0(VAR_0->base_start, VAR_1);
 return (VAR_0->base == ((void*)0)) ? -1 : 0;
}
