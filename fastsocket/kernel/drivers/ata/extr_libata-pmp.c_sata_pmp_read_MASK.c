
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ata_taskfile {int flags; int feature; int nsect; int lbal; int lbam; int lbah; int device; int protocol; int command; } ;
struct TYPE_2__ {struct ata_device* device; } ;
struct ata_port {TYPE_1__ link; } ;
struct ata_link {int pmp; struct ata_port* ap; } ;
struct ata_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (struct ata_device*,struct ata_taskfile*,int *,int ,int *,int ,int ) ;
 int FUNC_1 (struct ata_device*,struct ata_taskfile*) ;

__attribute__((used)) static unsigned int FUNC_2(struct ata_link *VAR_7, int VAR_8, u32 *VAR_9)
{
 struct ata_port *VAR_10 = VAR_7->ap;
 struct ata_device *VAR_11 = VAR_10->link.device;
 struct ata_taskfile VAR_12;
 unsigned int VAR_13;

 FUNC_1(VAR_11, &VAR_12);
 VAR_12.command = VAR_0;
 VAR_12.protocol = VAR_1;
 VAR_12.flags |= VAR_3 | VAR_2 | VAR_4;
 VAR_12.feature = VAR_8;
 VAR_12.device = VAR_7->pmp;

 VAR_13 = FUNC_0(VAR_11, &VAR_12, ((void*)0), VAR_5, ((void*)0), 0,
         VAR_6);
 if (VAR_13)
  return VAR_13;

 *VAR_9 = VAR_12.nsect | VAR_12.lbal << 8 | VAR_12.lbam << 16 | VAR_12.lbah << 24;
 return 0;
}
