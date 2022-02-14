
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct raw3270_request {int rescnt; int rc; } ;
struct TYPE_3__ {int dstat; int count; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct irb {TYPE_2__ scsw; } ;
struct con3270 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct con3270*) ;

__attribute__((used)) static int
FUNC_1(struct con3270 *VAR_4, struct raw3270_request *VAR_5, struct irb *VAR_6)
{

 if (VAR_6->scsw.cmd.dstat & VAR_0)
  FUNC_0(VAR_4);

 if (VAR_5) {
  if (VAR_6->scsw.cmd.dstat & VAR_1)
   VAR_5->rc = -VAR_2;
  else

   VAR_5->rescnt = VAR_6->scsw.cmd.count;
 }
 return VAR_3;
}
