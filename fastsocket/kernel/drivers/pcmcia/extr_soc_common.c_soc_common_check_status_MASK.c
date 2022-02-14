
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int csc_mask; } ;
struct soc_pcmcia_socket {unsigned int status; int socket; TYPE_1__ cs_state; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct soc_pcmcia_socket*,int,char*,...) ;
 int FUNC_1 (int *,unsigned int) ;
 unsigned int FUNC_2 (struct soc_pcmcia_socket*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(struct soc_pcmcia_socket *VAR_6)
{
 unsigned int VAR_7;

 FUNC_0(VAR_6, 4, "entering PCMCIA monitoring thread\n");

 do {
  unsigned int VAR_8;
  unsigned long VAR_9;

  VAR_8 = FUNC_2(VAR_6);

  FUNC_3(&VAR_5, VAR_9);
  VAR_7 = (VAR_8 ^ VAR_6->status) & VAR_6->cs_state.csc_mask;
  VAR_6->status = VAR_8;
  FUNC_4(&VAR_5, VAR_9);

  FUNC_0(VAR_6, 4, "events: %s%s%s%s%s%s\n",
   VAR_7 == 0 ? "<NONE>" : "",
   VAR_7 & VAR_2 ? "DETECT " : "",
   VAR_7 & VAR_3 ? "READY " : "",
   VAR_7 & VAR_0 ? "BATDEAD " : "",
   VAR_7 & VAR_1 ? "BATWARN " : "",
   VAR_7 & VAR_4 ? "STSCHG " : "");

  if (VAR_7)
   FUNC_1(&VAR_6->socket, VAR_7);
 } while (VAR_7);
}
