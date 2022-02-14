
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tape_request {scalar_t__ op; int rescnt; } ;
struct tape_device {int dummy; } ;
struct TYPE_3__ {int dstat; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct irb {TYPE_2__ scsw; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct tape_request*) ;
 int FUNC_2 (struct tape_request*,int ) ;
 int FUNC_3 (struct tape_device*,struct tape_request*,struct irb*) ;
 int FUNC_4 (struct tape_device*,struct irb*) ;
 int FUNC_5 (struct tape_device*,struct tape_request*,struct irb*) ;

__attribute__((used)) static int
FUNC_6(struct tape_device *VAR_8, struct tape_request *VAR_9,
       struct irb *VAR_10)
{
 if (VAR_9 == ((void*)0))
  return FUNC_4(VAR_8, VAR_10);

 if ((VAR_10->scsw.cmd.dstat & VAR_2) &&
     (VAR_10->scsw.cmd.dstat & VAR_0) &&
     (VAR_9->op == VAR_7)) {

  return FUNC_2(VAR_9, -VAR_3);
 }

 if (VAR_10->scsw.cmd.dstat & VAR_1)
  return FUNC_3(VAR_8, VAR_9, VAR_10);

 if (VAR_10->scsw.cmd.dstat & VAR_0) {



  if (VAR_10->scsw.cmd.dstat & VAR_2) {
   if (VAR_9->op == VAR_5 || VAR_9->op == VAR_6)
    VAR_9->rescnt++;
   else
    FUNC_0(5, "Unit Exception!\n");
  }
  return FUNC_1(VAR_9);
 }

 FUNC_0(6, "xunknownirq\n");
 FUNC_5(VAR_8, VAR_9, VAR_10);
 return VAR_4;
}
