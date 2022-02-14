
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int features; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_14, unsigned long VAR_15)
{
 unsigned int VAR_16, VAR_17;

 VAR_16 = VAR_14->features;

 VAR_17 = (VAR_16 & ~(VAR_3 | VAR_1 |
         VAR_13));

 if (VAR_15 & VAR_8) {
  VAR_17 |= VAR_2|VAR_3|VAR_1;
  VAR_15 &= ~VAR_8;

  if (VAR_15 & (VAR_9|VAR_10)) {
   if (VAR_15 & VAR_11) {
    VAR_17 |= VAR_6;
    VAR_15 &= ~VAR_11;
   }
   if (VAR_15 & VAR_9)
    VAR_17 |= VAR_4;
   if (VAR_15 & VAR_10)
    VAR_17 |= VAR_5;
   VAR_15 &= ~(VAR_9|VAR_10);
  }

  if (VAR_15 & VAR_12) {
   VAR_17 |= VAR_7;
   VAR_15 &= ~VAR_12;
  }
 }



 if (VAR_15)
  return -VAR_0;

 VAR_14->features = VAR_17;
 if (VAR_16 != VAR_14->features)
  FUNC_0(VAR_14);

 return 0;
}
