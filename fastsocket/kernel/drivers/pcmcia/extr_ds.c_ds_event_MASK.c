
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int present; } ;
struct pcmcia_socket {TYPE_1__ pcmcia_state; int dev; } ;
typedef int event_t ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,char*,int) ;
 int FUNC_1 (int,int *,char*,int,int,struct pcmcia_socket*) ;
 int FUNC_2 (struct pcmcia_socket*,int) ;
 int FUNC_3 (struct pcmcia_socket*) ;
 int FUNC_4 (struct pcmcia_socket*,int *) ;
 struct pcmcia_socket* FUNC_5 (struct pcmcia_socket*) ;
 int FUNC_6 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_7(struct pcmcia_socket *VAR_2, event_t VAR_3, int VAR_4)
{
 struct pcmcia_socket *VAR_5 = FUNC_5(VAR_2);

 if (!VAR_5) {
  FUNC_0(VAR_1, &VAR_2->dev,
      "PCMCIA obtaining reference to socket " "failed, event 0x%x lost!\n", VAR_3);

  return -VAR_0;
 }

 FUNC_1(1, &VAR_2->dev, "ds_event(0x%06x, %d, 0x%p)\n",
     VAR_3, VAR_4, VAR_2);

 switch (VAR_3) {
 case 133:
  VAR_5->pcmcia_state.present = 0;
  FUNC_4(VAR_2, ((void*)0));
  FUNC_2(VAR_2, VAR_3);
  break;

 case 134:
  VAR_5->pcmcia_state.present = 1;
  FUNC_3(VAR_2);
  FUNC_2(VAR_2, VAR_3);
  break;

 case 131:
  break;

 case 129:
 case 130:
 case 128:
 case 132:
 default:
  FUNC_2(VAR_2, VAR_3);
  break;
    }

    FUNC_6(VAR_5);

    return 0;
}
