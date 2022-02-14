
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* write_reg ) (struct e1000_hw*,int ,int ) ;int (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct e1000_hw*,int ,int *) ;
 int FUNC_2 (struct e1000_hw*,int ,int *) ;
 int FUNC_3 (struct e1000_hw*,int ,int ) ;
 int FUNC_4 (struct e1000_hw*,int ,int ) ;

void FUNC_5(struct e1000_hw *VAR_5)
{
 u16 VAR_6 = 0;
 u16 VAR_7 = 0;


 VAR_5->phy.ops.read_reg(VAR_5, VAR_3, &VAR_6);
 VAR_6 |= VAR_2;


 if (VAR_5->phy.type == VAR_4) {
  VAR_5->phy.ops.read_reg(VAR_5, VAR_0, &VAR_7);
  VAR_7 |= VAR_1;
  VAR_5->phy.ops.write_reg(VAR_5, VAR_0, VAR_7);
 }
 VAR_5->phy.ops.write_reg(VAR_5, VAR_3, VAR_6);
 FUNC_0(1);
}
