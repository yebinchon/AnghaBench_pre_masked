
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int action; } ;
struct ata_eh_context {TYPE_2__ i; } ;
struct TYPE_3__ {scalar_t__ sactive; struct ata_eh_context eh_context; } ;
struct ata_port {TYPE_1__ link; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_port*) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_1)
{
 struct ata_eh_context *VAR_2 = &VAR_1->link.eh_context;

 if (VAR_1->link.sactive) {
  FUNC_1(VAR_1);
  VAR_2->i.action |= VAR_0;
 }

 FUNC_0(VAR_1);
}
