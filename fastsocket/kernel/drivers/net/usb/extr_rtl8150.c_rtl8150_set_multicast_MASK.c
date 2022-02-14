
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int flags; int name; int dev; scalar_t__ mc_count; } ;
struct TYPE_4__ {int rx_creg; } ;
typedef TYPE_1__ rtl8150_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int ) ;
 TYPE_1__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{
 rtl8150_t *VAR_4 = FUNC_3(VAR_3);
 FUNC_4(VAR_3);
 if (VAR_3->flags & VAR_1) {
  VAR_4->rx_creg |= FUNC_1(0x0001);
  FUNC_2(&VAR_3->dev, "%s: promiscuous mode\n", VAR_3->name);
 } else if (VAR_3->mc_count ||
     (VAR_3->flags & VAR_0)) {
  VAR_4->rx_creg &= FUNC_1(0xfffe);
  VAR_4->rx_creg |= FUNC_1(0x0002);
  FUNC_2(&VAR_3->dev, "%s: allmulti set\n", VAR_3->name);
 } else {

  VAR_4->rx_creg &= FUNC_1(0x00fc);
 }
 FUNC_0(VAR_4, VAR_2, 2);
 FUNC_5(VAR_3);
}
