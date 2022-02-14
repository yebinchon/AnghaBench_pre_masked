
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ide_taskfile {int feature; int nsect; int lbal; int lbam; int lbah; int device; } ;
struct ide_io_ports {unsigned long feature_addr; unsigned long nsect_addr; unsigned long lbal_addr; unsigned long lbam_addr; unsigned long lbah_addr; unsigned long device_addr; } ;
struct TYPE_4__ {int host_flags; struct ide_io_ports io_ports; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void FUNC_0 (int,unsigned long) ;
 void FUNC_1 (int,unsigned long) ;

void FUNC_2(ide_drive_t *VAR_7, struct ide_taskfile *VAR_8, u8 VAR_9)
{
 ide_hwif_t *VAR_10 = VAR_7->hwif;
 struct ide_io_ports *VAR_11 = &VAR_10->io_ports;
 void (*VAR_12)(u8 VAR_13, unsigned long VAR_14);
 u8 VAR_15 = (VAR_10->host_flags & VAR_0) ? 1 : 0;

 if (VAR_15)
  VAR_12 = FUNC_0;
 else
  VAR_12 = FUNC_1;

 if (VAR_9 & VAR_2)
  VAR_12(VAR_8->feature, VAR_11->feature_addr);
 if (VAR_9 & VAR_6)
  VAR_12(VAR_8->nsect, VAR_11->nsect_addr);
 if (VAR_9 & VAR_4)
  VAR_12(VAR_8->lbal, VAR_11->lbal_addr);
 if (VAR_9 & VAR_5)
  VAR_12(VAR_8->lbam, VAR_11->lbam_addr);
 if (VAR_9 & VAR_3)
  VAR_12(VAR_8->lbah, VAR_11->lbah_addr);
 if (VAR_9 & VAR_1)
  VAR_12(VAR_8->device, VAR_11->device_addr);
}
