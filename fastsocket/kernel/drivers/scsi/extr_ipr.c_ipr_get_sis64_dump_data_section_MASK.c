
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dump_data_reg; int dump_addr_reg; } ;
struct ipr_ioa_cfg {TYPE_1__ regs; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct ipr_ioa_cfg *VAR_0,
        u32 VAR_1,
        __be32 *VAR_2, u32 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_2(VAR_1+(VAR_4*4), VAR_0->regs.dump_addr_reg);
  *VAR_2 = FUNC_0(FUNC_1(VAR_0->regs.dump_data_reg));
  VAR_2++;
 }

 return 0;
}
