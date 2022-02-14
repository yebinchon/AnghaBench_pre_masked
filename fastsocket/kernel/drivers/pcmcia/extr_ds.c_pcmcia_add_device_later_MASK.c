
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device_add_pending; int mfc_pfc; } ;
struct pcmcia_socket {int device_add; TYPE_1__ pcmcia_state; int sock; int dev; } ;


 int FUNC_0 (int,int *,char*,char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct pcmcia_socket *VAR_0, int VAR_1)
{
 if (!VAR_0->pcmcia_state.device_add_pending) {
  FUNC_0(1, &VAR_0->dev, "scheduling to add %s secondary"
         " device to %d\n", VAR_1 ? "mfc" : "pfc", VAR_0->sock);
  VAR_0->pcmcia_state.device_add_pending = 1;
  VAR_0->pcmcia_state.mfc_pfc = VAR_1;
  FUNC_1(&VAR_0->device_add);
 }
 return;
}
