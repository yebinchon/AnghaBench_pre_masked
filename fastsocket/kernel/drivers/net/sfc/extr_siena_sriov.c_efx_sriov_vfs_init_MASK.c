
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct pci_dev {unsigned int devfn; TYPE_1__* bus; } ;
struct efx_vf {unsigned int buftbl_base; unsigned int pci_rid; int buf; int pci_name; } ;
struct efx_nic {unsigned int vf_buftbl_base; unsigned int vf_count; struct efx_vf* vf; struct pci_dev* pci_dev; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct efx_nic*,int *,int ) ;
 int FUNC_3 (struct efx_nic*) ;
 unsigned int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (TYPE_1__*) ;
 unsigned int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,scalar_t__,unsigned int*) ;
 int FUNC_8 (int ,int,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct efx_nic *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_6->pci_dev;
 unsigned VAR_8, VAR_9, VAR_10, VAR_11;
 u16 VAR_12, VAR_13;
 struct efx_vf *VAR_14;
 int VAR_15;

 VAR_10 = FUNC_6(VAR_7, VAR_3);
 if (!VAR_10)
  return -VAR_2;

 FUNC_7(VAR_7, VAR_10 + VAR_4, &VAR_12);
 FUNC_7(VAR_7, VAR_10 + VAR_5, &VAR_13);

 VAR_11 = VAR_6->vf_buftbl_base;
 VAR_9 = VAR_7->devfn + VAR_12;
 for (VAR_8 = 0; VAR_8 < VAR_6->vf_count; ++VAR_8) {
  VAR_14 = VAR_6->vf + VAR_8;


  VAR_14->buftbl_base = VAR_11;
  VAR_11 += VAR_1 * FUNC_4(VAR_6);

  VAR_14->pci_rid = VAR_9;
  FUNC_8(VAR_14->pci_name, sizeof(VAR_14->pci_name),
    "%04x:%02x:%02x.%d",
    FUNC_5(VAR_7->bus), VAR_7->bus->number,
    FUNC_1(VAR_9), FUNC_0(VAR_9));

  VAR_15 = FUNC_2(VAR_6, &VAR_14->buf, VAR_0);
  if (VAR_15)
   goto fail;

  VAR_9 += VAR_13;
 }

 return 0;

fail:
 FUNC_3(VAR_6);
 return VAR_15;
}
