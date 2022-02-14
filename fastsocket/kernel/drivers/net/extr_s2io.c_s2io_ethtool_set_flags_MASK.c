
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s2io_nic {int lro; } ;
struct net_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct s2io_nic* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct s2io_nic*) ;
 int FUNC_3 (struct s2io_nic*) ;
 int FUNC_4 (struct s2io_nic*) ;
 int FUNC_5 (struct s2io_nic*) ;
 int FUNC_6 (struct s2io_nic*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, u32 VAR_5)
{
 struct s2io_nic *VAR_6 = FUNC_0(VAR_4);
 int VAR_7 = 0;
 int VAR_8 = 0;

 if (VAR_5 & ~VAR_1)
  return -VAR_0;

 if (VAR_5 & VAR_1) {
  if (VAR_3) {
   if (!(VAR_4->features & VAR_2)) {
    VAR_4->features |= VAR_2;
    VAR_8 = 1;
   }
  } else
   VAR_7 = -VAR_0;
 } else if (VAR_4->features & VAR_2) {
  VAR_4->features &= ~VAR_2;
  VAR_8 = 1;
 }

 if (VAR_8 && FUNC_1(VAR_4)) {
  FUNC_6(VAR_6);
  FUNC_2(VAR_6);
  VAR_6->lro = !!(VAR_4->features & VAR_2);
  VAR_7 = FUNC_3(VAR_6);
  if (VAR_7)
   FUNC_4(VAR_6);
  else
   FUNC_5(VAR_6);
 }

 return VAR_7;
}
