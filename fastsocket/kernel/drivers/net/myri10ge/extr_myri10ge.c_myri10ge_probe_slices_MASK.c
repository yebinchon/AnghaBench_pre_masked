
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct myri10ge_priv {int num_slices; char* fw_name; int max_intr_slots; TYPE_1__* msix_vectors; struct pci_dev* pdev; } ;
struct myri10ge_cmd {int data0; } ;
struct mcp_slot {int dummy; } ;
typedef int cmd ;
struct TYPE_4__ {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (struct myri10ge_cmd*,int ,int) ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int FUNC_6 (struct myri10ge_priv*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (struct myri10ge_priv*,int ,struct myri10ge_cmd*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,TYPE_1__*,int) ;
 int FUNC_11 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_12(struct myri10ge_priv *VAR_11)
{
 struct myri10ge_cmd VAR_12;
 struct pci_dev *VAR_13 = VAR_11->pdev;
 char *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_11->num_slices = 1;
 VAR_18 = FUNC_11(VAR_13, VAR_4);
 VAR_17 = FUNC_8();

 if (VAR_9 == 1 || VAR_18 == 0 ||
     (VAR_9 == -1 && VAR_17 < 2))
  return;


 VAR_14 = VAR_11->fw_name;
 if (VAR_6 != ((void*)0)) {
  FUNC_1(&VAR_11->pdev->dev, "overriding rss firmware to %s\n",
    VAR_6);
  VAR_11->fw_name = VAR_6;
 } else if (VAR_14 == VAR_5)
  VAR_11->fw_name = VAR_7;
 else
  VAR_11->fw_name = VAR_8;
 VAR_16 = FUNC_6(VAR_11, 0);
 if (VAR_16 != 0) {
  FUNC_1(&VAR_13->dev, "Rss firmware not found\n");
  return;
 }


 FUNC_5(&VAR_12, 0, sizeof(VAR_12));
 VAR_16 = FUNC_7(VAR_11, VAR_2, &VAR_12, 0);
 if (VAR_16 != 0) {
  FUNC_0(&VAR_11->pdev->dev, "failed reset\n");
  goto abort_with_fw;
  return;
 }

 VAR_11->max_intr_slots = VAR_12.data0 / sizeof(struct mcp_slot);


 VAR_12.data0 = VAR_11->max_intr_slots * sizeof(struct mcp_slot);
 VAR_16 = FUNC_7(VAR_11, VAR_3, &VAR_12, 0);
 if (VAR_16 != 0) {
  FUNC_0(&VAR_11->pdev->dev, "failed MXGEFW_CMD_SET_INTRQ_SIZE\n");
  goto abort_with_fw;
 }


 VAR_16 = FUNC_7(VAR_11, VAR_1, &VAR_12, 0);
 if (VAR_16 != 0)
  goto abort_with_fw;
 else
  VAR_11->num_slices = VAR_12.data0;


 if (!VAR_10) {
  goto abort_with_fw;
 }




 if (VAR_9 == -1)
  VAR_9 = VAR_17;

 if (VAR_11->num_slices > VAR_9)
  VAR_11->num_slices = VAR_9;





 VAR_11->msix_vectors = FUNC_4(VAR_11->num_slices *
        sizeof(*VAR_11->msix_vectors), VAR_0);
 if (VAR_11->msix_vectors == ((void*)0))
  goto disable_msix;
 for (VAR_15 = 0; VAR_15 < VAR_11->num_slices; VAR_15++) {
  VAR_11->msix_vectors[VAR_15].entry = VAR_15;
 }

 while (VAR_11->num_slices > 1) {

  while (!FUNC_2(VAR_11->num_slices))
   VAR_11->num_slices--;
  if (VAR_11->num_slices == 1)
   goto disable_msix;
  VAR_16 = FUNC_10(VAR_13, VAR_11->msix_vectors,
      VAR_11->num_slices);
  if (VAR_16 == 0) {
   FUNC_9(VAR_13);
   return;
  }
  if (VAR_16 > 0)
   VAR_11->num_slices = VAR_16;
  else
   goto disable_msix;
 }

disable_msix:
 if (VAR_11->msix_vectors != ((void*)0)) {
  FUNC_3(VAR_11->msix_vectors);
  VAR_11->msix_vectors = ((void*)0);
 }

abort_with_fw:
 VAR_11->num_slices = 1;
 VAR_11->fw_name = VAR_14;
 FUNC_6(VAR_11, 0);
}
