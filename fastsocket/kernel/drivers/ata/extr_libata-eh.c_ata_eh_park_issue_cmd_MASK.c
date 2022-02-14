
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_taskfile {int feature; int lbal; int lbam; int lbah; int flags; int protocol; int command; } ;
struct ata_eh_context {int unloaded_mask; } ;
struct ata_device {int devno; TYPE_1__* link; } ;
struct TYPE_2__ {struct ata_eh_context eh_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ata_device*,int ,char*) ;
 unsigned int FUNC_1 (struct ata_device*,struct ata_taskfile*,int *,int ,int *,int ,int ) ;
 int FUNC_2 (struct ata_device*,struct ata_taskfile*) ;

__attribute__((used)) static void FUNC_3(struct ata_device *VAR_7, int VAR_8)
{
 struct ata_eh_context *VAR_9 = &VAR_7->link->eh_context;
 struct ata_taskfile VAR_10;
 unsigned int VAR_11;

 FUNC_2(VAR_7, &VAR_10);
 if (VAR_8) {
  VAR_9->unloaded_mask |= 1 << VAR_7->devno;
  VAR_10.command = VAR_1;
  VAR_10.feature = 0x44;
  VAR_10.lbal = 0x4c;
  VAR_10.lbam = 0x4e;
  VAR_10.lbah = 0x55;
 } else {
  VAR_9->unloaded_mask &= ~(1 << VAR_7->devno);
  VAR_10.command = VAR_0;
 }

 VAR_10.flags |= VAR_3 | VAR_4;
 VAR_10.protocol |= VAR_2;
 VAR_11 = FUNC_1(VAR_7, &VAR_10, ((void*)0), VAR_5, ((void*)0), 0, 0);
 if (VAR_8 && (VAR_11 || VAR_10.lbal != 0xc4)) {
  FUNC_0(VAR_7, VAR_6, "head unload failed!\n");
  VAR_9->unloaded_mask &= ~(1 << VAR_7->devno);
 }
}
