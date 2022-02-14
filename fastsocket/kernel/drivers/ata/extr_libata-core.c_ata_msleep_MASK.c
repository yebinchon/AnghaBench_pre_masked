
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {scalar_t__ eh_owner; } ;


 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_port*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (unsigned int) ;

void FUNC_3(struct ata_port *VAR_1, unsigned int VAR_2)
{
 bool VAR_3 = VAR_1 && VAR_1->host->eh_owner == VAR_0;

 if (VAR_3)
  FUNC_1(VAR_1);

 FUNC_2(VAR_2);

 if (VAR_3)
  FUNC_0(VAR_1);
}
