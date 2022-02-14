
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct pcmcia_device {scalar_t__ priv; } ;
struct TYPE_3__ {int stop; } ;
typedef TYPE_1__ MGSLPC_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_2)
{
 if (VAR_1 >= VAR_0)
  FUNC_2("mgslpc_detach(0x%p)\n", VAR_2);

 ((MGSLPC_INFO *)VAR_2->priv)->stop = 1;
 FUNC_0((u_long)VAR_2);

 FUNC_1((MGSLPC_INFO *)VAR_2->priv);
}
