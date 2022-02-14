
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;int (* identify ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ,int*) ;

__attribute__((used)) static u32 FUNC_2(struct ixgbe_hw *VAR_9)
{
 u32 VAR_10 = VAR_3;
 u16 VAR_11 = 0;

 VAR_9->phy.ops.identify(VAR_9);

 VAR_9->phy.ops.read_reg(VAR_9, VAR_5, VAR_4,
        &VAR_11);
 if (VAR_11 & VAR_8)
  VAR_10 |= VAR_2;
 if (VAR_11 & VAR_6)
  VAR_10 |= VAR_0;
 if (VAR_11 & VAR_7)
  VAR_10 |= VAR_1;

 return VAR_10;
}
