
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cas {int cas_flags; int mac_rx_cfg; scalar_t__ regs; int * stat_lock; scalar_t__ crc_size; TYPE_1__* dev; } ;
struct TYPE_2__ {unsigned char* dev_addr; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 (int) ;
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
 int FUNC_2 (struct cas*) ;
 int FUNC_3 (struct cas*) ;
 void* FUNC_4 (struct cas*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct cas *VAR_35)
{
 unsigned char *VAR_36 = &VAR_35->dev->dev_addr[0];
 int VAR_37;



 FUNC_3(VAR_35);


 FUNC_7(VAR_3, VAR_35->regs + VAR_12);






 if ((VAR_35->cas_flags & VAR_1) == 0)
  FUNC_7(VAR_6, VAR_35->regs + VAR_13);


 FUNC_7(0x1BF0, VAR_35->regs + VAR_32);

 FUNC_7(0x00, VAR_35->regs + VAR_24);
 FUNC_7(0x08, VAR_35->regs + VAR_25);
 FUNC_7(0x04, VAR_35->regs + VAR_26);


 FUNC_7(0x40, VAR_35->regs + VAR_33);


 FUNC_7(VAR_5 + 4, VAR_35->regs + VAR_23);





 FUNC_7(FUNC_0(VAR_7, 0x2000) |
        FUNC_0(VAR_8,
   (VAR_2 + VAR_4 + 4 + 4)),
        VAR_35->regs + VAR_22);





 if ((VAR_35->cas_flags & VAR_0) && VAR_35->crc_size)
  FUNC_7(0x41, VAR_35->regs + VAR_28);
 else
  FUNC_7(0x07, VAR_35->regs + VAR_28);
 FUNC_7(0x04, VAR_35->regs + VAR_27);
 FUNC_7(0x10, VAR_35->regs + VAR_19);
 FUNC_7(0x8808, VAR_35->regs + VAR_21);

 FUNC_7((VAR_36[5] | (VAR_36[4] << 8)) & 0x3ff, VAR_35->regs + VAR_29);

 FUNC_7(0, VAR_35->regs + VAR_14);
 FUNC_7(0, VAR_35->regs + VAR_16);
 FUNC_7(0, VAR_35->regs + VAR_17);
 FUNC_7(0, VAR_35->regs + VAR_18);
 FUNC_7(0, VAR_35->regs + VAR_15);


 for (VAR_37 = 0; VAR_37 < 45; VAR_37++)
  FUNC_7(0x0, VAR_35->regs + FUNC_1(VAR_37));

 FUNC_7((VAR_36[4] << 8) | VAR_36[5], VAR_35->regs + FUNC_1(0));
 FUNC_7((VAR_36[2] << 8) | VAR_36[3], VAR_35->regs + FUNC_1(1));
 FUNC_7((VAR_36[0] << 8) | VAR_36[1], VAR_35->regs + FUNC_1(2));

 FUNC_7(0x0001, VAR_35->regs + FUNC_1(42));
 FUNC_7(0xc200, VAR_35->regs + FUNC_1(43));
 FUNC_7(0x0180, VAR_35->regs + FUNC_1(44));


 VAR_35->mac_rx_cfg = FUNC_4(VAR_35);
 FUNC_5(&VAR_35->stat_lock[VAR_11]);
 FUNC_2(VAR_35);
 FUNC_6(&VAR_35->stat_lock[VAR_11]);





 FUNC_7(VAR_10, VAR_35->regs + VAR_34);
 FUNC_7(VAR_9, VAR_35->regs + VAR_31);




 FUNC_7(0xffffffff, VAR_35->regs + VAR_20);
}
