
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {int res_skt; int res_io; int res_mem; int res_attr; int * virt_io; int node; TYPE_1__* ops; int socket; int poll_timer; } ;
struct skt_dev_info {int nskt; struct soc_pcmcia_socket* skt; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* hw_shutdown ) (struct soc_pcmcia_socket*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct skt_dev_info* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct skt_dev_info*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct soc_pcmcia_socket*,int *) ;
 int FUNC_13 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_14 (struct soc_pcmcia_socket*) ;

int FUNC_15(struct device *VAR_3)
{
 struct skt_dev_info *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 FUNC_2(VAR_3, ((void*)0));

 FUNC_8(&VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_4->nskt; VAR_5++) {
  struct soc_pcmcia_socket *VAR_6 = &VAR_4->skt[VAR_5];

  FUNC_0(&VAR_6->poll_timer);

  FUNC_10(&VAR_6->socket);

  FUNC_3();

  VAR_6->ops->hw_shutdown(VAR_6);

  FUNC_12(VAR_6, &VAR_0);

  FUNC_6(&VAR_6->node);
  FUNC_4(VAR_6->virt_io);
  VAR_6->virt_io = ((void*)0);
  FUNC_11(&VAR_6->res_attr);
  FUNC_11(&VAR_6->res_mem);
  FUNC_11(&VAR_6->res_io);
  FUNC_11(&VAR_6->res_skt);
 }
 if (FUNC_7(&VAR_1))
  FUNC_13();

 FUNC_9(&VAR_2);

 FUNC_5(VAR_4);

 return 0;
}
