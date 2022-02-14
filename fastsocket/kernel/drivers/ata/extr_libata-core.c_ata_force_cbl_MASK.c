
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int print_id; scalar_t__ cbl; } ;
struct TYPE_2__ {scalar_t__ cbl; int name; } ;
struct ata_force_ent {int port; TYPE_1__ param; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ata_force_ent* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_port*,int ,char*,int ) ;

void FUNC_1(struct ata_port *VAR_4)
{
 int VAR_5;

 for (VAR_5 = VAR_3 - 1; VAR_5 >= 0; VAR_5--) {
  const struct ata_force_ent *VAR_6 = &VAR_2[VAR_5];

  if (VAR_6->port != -1 && VAR_6->port != VAR_4->print_id)
   continue;

  if (VAR_6->param.cbl == VAR_0)
   continue;

  VAR_4->cbl = VAR_6->param.cbl;
  FUNC_0(VAR_4, VAR_1,
    "FORCE: cable set to %s\n", VAR_6->param.name);
  return;
 }
}
