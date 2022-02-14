
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int type; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {int flags; int flags2; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct ixgbe_adapter*,int ) ;



__attribute__((used)) static inline void FUNC_3(struct ixgbe_adapter *VAR_17, bool VAR_18,
        bool VAR_19)
{
 u32 VAR_20 = (VAR_2 & ~VAR_9);


 if (VAR_17->flags & VAR_16)
  VAR_20 &= ~VAR_7;

 if (VAR_17->flags2 & VAR_13)
  switch (VAR_17->hw.mac.type) {
  case 129:
   VAR_20 |= VAR_4;
   break;
  case 128:
   VAR_20 |= VAR_11;
   break;
  default:
   break;
  }
 if (VAR_17->flags & VAR_14)
  VAR_20 |= VAR_5;
 switch (VAR_17->hw.mac.type) {
 case 129:
  VAR_20 |= VAR_5;
  VAR_20 |= VAR_6;
 case 128:
  VAR_20 |= VAR_1;
  VAR_20 |= VAR_8;
  break;
 default:
  break;
 }






 if ((VAR_17->flags & VAR_15) &&
     !(VAR_17->flags2 & VAR_12))
  VAR_20 |= VAR_3;

 FUNC_1(&VAR_17->hw, VAR_0, VAR_20);
 if (VAR_18)
  FUNC_2(VAR_17, ~0);
 if (VAR_19)
  FUNC_0(&VAR_17->hw);
}
