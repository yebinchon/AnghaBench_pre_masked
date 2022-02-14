
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl8169_private {int (* set_speed ) (struct net_device*,int ,int ,int ,int) ;int timer; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 struct rtl8169_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
        u8 VAR_5, u16 VAR_6, u8 VAR_7, u32 VAR_8)
{
 struct rtl8169_private *VAR_9 = FUNC_1(VAR_4);
 int VAR_10;

 VAR_10 = VAR_9->set_speed(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_10 < 0)
  goto out;

 if (FUNC_2(VAR_4) && (VAR_5 == VAR_1) &&
     (VAR_8 & VAR_0)) {
  FUNC_0(&VAR_9->timer, VAR_3 + VAR_2);
 }
out:
 return VAR_10;
}
