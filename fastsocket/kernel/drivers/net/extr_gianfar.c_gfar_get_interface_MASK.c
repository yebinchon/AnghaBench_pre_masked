
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct gfar_private {scalar_t__ interface; int device_flags; TYPE_1__* regs; } ;
typedef scalar_t__ phy_interface_t ;
struct TYPE_2__ {int ecntrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *) ;
 struct gfar_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static phy_interface_t FUNC_2(struct net_device *VAR_13)
{
 struct gfar_private *VAR_14 = FUNC_1(VAR_13);
 u32 VAR_15 = FUNC_0(&VAR_14->regs->ecntrl);

 if (VAR_15 & VAR_2)
  return VAR_11;

 if (VAR_15 & VAR_3) {
  if (VAR_15 & VAR_1)
   return VAR_10;
  else
   return VAR_12;
 }

 if (VAR_15 & VAR_1) {
  if (VAR_15 & VAR_0)
   return VAR_9;
  else {
   phy_interface_t VAR_16 = VAR_14->interface;





   if (VAR_16 == VAR_8)
    return VAR_8;

   return VAR_7;
  }
 }

 if (VAR_14->device_flags & VAR_4)
  return VAR_5;

 return VAR_6;
}
