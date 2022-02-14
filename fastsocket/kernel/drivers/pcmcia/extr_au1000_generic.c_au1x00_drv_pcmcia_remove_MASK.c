
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skt_dev_info {int nskt; } ;
struct platform_device {int dummy; } ;
struct au1000_pcmcia_socket {int * virt_io; TYPE_1__* ops; int socket; int poll_timer; } ;
struct TYPE_2__ {int (* hw_shutdown ) (struct au1000_pcmcia_socket*) ;} ;


 struct au1000_pcmcia_socket* FUNC_0 (int) ;
 int FUNC_1 (struct au1000_pcmcia_socket*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct skt_dev_info*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 struct skt_dev_info* FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*,int *) ;
 int FUNC_11 (struct au1000_pcmcia_socket*) ;

int FUNC_12(struct platform_device *VAR_3)
{
 struct skt_dev_info *VAR_4 = FUNC_9(VAR_3);
 int VAR_5;

 FUNC_6(&VAR_2);
 FUNC_10(VAR_3, ((void*)0));

 for (VAR_5 = 0; VAR_5 < VAR_4->nskt; VAR_5++) {
  struct au1000_pcmcia_socket *VAR_6 = FUNC_0(VAR_5);

  FUNC_2(&VAR_6->poll_timer);
  FUNC_8(&VAR_6->socket);
  FUNC_3();
  VAR_6->ops->hw_shutdown(VAR_6);
  FUNC_1(VAR_6, &VAR_0);
  FUNC_4(VAR_6->virt_io + (u32)VAR_1);
  VAR_6->virt_io = ((void*)0);
 }

 FUNC_5(VAR_4);
 FUNC_7(&VAR_2);
 return 0;
}
