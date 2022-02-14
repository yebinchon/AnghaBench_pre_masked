
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int action; } ;
struct TYPE_4__ {TYPE_1__ eh_info; } ;
struct ata_port {int pm_policy; TYPE_2__ link; } ;
typedef enum link_pm { ____Placeholder_link_pm } link_pm ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_port*) ;

void FUNC_1(struct ata_port *VAR_2, enum link_pm VAR_3)
{
 VAR_2->pm_policy = VAR_3;
 VAR_2->link.eh_info.action |= VAR_1;
 VAR_2->link.eh_info.flags |= VAR_0;
 FUNC_0(VAR_2);
}
