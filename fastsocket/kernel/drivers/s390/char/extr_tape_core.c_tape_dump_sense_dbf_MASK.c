
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tape_request {size_t op; } ;
struct tape_device {int cdev_id; } ;
struct TYPE_3__ {unsigned int dstat; unsigned int cstat; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct irb {scalar_t__ ecw; TYPE_2__ scsw; } ;


 int FUNC_0 (int,char*,unsigned int,...) ;
 char** VAR_0 ;

void
FUNC_1(struct tape_device *VAR_1, struct tape_request *VAR_2,
      struct irb *VAR_3)
{
 unsigned int *VAR_4;
 const char* VAR_5;

 if (VAR_2 != ((void*)0))
  VAR_5 = VAR_0[VAR_2->op];
 else
  VAR_5 = "---";
 FUNC_0(3, "DSTAT : %02x   CSTAT: %02x\n",
    VAR_3->scsw.cmd.dstat, VAR_3->scsw.cmd.cstat);
 FUNC_0(3, "DEVICE: %08x OP\t: %s\n", VAR_1->cdev_id, VAR_5);
 VAR_4 = (unsigned int *) VAR_3->ecw;
 FUNC_0(3, "%08x %08x\n", VAR_4[0], VAR_4[1]);
 FUNC_0(3, "%08x %08x\n", VAR_4[2], VAR_4[3]);
 FUNC_0(3, "%08x %08x\n", VAR_4[4], VAR_4[5]);
 FUNC_0(3, "%08x %08x\n", VAR_4[6], VAR_4[7]);
}
