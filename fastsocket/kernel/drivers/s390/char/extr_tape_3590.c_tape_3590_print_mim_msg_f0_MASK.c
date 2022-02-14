
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tape_device {TYPE_3__* cdev; } ;
struct TYPE_4__ {int emc; int mp; int md; int smc; } ;
struct TYPE_5__ {TYPE_1__ f70; } ;
struct tape_3590_sense {TYPE_2__ fmt; } ;
struct irb {scalar_t__ ecw; } ;
struct TYPE_6__ {int dev; } ;


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

 switch (VAR_4->fmt.f70.emc) {
 case 0x02:
  FUNC_3(VAR_5, VAR_0, "Data degraded");
  break;
 case 0x03:
  FUNC_3(VAR_5, VAR_0, "Data degraded in partion %i",
   VAR_4->fmt.f70.mp);
  break;
 case 0x04:
  FUNC_3(VAR_5, VAR_0, "Medium degraded");
  break;
 case 0x05:
  FUNC_3(VAR_5, VAR_0, "Medium degraded in partition %i",
   VAR_4->fmt.f70.mp);
  break;
 case 0x06:
  FUNC_3(VAR_5, VAR_0, "Block 0 Error");
  break;
 case 0x07:
  FUNC_3(VAR_5, VAR_0, "Medium Exception 0x%02x",
   VAR_4->fmt.f70.md);
  break;
 default:
  FUNC_3(VAR_5, VAR_0, "0x%02x",
   VAR_4->fmt.f70.emc);
  break;
 }

 switch (VAR_4->fmt.f70.smc) {
 case 0x02:
  FUNC_3(VAR_6, VAR_0, "Reference Media maintenance "
   "procedure %i", VAR_4->fmt.f70.md);
  break;
 default:
  FUNC_3(VAR_6, VAR_0, "0x%02x",
   VAR_4->fmt.f70.smc);
  break;
 }

 FUNC_0 (&VAR_2->cdev->dev, "Tape media information: exception %s, "
  "service %s\n", VAR_5, VAR_6);

out_nomem:
 FUNC_1(VAR_5);
 FUNC_1(VAR_6);
}
