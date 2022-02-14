
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char dstat; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct irb {TYPE_2__ scsw; } ;
struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int dummy; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (struct dasd_device*) ;

__attribute__((used)) static void FUNC_1(struct dasd_device *VAR_3,
          struct dasd_ccw_req *VAR_4,
          struct irb *VAR_5)
{
 char VAR_6;


 VAR_6 = VAR_0 | VAR_1 | VAR_2;
 if ((VAR_5->scsw.cmd.dstat & VAR_6) == VAR_6)
  FUNC_0(VAR_3);
}
