
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct nwpserial_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 struct nwpserial_port* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,TYPE_1__*) ;

void FUNC_3(int VAR_4)
{
 struct nwpserial_port *VAR_5 = &VAR_2[VAR_4];
 FUNC_0(&VAR_1);
 FUNC_2(&VAR_3, &VAR_5->port);

 VAR_5->port.type = VAR_0;

 FUNC_1(&VAR_1);
}
