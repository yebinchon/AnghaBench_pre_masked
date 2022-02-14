
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct scsi_device {size_t id; int request_queue; scalar_t__ lun; scalar_t__ channel; int host; } ;
struct pci_dev {int dummy; } ;
struct nv_adma_port_priv {int flags; int adma_dma_mask; } ;
struct TYPE_9__ {TYPE_1__* device; } ;
struct ata_port {int port_no; int lock; TYPE_6__* host; TYPE_2__ link; struct nv_adma_port_priv* private_data; } ;
struct TYPE_14__ {scalar_t__* dma_mask; } ;
struct TYPE_13__ {TYPE_7__* dev; TYPE_5__** ports; } ;
struct TYPE_11__ {TYPE_3__* device; } ;
struct TYPE_12__ {TYPE_4__ link; struct nv_adma_port_priv* private_data; } ;
struct TYPE_10__ {struct scsi_device* sdev; } ;
struct TYPE_8__ {scalar_t__ class; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned short VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct ata_port*,int ,char*,unsigned long long,unsigned long,unsigned short) ;
 int FUNC_1 (struct scsi_device*) ;
 struct ata_port* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,unsigned short) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (struct ata_port*) ;
 int FUNC_7 (struct pci_dev*,int ,int*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*,int ,int) ;
 int FUNC_10 (int ,unsigned long) ;
 int FUNC_11 (int ,unsigned long) ;
 struct pci_dev* FUNC_12 (TYPE_7__*) ;

__attribute__((used)) static int FUNC_13(struct scsi_device *VAR_14)
{
 struct ata_port *VAR_15 = FUNC_2(VAR_14->host);
 struct nv_adma_port_priv *VAR_16 = VAR_15->private_data;
 struct nv_adma_port_priv *VAR_17, *VAR_18;
 struct scsi_device *VAR_19, *VAR_20;
 struct pci_dev *VAR_21 = FUNC_12(VAR_15->host->dev);
 unsigned long VAR_22, VAR_23;
 unsigned short VAR_24;
 int VAR_25;
 int VAR_26;
 u32 VAR_27, VAR_28, VAR_29;

 VAR_25 = FUNC_1(VAR_14);

 if (VAR_14->id >= VAR_3 || VAR_14->channel || VAR_14->lun)

  return VAR_25;

 FUNC_10(VAR_15->lock, VAR_23);

 if (VAR_15->link.device[VAR_14->id].class == VAR_0) {







  VAR_22 = VAR_1;


  VAR_24 = VAR_5 - 1;



  VAR_26 = 0;
  FUNC_6(VAR_15);
 } else {
  VAR_22 = VAR_7;
  VAR_24 = VAR_8;
  VAR_26 = 1;
 }

 FUNC_7(VAR_21, VAR_9, &VAR_27);

 if (VAR_15->port_no == 1)
  VAR_29 = VAR_12 |
         VAR_13;
 else
  VAR_29 = VAR_10 |
         VAR_11;

 if (VAR_26) {
  VAR_28 = VAR_27 | VAR_29;
  VAR_16->flags &= ~VAR_6;
 } else {
  VAR_28 = VAR_27 & ~VAR_29;
  VAR_16->flags |= VAR_6;
 }

 if (VAR_27 != VAR_28)
  FUNC_9(VAR_21, VAR_9, VAR_28);

 VAR_17 = VAR_15->host->ports[0]->private_data;
 VAR_18 = VAR_15->host->ports[1]->private_data;
 VAR_19 = VAR_15->host->ports[0]->link.device[0].sdev;
 VAR_20 = VAR_15->host->ports[1]->link.device[0].sdev;
 if ((VAR_17->flags & VAR_6) ||
     (VAR_18->flags & VAR_6)) {
  if (VAR_19)
   FUNC_3(VAR_19->request_queue,
            VAR_2);
  if (VAR_20)
   FUNC_3(VAR_20->request_queue,
            VAR_2);

  FUNC_8(VAR_21, VAR_2);
 } else {

  FUNC_8(VAR_21, VAR_16->adma_dma_mask);
  if (VAR_19)
   FUNC_3(VAR_19->request_queue,
            VAR_16->adma_dma_mask);
  if (VAR_20)
   FUNC_3(VAR_20->request_queue,
            VAR_16->adma_dma_mask);
 }

 FUNC_5(VAR_14->request_queue, VAR_22);
 FUNC_4(VAR_14->request_queue, VAR_24);
 FUNC_0(VAR_15, VAR_4,
  "DMA mask 0x%llX, segment boundary 0x%lX, hw segs %hu\n",
  (unsigned long long)*VAR_15->host->dev->dma_mask,
  VAR_22, VAR_24);

 FUNC_11(VAR_15->lock, VAR_23);

 return VAR_25;
}
