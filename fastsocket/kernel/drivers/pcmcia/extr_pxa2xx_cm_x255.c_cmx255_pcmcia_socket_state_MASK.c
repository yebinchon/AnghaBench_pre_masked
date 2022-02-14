
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {scalar_t__ nr; } ;
struct pcmcia_state {int detect; int ready; int bvd1; int bvd2; scalar_t__ wrprot; scalar_t__ vs_Xv; scalar_t__ vs_3v; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct soc_pcmcia_socket *VAR_4,
           struct pcmcia_state *VAR_5)
{
 int VAR_6 = VAR_4->nr ? VAR_2 : VAR_0;
 int VAR_7 = VAR_4->nr ? VAR_3 : VAR_1;

 VAR_5->detect = !FUNC_0(VAR_6);
 VAR_5->ready = !!FUNC_0(VAR_7);
 VAR_5->bvd1 = 1;
 VAR_5->bvd2 = 1;
 VAR_5->vs_3v = 0;
 VAR_5->vs_Xv = 0;
 VAR_5->wrprot = 0;
}
