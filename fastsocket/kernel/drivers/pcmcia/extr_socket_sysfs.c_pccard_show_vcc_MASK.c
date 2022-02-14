
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Vcc; } ;
struct pcmcia_socket {int state; TYPE_1__ socket; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int,int) ;
 struct pcmcia_socket* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3,
          char *VAR_4)
{
 struct pcmcia_socket *VAR_5 = FUNC_1(VAR_2);
 if (!(VAR_5->state & VAR_1))
  return -VAR_0;
 return FUNC_0(VAR_4, "%d.%dV\n", VAR_5->socket.Vcc / 10, VAR_5->socket.Vcc % 10);
}
