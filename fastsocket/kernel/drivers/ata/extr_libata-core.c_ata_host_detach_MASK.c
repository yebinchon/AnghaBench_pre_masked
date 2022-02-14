
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_host {int n_ports; int * ports; } ;


 int FUNC_0 (struct ata_host*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ata_host *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->n_ports; VAR_1++)
  FUNC_1(VAR_0->ports[VAR_1]);


 FUNC_0(VAR_0);
}
