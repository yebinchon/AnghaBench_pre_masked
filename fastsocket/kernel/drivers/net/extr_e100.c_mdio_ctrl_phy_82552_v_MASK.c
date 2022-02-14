
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {int phy_id; } ;
struct nic {TYPE_1__ mii; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct nic*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static u16 FUNC_2(struct nic *VAR_9,
     u32 VAR_10,
     u32 VAR_11,
     u32 VAR_12,
     u16 VAR_13)
{
 if ((VAR_12 == VAR_7) && (VAR_11 == VAR_8)) {
  if (VAR_13 & (VAR_3 | VAR_2)) {
   u16 VAR_14 = FUNC_1(VAR_9->netdev, VAR_9->mii.phy_id,
       VAR_6);





   if (VAR_14 & VAR_0)
    VAR_13 |= VAR_5 | VAR_4;
   else if (VAR_14 & VAR_1)
    VAR_13 |= VAR_5;
  }
 }
 return FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
}
