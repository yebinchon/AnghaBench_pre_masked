
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* command_set; } ;
struct domain_device {scalar_t__ dev_type; TYPE_1__ sata_dev; scalar_t__ frame_rcvd; } ;
struct dev_to_host_fis {int sector_count; int lbal; int lbam; int lbah; int device; int interrupt_reason; int byte_count_low; int byte_count_high; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct domain_device *VAR_3)
{
 struct dev_to_host_fis *VAR_4 =
  (struct dev_to_host_fis *) VAR_3->frame_rcvd;

 if (VAR_3->dev_type == VAR_2)
  return;

 if ((VAR_4->sector_count == 1 &&
      VAR_4->lbal == 1 &&
      VAR_4->lbam == 0 &&
      VAR_4->lbah == 0 &&
      VAR_4->device == 0)
     ||
     (VAR_4->sector_count == 0 &&
      VAR_4->lbal == 0 &&
      VAR_4->lbam == 0xCE &&
      VAR_4->lbah == 0xAA &&
      (VAR_4->device & ~0x10) == 0))

  VAR_3->sata_dev.command_set = VAR_1;

 else if ((VAR_4->interrupt_reason == 1 &&
    VAR_4->lbal == 1 &&
    VAR_4->byte_count_low == 0x14 &&
    VAR_4->byte_count_high == 0xEB &&
    (VAR_4->device & ~0x10) == 0))

  VAR_3->sata_dev.command_set = VAR_0;

 else if ((VAR_4->sector_count == 1 &&
    VAR_4->lbal == 1 &&
    VAR_4->lbam == 0x3C &&
    VAR_4->lbah == 0xC3 &&
    VAR_4->device == 0)
  ||
   (VAR_4->interrupt_reason == 1 &&
    VAR_4->lbal == 1 &&
    VAR_4->byte_count_low == 0x69 &&
    VAR_4->byte_count_high == 0x96 &&
    (VAR_4->device & ~0x10) == 0))


  VAR_3->sata_dev.command_set = VAR_0;
}
