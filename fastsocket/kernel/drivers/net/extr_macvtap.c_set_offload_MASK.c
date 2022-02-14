
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macvtap_queue {int vlan; } ;
struct macvlan_dev {unsigned long tap_features; TYPE_1__* dev; } ;
struct TYPE_2__ {unsigned long features; int name; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_0 (TYPE_1__*) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 struct macvlan_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct macvtap_queue *VAR_12, unsigned long VAR_13)
{
 struct macvlan_dev *VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16 = 0;

 VAR_14 = FUNC_2(VAR_12->vlan);
 if (!VAR_14)
  return -VAR_0;

 VAR_15 = VAR_14->dev->features;

 if (VAR_13 & VAR_7) {
  VAR_16 |= VAR_1;

  if (VAR_13 & (VAR_8 | VAR_9)) {
   if (VAR_13 & VAR_10)
    VAR_16 |= VAR_4;
   if (VAR_13 & VAR_8)
    VAR_16 |= VAR_2;
   if (VAR_13 & VAR_9)
    VAR_16 |= VAR_3;
  }

  if (VAR_13 & VAR_11)
   VAR_16 |= VAR_5;
 }
 if (VAR_16 & (VAR_2 | VAR_3 | VAR_5))
  VAR_15 |= VAR_6;
 else
  VAR_15 &= ~VAR_6;




 VAR_15 = FUNC_1(VAR_15, VAR_14->dev->name);
 VAR_14->tap_features = VAR_16;
 if (VAR_14->dev->features != VAR_15) {
  VAR_14->dev->features = VAR_15;
  FUNC_0(VAR_14->dev);
 }

 return 0;
}
