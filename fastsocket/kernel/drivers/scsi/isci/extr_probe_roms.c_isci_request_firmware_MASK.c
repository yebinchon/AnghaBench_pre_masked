
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_3__ {int signature; } ;
struct isci_orom {TYPE_2__* ctrl; TYPE_1__ hdr; } ;
struct firmware {int size; scalar_t__ data; } ;
struct TYPE_4__ {int afe_tx_amp_control0; int afe_tx_amp_control1; int afe_tx_amp_control2; int afe_tx_amp_control3; struct TYPE_4__* phys; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct isci_orom* FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct isci_orom*,scalar_t__,int) ;
 int FUNC_5 (struct firmware const*) ;
 scalar_t__ FUNC_6 (struct firmware const**,int ,int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

struct isci_orom *FUNC_9(struct pci_dev *VAR_3, const struct firmware *VAR_4)
{
 struct isci_orom *VAR_5 = ((void*)0), *VAR_6;
 int VAR_7, VAR_8;

 if (FUNC_6(&VAR_4, VAR_1, &VAR_3->dev) != 0)
  return ((void*)0);

 if (VAR_4->size < sizeof(*VAR_5))
  goto out;

 VAR_6 = (struct isci_orom *)VAR_4->data;

 if (FUNC_8(VAR_2, VAR_6->hdr.signature,
      FUNC_7(VAR_2)) != 0)
  goto out;

 VAR_5 = FUNC_1(&VAR_3->dev, VAR_4->size, VAR_0);
 if (!VAR_5)
  goto out;

 FUNC_4(VAR_5, VAR_4->data, VAR_4->size);

 if (FUNC_2(VAR_3) || FUNC_3(VAR_3))
  goto out;





 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5->ctrl); VAR_7++)
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5->ctrl[VAR_7].phys); VAR_8++) {
   VAR_5->ctrl[VAR_7].phys[VAR_8].afe_tx_amp_control0 = 0xe7c03;
   VAR_5->ctrl[VAR_7].phys[VAR_8].afe_tx_amp_control1 = 0xe7c03;
   VAR_5->ctrl[VAR_7].phys[VAR_8].afe_tx_amp_control2 = 0xe7c03;
   VAR_5->ctrl[VAR_7].phys[VAR_8].afe_tx_amp_control3 = 0xe7c03;
  }
 out:
 FUNC_5(VAR_4);

 return VAR_5;
}
