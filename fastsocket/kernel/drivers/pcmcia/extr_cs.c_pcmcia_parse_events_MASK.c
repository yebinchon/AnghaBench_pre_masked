
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct pcmcia_socket {scalar_t__ thread; int thread_lock; int thread_events; } ;


 int FUNC_0 (struct pcmcia_socket*,int,char*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct pcmcia_socket *VAR_0, u_int VAR_1)
{
 unsigned long VAR_2;
 FUNC_0(VAR_0, 4, "parse_events: events %08x\n", VAR_1);
 if (VAR_0->thread) {
  FUNC_1(&VAR_0->thread_lock, VAR_2);
  VAR_0->thread_events |= VAR_1;
  FUNC_2(&VAR_0->thread_lock, VAR_2);

  FUNC_3(VAR_0->thread);
 }
}
