
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tq; int * page_dma; int * page; } ;
struct TYPE_6__ {int reg_1394a; } ;
struct ti_lynx {int state; TYPE_2__ iso_rcv; int pcl_mem_dma; int pcl_mem; TYPE_3__* dev; int rcv_page_dma; int rcv_page; int aux_port; int local_ram; int local_rom; int registers; TYPE_4__* host; TYPE_1__ phyic; } ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_9__ {int device; } ;
struct TYPE_8__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int FUNC_0 (int ,struct ti_lynx*) ;
 struct device* FUNC_1 (int *) ;
 int FUNC_2 (struct ti_lynx*,int) ;





 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;

 int FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int ,int ) ;
 struct ti_lynx* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int *) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct ti_lynx*,int ,int ) ;
 int FUNC_11 (struct ti_lynx*,int ,int ) ;
 int FUNC_12 (struct ti_lynx*,int,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct pci_dev *VAR_9)
{
        struct ti_lynx *VAR_10;
 struct device *VAR_11;
        int VAR_12;

        VAR_10 = FUNC_7(VAR_9);
        if (!VAR_10) return;
        FUNC_8(VAR_9, ((void*)0));

 VAR_11 = FUNC_1(&VAR_10->host->device);

        switch (VAR_10->state) {
        case 128:
                FUNC_11(VAR_10, VAR_7, 0);
                FUNC_3(VAR_10->host);
        case 131:
                FUNC_11(VAR_10, VAR_7, 0);
                FUNC_0(VAR_10->dev->irq, VAR_10);


  if (VAR_10->phyic.reg_1394a)
   FUNC_12(VAR_10, 4, ~0xc0 & FUNC_2(VAR_10, 4));


  FUNC_5(VAR_10->host, VAR_8, VAR_3);

        case 130:
                FUNC_10(VAR_10, VAR_4, VAR_5);

                FUNC_11(VAR_10, VAR_0, 0);
                FUNC_4(VAR_10->registers);
                FUNC_4(VAR_10->local_rom);
                FUNC_4(VAR_10->local_ram);
                FUNC_4(VAR_10->aux_port);
        case 133:
                for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
                        if (VAR_10->iso_rcv.page[VAR_12]) {
                                FUNC_6(VAR_10->dev, VAR_6,
                                                    VAR_10->iso_rcv.page[VAR_12],
                                                    VAR_10->iso_rcv.page_dma[VAR_12]);
                        }
                }
                FUNC_6(VAR_10->dev, VAR_6, VAR_10->rcv_page,
                                    VAR_10->rcv_page_dma);
        case 132:
        case 129:
                FUNC_6(VAR_10->dev, VAR_2, VAR_10->pcl_mem,
                                    VAR_10->pcl_mem_dma);
        case 134:

                ;
        }

 FUNC_13(&VAR_10->iso_rcv.tq);

 if (VAR_11)
  FUNC_9(VAR_11);
}
