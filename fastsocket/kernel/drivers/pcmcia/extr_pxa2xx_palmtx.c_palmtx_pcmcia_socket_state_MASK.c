
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int dummy; } ;
struct pcmcia_state {int detect; int ready; int bvd1; int bvd2; int vs_3v; scalar_t__ vs_Xv; scalar_t__ wrprot; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct soc_pcmcia_socket *VAR_1,
     struct pcmcia_state *VAR_2)
{
 VAR_2->detect = 1;
 VAR_2->ready = !!FUNC_0(VAR_0);
 VAR_2->bvd1 = 1;
 VAR_2->bvd2 = 1;
 VAR_2->wrprot = 0;
 VAR_2->vs_3v = 1;
 VAR_2->vs_Xv = 0;
}
