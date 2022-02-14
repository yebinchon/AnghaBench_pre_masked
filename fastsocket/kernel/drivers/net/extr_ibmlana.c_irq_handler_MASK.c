
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {scalar_t__ base_addr; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 struct net_device *VAR_11 = VAR_10;
 u16 VAR_12;


 if (!(FUNC_0(VAR_11->base_addr + VAR_0) & VAR_1))
  return VAR_3;


 while (1) {
  VAR_12 = FUNC_1(VAR_11->base_addr + VAR_8);

  if (VAR_12 & VAR_5) {
   FUNC_2(VAR_11);
   FUNC_6(VAR_5, VAR_11->base_addr + VAR_8);
  }
  if (VAR_12 & VAR_4) {
   FUNC_3(VAR_11);
   FUNC_6(VAR_4, VAR_11->base_addr + VAR_8);
  }
  if (VAR_12 & VAR_6) {
   FUNC_4(VAR_11);
   FUNC_6(VAR_6, VAR_11->base_addr + VAR_8);
  }
  if (VAR_12 & VAR_7) {
   FUNC_5(VAR_11);
   FUNC_6(VAR_7, VAR_11->base_addr + VAR_8);
  }
  break;
 }
 return VAR_2;
}
