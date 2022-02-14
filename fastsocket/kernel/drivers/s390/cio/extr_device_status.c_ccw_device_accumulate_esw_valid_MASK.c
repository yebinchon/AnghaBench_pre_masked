
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stctl; int actl; int eswf; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct irb {TYPE_2__ scsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct irb *VAR_3)
{
 if (!VAR_3->scsw.cmd.eswf &&
     (VAR_3->scsw.cmd.stctl == VAR_2))
  return 0;
 if (VAR_3->scsw.cmd.stctl ==
   (VAR_1|VAR_2) &&
     !(VAR_3->scsw.cmd.actl & VAR_0))
  return 0;
 return 1;
}
