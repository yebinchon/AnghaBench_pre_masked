
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tape_device {int cdev_id; } ;
struct TYPE_3__ {int dstat; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct irb {TYPE_2__ scsw; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tape_device*,int ) ;
 int FUNC_2 (struct tape_device*,int ) ;
 int FUNC_3 (struct tape_device*,int *,struct irb*) ;

__attribute__((used)) static int
FUNC_4(struct tape_device *VAR_2, struct irb *VAR_3)
{
 if (VAR_3->scsw.cmd.dstat == 0x85) {

  FUNC_0(6, "xuud med\n");
  FUNC_1(VAR_2, 0);
  FUNC_2(VAR_2, VAR_1);
 } else {
  FUNC_0(3, "unsol.irq! dev end: %08x\n", VAR_2->cdev_id);
  FUNC_3(VAR_2, ((void*)0), VAR_3);
 }
 return VAR_0;
}
