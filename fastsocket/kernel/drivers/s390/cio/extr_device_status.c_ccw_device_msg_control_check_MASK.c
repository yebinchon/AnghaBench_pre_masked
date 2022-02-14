
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct irb {int scsw; } ;
struct ccw_device {TYPE_3__* private; } ;
struct TYPE_5__ {int sch_no; int ssid; } ;
struct TYPE_4__ {int devno; } ;
struct TYPE_6__ {TYPE_2__ schid; TYPE_1__ dev_id; } ;


 int FUNC_0 (int ,struct irb*,int) ;
 int FUNC_1 (int ,char*,int ,int ,int,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_7(struct ccw_device *VAR_3, struct irb *VAR_4)
{
 char VAR_5[15];

 if (!FUNC_5(&VAR_4->scsw) ||
     !(FUNC_3(&VAR_4->scsw) & (VAR_1 |
       VAR_0 | VAR_2)))
  return;
 FUNC_1(0, "Channel-Check or Interface-Control-Check "
        "received"
        " ... device %04x on subchannel 0.%x.%04x, dev_stat "
        ": %02X sch_stat : %02X\n",
        VAR_3->private->dev_id.devno, VAR_3->private->schid.ssid,
        VAR_3->private->schid.sch_no,
        FUNC_4(&VAR_4->scsw), FUNC_3(&VAR_4->scsw));
 FUNC_6(VAR_5, "chk%x", VAR_3->private->schid.sch_no);
 FUNC_2(0, VAR_5);
 FUNC_0(0, VAR_4, sizeof(struct irb));
}
