
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct senseid {int dummy; } ;
struct cmd_scsw {int count; } ;
struct ccw_device {TYPE_5__* private; } ;
struct TYPE_7__ {int esid; } ;
struct TYPE_6__ {int cu_type; int reserved; } ;
struct TYPE_8__ {struct cmd_scsw cmd; } ;
struct TYPE_9__ {TYPE_3__ scsw; } ;
struct TYPE_10__ {TYPE_2__ flags; TYPE_1__ senseid; TYPE_4__ irb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ccw_device*) ;

__attribute__((used)) static int FUNC_1(struct ccw_device *VAR_4, void *VAR_5)
{
 struct cmd_scsw *VAR_6 = &VAR_4->private->irb.scsw.cmd;
 int VAR_7 = sizeof(struct senseid) - VAR_6->count;


 if (VAR_7 < VAR_3)
  goto out_restart;
 if (VAR_4->private->senseid.cu_type == 0xffff)
  goto out_restart;

 if (VAR_4->private->senseid.reserved != 0xff)
  return -VAR_1;

 if (VAR_7 > VAR_2)
  VAR_4->private->flags.esid = 1;
 return 0;

out_restart:
 FUNC_0(VAR_4);
 return -VAR_0;
}
