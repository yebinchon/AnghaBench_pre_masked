
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int devfn; int dev; int device; int vendor; TYPE_1__* bus; } ;
struct aer_err_info {int status; size_t severity; int mask; int id; int error_dev_num; int tlp; scalar_t__ tlp_header_valid; } ;
struct TYPE_2__ {int number; } ;


 int FUNC_0 (size_t,int) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (struct pci_dev*,struct aer_err_info*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (int *,char*,int,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,size_t) ;

void FUNC_6(struct pci_dev *VAR_3, struct aer_err_info *VAR_4)
{
 int VAR_5 = ((VAR_3->bus->number << 8) | VAR_3->devfn);

 if (VAR_4->status == 0) {
  FUNC_3(&VAR_3->dev,
   "PCIe Bus Error: severity=%s, type=Unaccessible, "
   "id=%04x(Unregistered Agent ID)\n",
   VAR_2[VAR_4->severity], VAR_5);
 } else {
  int VAR_6, VAR_7;

  VAR_6 = FUNC_1(VAR_4->severity, VAR_4->status);
  VAR_7 = FUNC_0(VAR_4->severity, VAR_4->status);

  FUNC_3(&VAR_3->dev,
   "PCIe Bus Error: severity=%s, type=%s, id=%04x(%s)\n",
   VAR_2[VAR_4->severity],
   VAR_1[VAR_6], VAR_5, VAR_0[VAR_7]);

  FUNC_3(&VAR_3->dev,
   "  device [%04x:%04x] error status/mask=%08x/%08x\n",
   VAR_3->vendor, VAR_3->device,
   VAR_4->status, VAR_4->mask);

  FUNC_2(VAR_3, VAR_4);

  if (VAR_4->tlp_header_valid) {
   unsigned char *VAR_8 = (unsigned char *) &VAR_4->tlp;
   FUNC_3(&VAR_3->dev, "  TLP Header:"
    " %02x%02x%02x%02x %02x%02x%02x%02x"
    " %02x%02x%02x%02x %02x%02x%02x%02x\n",
    *(VAR_8 + 3), *(VAR_8 + 2), *(VAR_8 + 1), *VAR_8,
    *(VAR_8 + 7), *(VAR_8 + 6), *(VAR_8 + 5), *(VAR_8 + 4),
    *(VAR_8 + 11), *(VAR_8 + 10), *(VAR_8 + 9),
    *(VAR_8 + 8), *(VAR_8 + 15), *(VAR_8 + 14),
    *(VAR_8 + 13), *(VAR_8 + 12));
  }
 }

 if (VAR_4->id && VAR_4->error_dev_num > 1 && VAR_4->id == VAR_5)
  FUNC_3(&VAR_3->dev,
      "  Error of this Agent(%04x) is reported first\n",
   VAR_5);
 FUNC_5(FUNC_4(&VAR_3->dev), (VAR_4->status & ~VAR_4->mask),
   VAR_4->severity);
}
