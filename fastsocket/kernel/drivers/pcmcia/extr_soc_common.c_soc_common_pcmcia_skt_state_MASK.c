
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ Vcc; } ;
struct soc_pcmcia_socket {TYPE_2__ cs_state; TYPE_1__* ops; } ;
struct pcmcia_state {scalar_t__ bvd1; scalar_t__ bvd2; scalar_t__ vs_Xv; scalar_t__ vs_3v; scalar_t__ wrprot; scalar_t__ ready; scalar_t__ detect; } ;
struct TYPE_3__ {int (* socket_state ) (struct soc_pcmcia_socket*,struct pcmcia_state*) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (struct pcmcia_state*,int ,int) ;
 int FUNC_1 (struct soc_pcmcia_socket*,struct pcmcia_state*) ;

__attribute__((used)) static unsigned int FUNC_2(struct soc_pcmcia_socket *VAR_10)
{
 struct pcmcia_state VAR_11;
 unsigned int VAR_12;

 FUNC_0(&VAR_11, 0, sizeof(struct pcmcia_state));

 VAR_10->ops->socket_state(VAR_10, &VAR_11);

 VAR_12 = VAR_11.detect ? VAR_3 : 0;
 VAR_12 |= VAR_11.ready ? VAR_6 : 0;
 VAR_12 |= VAR_11.wrprot ? VAR_8 : 0;
 VAR_12 |= VAR_11.vs_3v ? VAR_0 : 0;
 VAR_12 |= VAR_11.vs_Xv ? VAR_9 : 0;





 VAR_12 |= VAR_10->cs_state.Vcc ? VAR_5 : 0;

 if (VAR_10->cs_state.flags & VAR_4)
  VAR_12 |= VAR_11.bvd1 ? VAR_7 : 0;
 else {
  if (VAR_11.bvd1 == 0)
   VAR_12 |= VAR_1;
  else if (VAR_11.bvd2 == 0)
   VAR_12 |= VAR_2;
 }
 return VAR_12;
}
