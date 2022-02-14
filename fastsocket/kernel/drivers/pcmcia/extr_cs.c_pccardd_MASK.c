
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {unsigned int thread_events; int dev; int skt_mutex; int thread_lock; int thread_done; int * thread; int socket; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_socket ) (struct pcmcia_socket*,int *) ;int (* init ) (struct pcmcia_socket*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int * VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (struct pcmcia_socket*,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (struct pcmcia_socket*) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (struct pcmcia_socket*) ;
 int FUNC_18 (struct pcmcia_socket*,int *) ;
 int FUNC_19 () ;

__attribute__((used)) static int FUNC_20(void *VAR_13)
{
 struct pcmcia_socket *VAR_14 = VAR_13;
 int VAR_15;

 VAR_14->thread = VAR_11;
 VAR_14->socket = VAR_12;
 VAR_14->ops->init(VAR_14);
 VAR_14->ops->set_socket(VAR_14, &VAR_14->socket);


 VAR_15 = FUNC_3(&VAR_14->dev);
 if (VAR_15) {
  FUNC_1(VAR_4, &VAR_14->dev,
      "PCMCIA: unable to register socket\n");
  VAR_14->thread = ((void*)0);
  FUNC_0(&VAR_14->thread_done);
  return 0;
 }
 VAR_15 = FUNC_8(&VAR_14->dev);
 if (VAR_15)
  FUNC_2(&VAR_14->dev, "err %d adding socket attributes\n", VAR_15);

 FUNC_0(&VAR_14->thread_done);

 FUNC_13();
 for (;;) {
  unsigned long VAR_16;
  unsigned int VAR_17;

  FUNC_12(VAR_9);

  FUNC_15(&VAR_14->thread_lock, VAR_16);
  VAR_17 = VAR_14->thread_events;
  VAR_14->thread_events = 0;
  FUNC_16(&VAR_14->thread_lock, VAR_16);

  if (VAR_17) {
   FUNC_6(&VAR_14->skt_mutex);
   if (VAR_17 & VAR_7)
    FUNC_14(VAR_14);
   if (VAR_17 & VAR_5)
    FUNC_11(VAR_14, VAR_0, VAR_2);
   if (VAR_17 & VAR_6)
    FUNC_11(VAR_14, VAR_1, VAR_2);
   if (VAR_17 & VAR_8)
    FUNC_11(VAR_14, VAR_3, VAR_2);
   FUNC_7(&VAR_14->skt_mutex);
   continue;
  }

  if (FUNC_5())
   break;

  FUNC_10();
  FUNC_19();
 }

 FUNC_12(VAR_10);


 FUNC_9(&VAR_14->dev);
 FUNC_4(&VAR_14->dev);

 return 0;
}
