
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int base_addr; int* dev_addr; int mtu; } ;
struct el3_private {int advertising; int window_lock; int phys; scalar_t__ autoselect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int,int ,int) ;
 int FUNC_5 (unsigned int,int) ;
 int FUNC_6 (unsigned int,int ,int,int) ;
 struct el3_private* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int,unsigned int) ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (int,unsigned int) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (struct net_device*,int) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_25)
{
 struct el3_private *VAR_26 = FUNC_7(VAR_25);
 int VAR_27;
 unsigned int VAR_28 = VAR_25->base_addr;
 unsigned long VAR_29;

 FUNC_14(VAR_25, VAR_16|0x10);

 FUNC_12(&VAR_26->window_lock, VAR_29);

 FUNC_10(0, VAR_28 + VAR_6);
 FUNC_10(0, VAR_28 + VAR_5);


 FUNC_0(2);
 for (VAR_27 = 0; VAR_27 < 6; VAR_27++)
  FUNC_8(VAR_25->dev_addr[VAR_27], VAR_28 + VAR_27);
 for (; VAR_27 < 12; VAR_27+=2)
  FUNC_10(0, VAR_28 + VAR_27);


 FUNC_0(3);
 FUNC_8((VAR_25->mtu > 1500 ? 0x40 : 0), VAR_28 + VAR_21);
 FUNC_9((VAR_26->autoselect ? 0x01000000 : 0) | 0x0062001b,
   VAR_28 + VAR_20);

 FUNC_10(0x8040, VAR_28 + VAR_22);
 FUNC_3(1);
 FUNC_10(0xc040, VAR_28 + VAR_22);
 FUNC_0(1);
 FUNC_13(&VAR_26->window_lock, VAR_29);

 FUNC_14(VAR_25, VAR_19);
 FUNC_14(VAR_25, VAR_10);
 FUNC_3(1);
 FUNC_12(&VAR_26->window_lock, VAR_29);
 FUNC_0(3);
 FUNC_10(0x8040, VAR_28 + VAR_22);


 FUNC_10(VAR_13, VAR_28 + VAR_2);
 FUNC_0(6);
 for (VAR_27 = 0; VAR_27 < 10; VAR_27++)
  FUNC_1(VAR_28 + VAR_27);
 FUNC_2(VAR_28 + 10);
 FUNC_2(VAR_28 + 12);
 FUNC_0(4);
 FUNC_1(VAR_28 + 12);
 FUNC_1(VAR_28 + 13);


 FUNC_10(0x0040, VAR_28 + VAR_23);

 FUNC_0(1);
 FUNC_13(&VAR_26->window_lock, VAR_29);


 FUNC_5(VAR_28, 32);
 FUNC_6(VAR_28, VAR_26->phys, 4, VAR_26->advertising);
 if (!VAR_24) {

  VAR_27 = FUNC_4(VAR_28, VAR_26->phys, 16) | 0x20;
  FUNC_6(VAR_28, VAR_26->phys, 16, VAR_27);
 }

 FUNC_12(&VAR_26->window_lock, VAR_29);

 FUNC_11(VAR_25);
 FUNC_13(&VAR_26->window_lock, VAR_29);
 FUNC_10(VAR_14, VAR_28 + VAR_2);
 FUNC_10(VAR_9, VAR_28 + VAR_2);
 FUNC_10(VAR_18, VAR_28 + VAR_2);

 FUNC_10(VAR_12 | 0xff, VAR_28 + VAR_2);

 FUNC_10(VAR_0 | VAR_3 | VAR_17 | VAR_8 | VAR_4,
   VAR_28 + VAR_2);
 FUNC_10(VAR_11 | VAR_3 | VAR_17 | VAR_7 | VAR_15
   | VAR_1 | VAR_8, VAR_28 + VAR_2);
}
