
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {int board_type; int cut_through; scalar_t__ port_type; int revision_id; } ;
struct TYPE_3__ {int * md_template; } ;
struct netxen_adapter {int driver_mismatch; scalar_t__ fw_version; scalar_t__ portnum; int msix_supported; int rss_supported; int max_rds_rings; scalar_t__ num_lro_rxd; TYPE_2__ ahw; int num_txd; int num_jumbo_rxd; int num_rxd; void* capabilities; struct pci_dev* pdev; TYPE_1__ mdump; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int,int,int) ;
 void* FUNC_2 (struct netxen_adapter*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_16 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,char*,scalar_t__,scalar_t__,scalar_t__,char*) ;
 int FUNC_8 (int *,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct netxen_adapter*,int,int*) ;
 int FUNC_13 (struct netxen_adapter*) ;
 int FUNC_14 (char*,int ,char*,char*,int ) ;
 int VAR_17 ;

__attribute__((used)) static void
FUNC_15(struct netxen_adapter *VAR_18)
{
 u32 VAR_19, VAR_20, VAR_21, VAR_22;
 char VAR_23[VAR_10];
 char VAR_24[32];
 int VAR_25, VAR_26, VAR_27, VAR_28;
 __le32 *VAR_29;
 struct pci_dev *VAR_30 = VAR_18->pdev;

 VAR_18->driver_mismatch = 0;

 VAR_29 = (__le32 *)&VAR_24;
 VAR_26 = VAR_14;
 for (VAR_25 = 0; VAR_25 < 8; VAR_25++) {
  if (FUNC_12(VAR_18, VAR_26, &VAR_27) == -1) {
   FUNC_6(&VAR_30->dev, "error reading board info\n");
   VAR_18->driver_mismatch = 1;
   return;
  }
  VAR_29[VAR_25] = FUNC_5(VAR_27);
  VAR_26 += sizeof(u32);
 }

 VAR_19 = FUNC_2(VAR_18, VAR_7);
 VAR_20 = FUNC_2(VAR_18, VAR_8);
 VAR_21 = FUNC_2(VAR_18, VAR_9);
 VAR_22 = VAR_18->fw_version;
 VAR_18->fw_version = FUNC_1(VAR_19, VAR_20, VAR_21);


  if (FUNC_4(VAR_18->ahw.revision_id)) {
  if (VAR_18->mdump.md_template == ((void*)0) ||
    VAR_18->fw_version > VAR_22) {
   FUNC_10(VAR_18->mdump.md_template);
   VAR_18->mdump.md_template = ((void*)0);
   VAR_28 = FUNC_13(VAR_18);
   if (VAR_28)
    FUNC_6(&VAR_18->pdev->dev,
    "Failed to setup minidump rcode = %d\n", VAR_28);
  }
 }

 if (VAR_18->portnum == 0) {
  FUNC_9(VAR_18->ahw.board_type, VAR_23);

  FUNC_14("%s: %s Board S/N %s  Chip rev 0x%x\n",
    FUNC_11(VAR_16),
    VAR_23, VAR_24, VAR_18->ahw.revision_id);
 }

 if (VAR_18->fw_version < FUNC_1(3, 4, 216)) {
  VAR_18->driver_mismatch = 1;
  FUNC_8(&VAR_30->dev, "firmware version %d.%d.%d unsupported\n",
    VAR_19, VAR_20, VAR_21);
  return;
 }

 if (FUNC_4(VAR_18->ahw.revision_id)) {
  VAR_25 = FUNC_2(VAR_18, VAR_13);
  VAR_18->ahw.cut_through = (VAR_25 & 0x8000) ? 1 : 0;
 }

 FUNC_7(&VAR_30->dev, "firmware v%d.%d.%d [%s]\n",
   VAR_19, VAR_20, VAR_21,
   VAR_18->ahw.cut_through ? "cut-through" : "legacy");

 if (VAR_18->fw_version >= FUNC_1(4, 0, 222))
  VAR_18->capabilities = FUNC_2(VAR_18, VAR_0);

 if (VAR_18->ahw.port_type == VAR_12) {
  VAR_18->num_rxd = VAR_1;
  VAR_18->num_jumbo_rxd = VAR_4;
 } else if (VAR_18->ahw.port_type == VAR_11) {
  VAR_18->num_rxd = VAR_2;
  VAR_18->num_jumbo_rxd = VAR_5;
 }

 VAR_18->msix_supported = 0;
 if (FUNC_4(VAR_18->ahw.revision_id)) {
  VAR_18->msix_supported = !!VAR_17;
  VAR_18->rss_supported = !!VAR_17;
 } else {
  u32 VAR_31 = 0;
  FUNC_12(VAR_18,
    VAR_15, (int *)&VAR_31);
  VAR_31 = FUNC_0(VAR_31);

  if (VAR_31 >= FUNC_1(3, 4, 336)) {
   switch (VAR_18->ahw.board_type) {
   case 129:
   case 128:
    VAR_18->msix_supported = !!VAR_17;
    VAR_18->rss_supported = !!VAR_17;
    break;
   default:
    break;
   }
  }
 }

 VAR_18->num_txd = VAR_3;

 if (FUNC_3(VAR_18->ahw.revision_id)) {
  VAR_18->num_lro_rxd = VAR_6;
  VAR_18->max_rds_rings = 3;
 } else {
  VAR_18->num_lro_rxd = 0;
  VAR_18->max_rds_rings = 2;
 }
}
