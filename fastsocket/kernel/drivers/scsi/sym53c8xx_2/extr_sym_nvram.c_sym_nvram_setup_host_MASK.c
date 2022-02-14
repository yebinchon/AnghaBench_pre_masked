
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int host_id; int factor; int width; int mode; } ;
struct TYPE_6__ {int host_id; } ;
struct TYPE_5__ {int flags; int host_id; int flags1; int flags2; } ;
struct TYPE_8__ {TYPE_3__ parisc; TYPE_2__ Tekram; TYPE_1__ Symbios; } ;
struct sym_nvram {int type; TYPE_4__ data; } ;
struct sym_hcb {int rv_scntl0; int myaddr; int verbose; int minsync; int maxwide; int scsi_mode; int usrflags; } ;
struct Scsi_Host {int reverse_ordering; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




void FUNC_0(struct Scsi_Host *VAR_8, struct sym_hcb *VAR_9, struct sym_nvram *VAR_10)
{




 switch (VAR_10->type) {
 case 129:
  if (!(VAR_10->data.Symbios.flags & VAR_4))
   VAR_9->rv_scntl0 &= ~0x0a;
  VAR_9->myaddr = VAR_10->data.Symbios.host_id & 0x0f;
  if (VAR_10->data.Symbios.flags & VAR_6)
   VAR_9->verbose += 1;
  if (VAR_10->data.Symbios.flags1 & VAR_5)
   VAR_8->reverse_ordering = 1;
  if (VAR_10->data.Symbios.flags2 & VAR_3)
   VAR_9->usrflags |= VAR_7;
  break;
 case 128:
  VAR_9->myaddr = VAR_10->data.Tekram.host_id & 0x0f;
  break;
 default:
  break;
 }
}
