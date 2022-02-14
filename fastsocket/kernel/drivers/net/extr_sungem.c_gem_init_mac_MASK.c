
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gem {int rx_buf_sz; int mac_rx_cfg; scalar_t__ regs; scalar_t__ has_wol; TYPE_1__* dev; } ;
struct TYPE_2__ {unsigned char* dev_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 int FUNC_0 (struct gem*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gem *VAR_48)
{
 unsigned char *VAR_49 = &VAR_48->dev->dev_addr[0];

 FUNC_1(0x1bf0, VAR_48->regs + VAR_41);

 FUNC_1(0x00, VAR_48->regs + VAR_20);
 FUNC_1(0x08, VAR_48->regs + VAR_21);
 FUNC_1(0x04, VAR_48->regs + VAR_22);
 FUNC_1(0x40, VAR_48->regs + VAR_42);
 FUNC_1(0x40, VAR_48->regs + VAR_30);


 FUNC_1(0x20000000 | (VAR_48->rx_buf_sz + 4), VAR_48->regs + VAR_26);

 FUNC_1(0x07, VAR_48->regs + VAR_32);
 FUNC_1(0x04, VAR_48->regs + VAR_23);
 FUNC_1(0x10, VAR_48->regs + VAR_15);
 FUNC_1(0x8808, VAR_48->regs + VAR_29);

 FUNC_1((VAR_49[5] | (VAR_49[4] << 8)) & 0x3ff, VAR_48->regs + VAR_34);

 FUNC_1((VAR_49[4] << 8) | VAR_49[5], VAR_48->regs + VAR_0);
 FUNC_1((VAR_49[2] << 8) | VAR_49[3], VAR_48->regs + VAR_1);
 FUNC_1((VAR_49[0] << 8) | VAR_49[1], VAR_48->regs + VAR_2);

 FUNC_1(0, VAR_48->regs + VAR_3);
 FUNC_1(0, VAR_48->regs + VAR_4);
 FUNC_1(0, VAR_48->regs + VAR_5);

 FUNC_1(0x0001, VAR_48->regs + VAR_6);
 FUNC_1(0xc200, VAR_48->regs + VAR_7);
 FUNC_1(0x0180, VAR_48->regs + VAR_8);

 FUNC_1(0, VAR_48->regs + VAR_12);
 FUNC_1(0, VAR_48->regs + VAR_13);
 FUNC_1(0, VAR_48->regs + VAR_14);
 FUNC_1(0, VAR_48->regs + VAR_11);
 FUNC_1(0, VAR_48->regs + VAR_10);

 VAR_48->mac_rx_cfg = FUNC_0(VAR_48);



 FUNC_1(0, VAR_48->regs + VAR_31);
 FUNC_1(0, VAR_48->regs + VAR_18);
 FUNC_1(0, VAR_48->regs + VAR_17);
 FUNC_1(0, VAR_48->regs + VAR_24);
 FUNC_1(0, VAR_48->regs + VAR_16);
 FUNC_1(0, VAR_48->regs + VAR_33);
 FUNC_1(0, VAR_48->regs + VAR_35);
 FUNC_1(0, VAR_48->regs + VAR_25);
 FUNC_1(0, VAR_48->regs + VAR_9);
 FUNC_1(0, VAR_48->regs + VAR_19);
 FUNC_1(0, VAR_48->regs + VAR_38);




 FUNC_1(0, VAR_48->regs + VAR_43);
 FUNC_1(VAR_48->mac_rx_cfg, VAR_48->regs + VAR_36);
 FUNC_1(0, VAR_48->regs + VAR_27);
 FUNC_1(0, VAR_48->regs + VAR_46);





 FUNC_1(VAR_45, VAR_48->regs + VAR_44);
 FUNC_1(VAR_40, VAR_48->regs + VAR_39);




 FUNC_1(0xffffffff, VAR_48->regs + VAR_28);



 if (VAR_48->has_wol)
  FUNC_1(0, VAR_48->regs + VAR_47);
}
