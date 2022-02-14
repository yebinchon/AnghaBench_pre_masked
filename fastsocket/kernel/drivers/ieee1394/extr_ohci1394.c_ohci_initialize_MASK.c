
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_ohci {int selfid_buf_bus; int csr_config_rom_bus; int max_packet_size; int nb_iso_xmit_ctx; int nb_iso_rcv_ctx; TYPE_1__* dev; int at_resp_context; int at_req_context; int ar_resp_context; int ar_req_context; int phy_reg_lock; } ;
typedef int quadlet_t ;
typedef int buf ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (char*,int) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct ti_ohci*,int) ;
 scalar_t__ VAR_46 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (struct ti_ohci*,int ) ;
 int FUNC_7 (struct ti_ohci*,int ,int) ;
 int FUNC_8 (struct ti_ohci*,int,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct ti_ohci *VAR_47)
{
 quadlet_t VAR_48;
 int VAR_49, VAR_50;

 FUNC_9(&VAR_47->phy_reg_lock);


 VAR_48 = FUNC_6(VAR_47, VAR_4);
 VAR_48 |= 0x60000000;
 if (VAR_46)
  VAR_48 &= ~0x80000000;
 else
  VAR_48 |= 0x80000000;
 VAR_48 &= ~0x00ff0000;
 VAR_48 &= ~0x18000000;
 FUNC_7(VAR_47, VAR_4, VAR_48);


 FUNC_7(VAR_47, VAR_25, 0x0000ffc0);


 FUNC_7(VAR_47, VAR_8, VAR_11);


 FUNC_7(VAR_47, VAR_17, 0xffffffff);



 FUNC_7(VAR_47, VAR_18,
    VAR_20 |
    VAR_19);
 VAR_50 = FUNC_2(VAR_47, 4) | VAR_45;
 if (VAR_46)
  VAR_50 &= ~VAR_44;
 else
  VAR_50 |= VAR_44;
 FUNC_8(VAR_47, 4, VAR_50);


 FUNC_7(VAR_47, VAR_31, VAR_47->selfid_buf_bus);


 FUNC_7(VAR_47, VAR_18, VAR_21);


 FUNC_7(VAR_47, VAR_5, VAR_47->csr_config_rom_bus);


 VAR_47->max_packet_size =
  1<<(((FUNC_6(VAR_47, VAR_4)>>12)&0xf)+1);


 FUNC_7(VAR_47, VAR_14, 0xffffffff);
 FUNC_7(VAR_47, VAR_13, 0xffffffff);


 FUNC_7(VAR_47, VAR_16, 0xffffffff);
 FUNC_7(VAR_47, VAR_15, 0xffffffff);


 FUNC_3(&VAR_47->ar_req_context, 0);
 FUNC_3(&VAR_47->ar_resp_context, 0);


 FUNC_4(&VAR_47->at_req_context);
 FUNC_4(&VAR_47->at_resp_context);


 FUNC_7(VAR_47, VAR_3, 0x80000000);







 FUNC_7(VAR_47, VAR_27,
    VAR_26 >> 16);

 FUNC_0("physUpperBoundOffset=%08x",
        FUNC_6(VAR_47, VAR_27));


 FUNC_7(VAR_47, VAR_2,
    VAR_22 |
    (VAR_23<<4) |
    (VAR_24<<8));


 FUNC_7(VAR_47, VAR_7, VAR_10);


 FUNC_7(VAR_47, VAR_12,
    VAR_43 |
    VAR_38 |
    VAR_33 |
    VAR_42 |
    VAR_30 |
    VAR_29 |
    VAR_41 |
    VAR_40 |
    VAR_36 |
    VAR_37 |
    VAR_39 |
    VAR_35 |
    VAR_34);


 FUNC_7(VAR_47, VAR_8, VAR_9);

 VAR_48 = FUNC_6(VAR_47, VAR_32);
 FUNC_1(VAR_1, "OHCI-1394 %d.%d (PCI): IRQ=[%d]  "
       "MMIO=[%llx-%llx]  Max Packet=[%d]  IR/IT contexts=[%d/%d]",
       ((((VAR_48) >> 16) & 0xf) + (((VAR_48) >> 20) & 0xf) * 10),
       ((((VAR_48) >> 4) & 0xf) + ((VAR_48) & 0xf) * 10), VAR_47->dev->irq,
       (unsigned long long)FUNC_5(VAR_47->dev, 0),
       (unsigned long long)FUNC_5(VAR_47->dev, 0) + VAR_28 - 1,
       VAR_47->max_packet_size,
       VAR_47->nb_iso_rcv_ctx, VAR_47->nb_iso_xmit_ctx);



 VAR_49 = FUNC_2(VAR_47, 2) & 0xf;
 for (VAR_50 = 0; VAR_50 < VAR_49; VAR_50++) {
  unsigned int VAR_51;

  FUNC_8(VAR_47, 7, VAR_50);
  VAR_51 = FUNC_2(VAR_47, 8);

  if (VAR_51 & 0x20)
   FUNC_8(VAR_47, 8, VAR_51 & ~1);
 }


        if ((VAR_47->max_packet_size < 512) ||
     (VAR_47->max_packet_size > 4096)) {







  FUNC_1(VAR_0, "Serial EEPROM has suspicious values, "
                      "attempting to set max_packet_size to 512 bytes");
  FUNC_7(VAR_47, VAR_4,
     (FUNC_6(VAR_47, VAR_4) & 0xf007) | 0x8002);
  VAR_47->max_packet_size = 512;
 }
}
