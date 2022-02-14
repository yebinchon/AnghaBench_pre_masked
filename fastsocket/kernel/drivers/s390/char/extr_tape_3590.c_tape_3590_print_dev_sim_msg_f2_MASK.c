
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tape_device {TYPE_1__* cdev; } ;
struct TYPE_6__ {int emc; int* md; int smc; int mdf; } ;
struct TYPE_5__ {TYPE_3__ f71; } ;
struct tape_3590_sense {TYPE_2__ fmt; } ;
struct irb {scalar_t__ ecw; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,char*,...) ;

__attribute__((used)) static void
FUNC_4(struct tape_device *VAR_2, struct irb *VAR_3)
{
 struct tape_3590_sense *VAR_4;
 char *VAR_5, *VAR_6;

 VAR_5 = FUNC_2(VAR_0, VAR_1);
 VAR_6 = FUNC_2(VAR_0, VAR_1);

 if (!VAR_5 || !VAR_6)
  goto out_nomem;

 VAR_4 = (struct tape_3590_sense *) VAR_3->ecw;

 switch (VAR_4->fmt.f71.emc) {
 case 0x01:
  FUNC_3(VAR_5, VAR_0, "Effect of failure is unknown");
  break;
 case 0x02:
  FUNC_3(VAR_5, VAR_0, "DV Exception - no performance"
   " impact");
  break;
 case 0x03:
  FUNC_3(VAR_5, VAR_0, "DV Exception on channel "
   "interface 0x%02x", VAR_4->fmt.f71.md[0]);
  break;
 case 0x04:
  FUNC_3(VAR_5, VAR_0, "DV Exception on loader 0x%02x",
   VAR_4->fmt.f71.md[0]);
  break;
 case 0x05:
  FUNC_3(VAR_5, VAR_0, "DV Exception on message display"
   " 0x%02x", VAR_4->fmt.f71.md[0]);
  break;
 case 0x06:
  FUNC_3(VAR_5, VAR_0, "DV Exception in tape path");
  break;
 case 0x07:
  FUNC_3(VAR_5, VAR_0, "DV Exception in drive");
  break;
 default:
  FUNC_3(VAR_5, VAR_0, "0x%02x",
   VAR_4->fmt.f71.emc);
 }

 switch (VAR_4->fmt.f71.smc) {
 case 0x01:
  FUNC_3(VAR_6, VAR_0, "Repair impact is unknown");
  break;
 case 0x02:
  FUNC_3(VAR_6, VAR_0, "Repair will not impact device "
   "performance");
  break;
 case 0x03:
  if (VAR_4->fmt.f71.mdf == 0)
   FUNC_3(VAR_6, VAR_0, "Repair will disable "
    "channel path 0x%x on DV",
    VAR_4->fmt.f71.md[1]);
  else
   FUNC_3(VAR_6, VAR_0, "Repair will disable "
    "channel path (0x%x-0x%x) on DV",
    VAR_4->fmt.f71.md[1], VAR_4->fmt.f71.md[2]);
  break;
 case 0x04:
  if (VAR_4->fmt.f71.mdf == 0)
   FUNC_3(VAR_6, VAR_0, "Repair will disable "
    "interface 0x%x on DV", VAR_4->fmt.f71.md[1]);
  else
   FUNC_3(VAR_6, VAR_0, "Repair will disable "
    "interfaces (0x%x-0x%x) on DV",
    VAR_4->fmt.f71.md[1], VAR_4->fmt.f71.md[2]);
  break;
 case 0x05:
  if (VAR_4->fmt.f71.mdf == 0)
   FUNC_3(VAR_6, VAR_0, "Repair will disable loader"
    " 0x%x on DV", VAR_4->fmt.f71.md[1]);
  else
   FUNC_3(VAR_6, VAR_0, "Repair will disable loader"
    " (0x%x-0x%x) on DV",
    VAR_4->fmt.f71.md[1], VAR_4->fmt.f71.md[2]);
  break;
 case 0x07:
  FUNC_3(VAR_6, VAR_0, "Repair will disable access to DV");
  break;
 case 0x08:
  if (VAR_4->fmt.f71.mdf == 0)
   FUNC_3(VAR_6, VAR_0, "Repair will disable "
    "message display 0x%x on DV",
    VAR_4->fmt.f71.md[1]);
  else
   FUNC_3(VAR_6, VAR_0, "Repair will disable "
    "message displays (0x%x-0x%x) on DV",
     VAR_4->fmt.f71.md[1], VAR_4->fmt.f71.md[2]);
  break;
 case 0x09:
  FUNC_3(VAR_6, VAR_0, "Clean DV");
  break;
 default:
  FUNC_3(VAR_6, VAR_0, "0x%02x",
   VAR_4->fmt.f71.smc);
 }

 FUNC_0 (&VAR_2->cdev->dev, "Device subsystem information: exception"
  " %s, service %s\n", VAR_5, VAR_6);
out_nomem:
 FUNC_1(VAR_5);
 FUNC_1(VAR_6);
}
