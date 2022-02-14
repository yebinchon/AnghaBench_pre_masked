
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mc_request {int regs; TYPE_1__* cmd; } ;
struct mconsole_entry {int list; struct mc_request request; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int regs; } ;
struct TYPE_3__ {scalar_t__ context; int (* handler ) (struct mc_request*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 () ;
 struct mconsole_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (long,struct mc_request*) ;
 int FUNC_5 (struct mc_request*,char*,int,int ) ;
 int VAR_5 ;
 int FUNC_6 (long,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mc_request*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_6, void *VAR_7)
{

 long VAR_8;
 struct mconsole_entry *VAR_9;
 static struct mc_request VAR_10;

 VAR_8 = (long) VAR_7;
 while (FUNC_4(VAR_8, &VAR_10)) {
  if (VAR_10.cmd->context == VAR_2)
   (*VAR_10.cmd->handler)(&VAR_10);
  else {
   VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_0);
   if (VAR_9 == ((void*)0))
    FUNC_5(&VAR_10, "Out of memory", 1, 0);
   else {
    VAR_9->request = VAR_10;
    VAR_9->request.regs = FUNC_0()->regs;
    FUNC_2(&VAR_9->list, &VAR_4);
   }
  }
 }
 if (!FUNC_3(&VAR_4))
  FUNC_7(&VAR_5);
 FUNC_6(VAR_8, VAR_3);
 return VAR_1;
}
