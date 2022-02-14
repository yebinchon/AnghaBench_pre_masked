
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int * entry; int bus; } ;
struct myri10ge_slice_state {int napi; int dev; struct myri10ge_priv* mgp; int * fw_stats; int fw_stats_bus; TYPE_1__ rx_done; } ;
struct myri10ge_priv {int num_slices; int max_intr_slots; int dev; struct myri10ge_slice_state* ss; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,size_t,int *,int ) ;
 struct myri10ge_slice_state* FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (struct myri10ge_priv*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct myri10ge_priv *VAR_4)
{
 struct myri10ge_slice_state *VAR_5;
 struct pci_dev *VAR_6 = VAR_4->pdev;
 size_t VAR_7;
 int VAR_8;

 VAR_7 = sizeof(*VAR_4->ss) * VAR_4->num_slices;
 VAR_4->ss = FUNC_1(VAR_7, VAR_1);
 if (VAR_4->ss == ((void*)0)) {
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_4->num_slices; VAR_8++) {
  VAR_5 = &VAR_4->ss[VAR_8];
  VAR_7 = VAR_4->max_intr_slots * sizeof(*VAR_5->rx_done.entry);
  VAR_5->rx_done.entry = FUNC_0(&VAR_6->dev, VAR_7,
             &VAR_5->rx_done.bus,
             VAR_1);
  if (VAR_5->rx_done.entry == ((void*)0))
   goto abort;
  FUNC_2(VAR_5->rx_done.entry, 0, VAR_7);
  VAR_7 = sizeof(*VAR_5->fw_stats);
  VAR_5->fw_stats = FUNC_0(&VAR_6->dev, VAR_7,
        &VAR_5->fw_stats_bus,
        VAR_1);
  if (VAR_5->fw_stats == ((void*)0))
   goto abort;
  VAR_5->mgp = VAR_4;
  VAR_5->dev = VAR_4->dev;
  FUNC_4(VAR_5->dev, &VAR_5->napi, VAR_3,
          VAR_2);
 }
 return 0;
abort:
 FUNC_3(VAR_4);
 return -VAR_0;
}
