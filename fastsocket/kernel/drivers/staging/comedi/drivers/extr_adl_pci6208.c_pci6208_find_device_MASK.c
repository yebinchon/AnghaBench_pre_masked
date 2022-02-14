
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {scalar_t__ vendor; scalar_t__ device; int irq; int devfn; TYPE_1__* bus; } ;
struct comedi_device {int minor; TYPE_2__* board_ptr; } ;
struct TYPE_7__ {struct pci_dev* pci_dev; } ;
struct TYPE_6__ {scalar_t__ dev_id; int name; } ;
struct TYPE_5__ {int number; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 struct pci_dev* FUNC_3 (int ,int ,struct pci_dev*) ;
 int FUNC_4 (char*,int ,int,int,...) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_5, int VAR_6, int VAR_7)
{
 struct pci_dev *VAR_8;
 int VAR_9;

 for (VAR_8 = FUNC_3(VAR_1, VAR_1, ((void*)0));
      VAR_8 != ((void*)0);
      VAR_8 = FUNC_3(VAR_1, VAR_1, VAR_8)) {
  if (VAR_8->vendor == VAR_2) {
   for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
    if (VAR_4[VAR_9].dev_id == VAR_8->device) {

     if ((VAR_6 != 0) || (VAR_7 != 0)) {

      if (VAR_8->bus->number
          != VAR_6 ||
          FUNC_2(VAR_8->devfn)
          != VAR_7) {
       continue;
      }
     }
     VAR_5->board_ptr = VAR_4 + VAR_9;
     goto found;
    }
   }
  }
 }

 FUNC_4("comedi%d: no supported board found! (req. bus/slot : %d/%d)\n",
        VAR_5->minor, VAR_6, VAR_7);
 return -VAR_0;

found:
 FUNC_4("comedi%d: found %s (b:s:f=%d:%d:%d) , irq=%d\n",
        VAR_5->minor,
        VAR_4[VAR_9].name,
        VAR_8->bus->number,
        FUNC_2(VAR_8->devfn),
        FUNC_1(VAR_8->devfn), VAR_8->irq);






 VAR_3->pci_dev = VAR_8;

 return 0;
}
