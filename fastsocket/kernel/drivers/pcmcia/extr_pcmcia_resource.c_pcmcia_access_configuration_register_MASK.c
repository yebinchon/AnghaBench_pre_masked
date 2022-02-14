
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct pcmcia_socket {int dummy; } ;
struct pcmcia_device {TYPE_1__* function_config; struct pcmcia_socket* socket; } ;
struct TYPE_4__ {int state; int ConfigBase; } ;
typedef TYPE_1__ config_t ;
struct TYPE_5__ {int Offset; int Action; int Value; } ;
typedef TYPE_2__ conf_reg_t ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_socket*,int,int,int,int *) ;
 int FUNC_1 (struct pcmcia_socket*,int,int,int,int *) ;

int FUNC_2(struct pcmcia_device *VAR_3,
      conf_reg_t *VAR_4)
{
 struct pcmcia_socket *VAR_5;
 config_t *VAR_6;
 int VAR_7;
 u_char VAR_8;

 if (!VAR_3 || !VAR_3->function_config)
  return -VAR_2;

 VAR_5 = VAR_3->socket;
 VAR_6 = VAR_3->function_config;

 if (!(VAR_6->state & VAR_0))
  return -VAR_1;

 VAR_7 = (VAR_6->ConfigBase + VAR_4->Offset) >> 1;

 switch (VAR_4->Action) {
 case 129:
  FUNC_0(VAR_5, 1, VAR_7, 1, &VAR_8);
  VAR_4->Value = VAR_8;
  break;
 case 128:
  VAR_8 = VAR_4->Value;
  FUNC_1(VAR_5, 1, VAR_7, 1, &VAR_8);
  break;
 default:
  return -VAR_2;
  break;
 }
 return 0;
}
