
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ prtad; } ;
struct TYPE_4__ {int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_5__ {scalar_t__ type; TYPE_3__ mdio; TYPE_1__ ops; int id; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ,int*) ;

s32 FUNC_4(struct ixgbe_hw *VAR_9)
{
 s32 VAR_10 = VAR_0;
 u32 VAR_11;
 u16 VAR_12 = 0;

 if (VAR_9->phy.type == VAR_8) {
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
   VAR_9->phy.mdio.prtad = VAR_11;
   if (FUNC_2(&VAR_9->phy.mdio, VAR_11) == 0) {
    FUNC_0(VAR_9);
    VAR_9->phy.type =
            FUNC_1(VAR_9->phy.id);

    if (VAR_9->phy.type == VAR_8) {
     VAR_9->phy.ops.read_reg(VAR_9,
            VAR_3,
            VAR_2,
            &VAR_12);
     if (VAR_12 &
         (VAR_5 |
          VAR_4))
      VAR_9->phy.type =
        VAR_6;
     else
      VAR_9->phy.type =
        VAR_7;
    }

    VAR_10 = 0;
    break;
   }
  }

  if (VAR_10 != 0)
   VAR_9->phy.mdio.prtad = 0;
 } else {
  VAR_10 = 0;
 }

 return VAR_10;
}
