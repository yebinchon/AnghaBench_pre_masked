
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {scalar_t__ suspended; scalar_t__ _removed; TYPE_2__* socket; } ;
struct TYPE_3__ {int present; } ;
struct TYPE_4__ {TYPE_1__ pcmcia_state; } ;


 struct pcmcia_device* FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*) ;

struct pcmcia_device * FUNC_2(struct pcmcia_device *VAR_0)
{
 struct pcmcia_device *VAR_1;
 struct pcmcia_device *VAR_2 = ((void*)0);

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 if (!VAR_1->socket->pcmcia_state.present)
  goto out;

 if (VAR_1->_removed)
  goto out;

 if (VAR_1->suspended)
  goto out;

 VAR_2 = VAR_1;
 out:
 FUNC_1(VAR_1);
 return VAR_2;
}
