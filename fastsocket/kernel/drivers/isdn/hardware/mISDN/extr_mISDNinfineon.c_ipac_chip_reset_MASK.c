
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conf; int (* write_reg ) (struct inf_hw*,int ,int) ;} ;
struct inf_hw {TYPE_1__ ipac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct inf_hw*,int ,int) ;
 int FUNC_2 (struct inf_hw*,int ,int) ;
 int FUNC_3 (struct inf_hw*,int ,int) ;
 int FUNC_4 (struct inf_hw*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct inf_hw *VAR_3)
{
 VAR_3->ipac.write_reg(VAR_3, VAR_2, 0x20);
 FUNC_0(5);
 VAR_3->ipac.write_reg(VAR_3, VAR_2, 0x00);
 FUNC_0(5);
 VAR_3->ipac.write_reg(VAR_3, VAR_0, VAR_3->ipac.conf);
 VAR_3->ipac.write_reg(VAR_3, VAR_1, 0xc0);
}
