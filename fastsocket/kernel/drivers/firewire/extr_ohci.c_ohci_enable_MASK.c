
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int irq; } ;
struct TYPE_2__ {int device; } ;
struct fw_ohci {int self_id_bus; int next_config_rom_bus; int config_rom_bus; int next_header; TYPE_1__ card; scalar_t__* config_rom; scalar_t__* next_config_rom; int ar_response_ctx; int ar_request_ctx; } ;
struct fw_card {int device; } ;


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
 int VAR_28 ;
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
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__* FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (int ,int ,scalar_t__*,int) ;
 int FUNC_4 (struct fw_ohci*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (scalar_t__*,int*,size_t) ;
 struct fw_ohci* FUNC_8 (struct fw_card*) ;
 int VAR_49 ;
 int FUNC_9 (scalar_t__*,int ,int ) ;
 int FUNC_10 (int) ;
 int VAR_50 ;
 scalar_t__ FUNC_11 (struct fw_card*,int,int ,int) ;
 int VAR_51 ;
 int FUNC_12 (struct fw_ohci*,int ) ;
 int FUNC_13 (struct fw_ohci*,int ,int) ;
 scalar_t__ FUNC_14 (int ,int ,int ,int ,struct fw_ohci*) ;
 scalar_t__ FUNC_15 (struct fw_ohci*) ;
 struct pci_dev* FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct fw_card *VAR_52, u32 *VAR_53, size_t VAR_54)
{
 struct fw_ohci *VAR_55 = FUNC_8(VAR_52);
 struct pci_dev *VAR_56 = FUNC_16(VAR_52->device);
 u32 VAR_57;
 int VAR_58;

 if (FUNC_15(VAR_55)) {
  FUNC_6("Failed to reset ohci card.\n");
  return -VAR_1;
 }
 FUNC_13(VAR_55, VAR_12,
    VAR_14 |
    VAR_17);
 FUNC_4(VAR_55);

 for (VAR_57 = 0, VAR_58 = 0; !VAR_57 && VAR_58 < 3; VAR_58++) {
  FUNC_10(50);
  VAR_57 = FUNC_12(VAR_55, VAR_12) &
        VAR_14;
 }

 if (!VAR_57) {
  FUNC_6("Failed to set Link Power Status\n");
  return -VAR_2;
 }

 FUNC_13(VAR_55, VAR_11,
    VAR_16);

 FUNC_13(VAR_55, VAR_33, VAR_55->self_id_bus);
 FUNC_13(VAR_55, VAR_21,
    VAR_25);
 FUNC_13(VAR_55, VAR_22,
    VAR_26 |
    VAR_24 |
    VAR_23);

 FUNC_13(VAR_55, VAR_6,
    VAR_27 |
    (VAR_28 << 4) |
    (VAR_29 << 8));

 FUNC_0(&VAR_55->ar_request_ctx);
 FUNC_0(&VAR_55->ar_response_ctx);

 FUNC_13(VAR_55, VAR_30, 0x00010000);
 FUNC_13(VAR_55, VAR_18, ~0);
 FUNC_13(VAR_55, VAR_19, ~0);
 FUNC_13(VAR_55, VAR_20,
    VAR_45 |
    VAR_31 | VAR_32 |
    VAR_43 | VAR_44 |
    VAR_38 | VAR_39 |
    VAR_41 | VAR_37 |
    VAR_36 |
    VAR_35 | VAR_42 |
    VAR_40);
 if (VAR_51 & VAR_46)
  FUNC_13(VAR_55, VAR_20, VAR_34);


 if (FUNC_11(VAR_52, 4, 0,
    VAR_48 | VAR_47) < 0)
  return -VAR_2;
 if (VAR_53) {
  VAR_55->next_config_rom =
   FUNC_2(VAR_55->card.device, VAR_0,
        &VAR_55->next_config_rom_bus,
        VAR_4);
  if (VAR_55->next_config_rom == ((void*)0))
   return -VAR_3;

  FUNC_9(VAR_55->next_config_rom, 0, VAR_0);
  FUNC_7(VAR_55->next_config_rom, VAR_53, VAR_54 * 4);
 } else {




  VAR_55->next_config_rom = VAR_55->config_rom;
  VAR_55->next_config_rom_bus = VAR_55->config_rom_bus;
 }

 VAR_55->next_header = FUNC_1(VAR_55->next_config_rom[0]);
 VAR_55->next_config_rom[0] = 0;
 FUNC_13(VAR_55, VAR_9, 0);
 FUNC_13(VAR_55, VAR_8,
    FUNC_1(VAR_55->next_config_rom[2]));
 FUNC_13(VAR_55, VAR_10, VAR_55->next_config_rom_bus);

 FUNC_13(VAR_55, VAR_7, 0x80000000);

 if (FUNC_14(VAR_56->irq, VAR_49,
   VAR_5, VAR_50, VAR_55)) {
  FUNC_6("Failed to allocate shared interrupt %d.\n",
    VAR_56->irq);
  FUNC_3(VAR_55->card.device, VAR_0,
      VAR_55->config_rom, VAR_55->config_rom_bus);
  return -VAR_2;
 }

 FUNC_13(VAR_55, VAR_12,
    VAR_15 |
    VAR_13);
 FUNC_4(VAR_55);






 FUNC_5(&VAR_55->card, 1);

 return 0;
}
