
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pardevice {long timeout; TYPE_2__* port; } ;
struct TYPE_4__ {TYPE_1__* physport; } ;
struct TYPE_3__ {struct pardevice* cad; } ;


 int FUNC_0 (TYPE_2__*) ;

long FUNC_1 (struct pardevice *VAR_0, long VAR_1)
{
 long int VAR_2 = VAR_0->timeout;

 VAR_0->timeout = VAR_1;

 if (VAR_0->port->physport->cad == VAR_0)
  FUNC_0 (VAR_0->port);

 return VAR_2;
}
