
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_entry {int dummy; } ;
struct TYPE_2__ {int dma_handle; int * ptr; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct pci_dev {int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_4, struct scsi_cmnd *VAR_5)
{

 if (VAR_5->SCp.ptr) {
  FUNC_0(&VAR_4->dev,
     (dma_addr_t)((unsigned long)VAR_5->SCp.ptr),
     VAR_2, VAR_1);
  VAR_5->SCp.ptr = ((void*)0);
 }


 if (FUNC_2(VAR_5)) {
  FUNC_0(&VAR_4->dev, VAR_5->SCp.dma_handle,
     sizeof(struct sg_entry) * VAR_3,
     VAR_0);

  FUNC_1(VAR_5);
 }
}
