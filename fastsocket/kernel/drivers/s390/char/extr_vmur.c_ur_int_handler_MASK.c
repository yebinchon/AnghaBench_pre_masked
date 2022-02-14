
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urdev {int io_done; int io_request_rc; } ;
struct TYPE_4__ {int dstat; int count; int cstat; } ;
struct TYPE_3__ {TYPE_2__ cmd; } ;
struct irb {TYPE_1__ scsw; } ;
struct ccw_device {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct irb*) ;
 int FUNC_2 (struct irb*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;
 struct urdev* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ccw_device *VAR_3, unsigned long VAR_4,
      struct irb *VAR_5)
{
 struct urdev *VAR_6;

 FUNC_3("ur_int_handler: intparm=0x%lx cstat=%02x dstat=%02x res=%u\n",
       VAR_4, VAR_5->scsw.cmd.cstat, VAR_5->scsw.cmd.dstat,
       VAR_5->scsw.cmd.count);

 if (!VAR_4) {
  FUNC_3("ur_int_handler: unsolicited interrupt\n");
  return;
 }
 VAR_6 = FUNC_5(&VAR_3->dev);
 FUNC_0(!VAR_6);

 if (FUNC_1(VAR_5))
  VAR_6->io_request_rc = FUNC_2(VAR_5);
 else if (VAR_5->scsw.cmd.dstat == (VAR_0 | VAR_1))
  VAR_6->io_request_rc = 0;
 else
  VAR_6->io_request_rc = -VAR_2;

 FUNC_4(VAR_6->io_done);
}
