
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int dummy; } ;
struct pcmcia_state {int detect; int ready; int bvd1; int bvd2; int vs_3v; scalar_t__ vs_Xv; scalar_t__ wrprot; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct soc_pcmcia_socket *VAR_5, struct pcmcia_state *VAR_6)
{
 unsigned long VAR_7 = VAR_4;

 VAR_6->detect = (VAR_7 & VAR_2) ?0:1;
 VAR_6->ready = (VAR_7 & VAR_3) ?1:0;
 VAR_6->bvd1 = (VAR_7 & VAR_0)?1:0;
 VAR_6->bvd2 = (VAR_7 & VAR_1)?1:0;
 VAR_6->wrprot = 0;
 VAR_6->vs_3v = 1;
 VAR_6->vs_Xv = 0;
}
