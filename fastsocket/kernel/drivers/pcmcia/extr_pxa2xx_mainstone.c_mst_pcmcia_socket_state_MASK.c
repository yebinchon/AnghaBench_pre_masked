
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {scalar_t__ nr; } ;
struct pcmcia_state {int detect; int ready; int bvd1; int bvd2; int vs_3v; int vs_Xv; scalar_t__ wrprot; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long* VAR_10 ;

__attribute__((used)) static void FUNC_2(struct soc_pcmcia_socket *VAR_11,
        struct pcmcia_state *VAR_12)
{
 unsigned long VAR_13, VAR_14;

 VAR_13 = (VAR_11->nr == 0) ? VAR_2 : VAR_3;
 VAR_14 = (VAR_13 ^ VAR_10[VAR_11->nr]) & VAR_7;






 if (VAR_14) {
  VAR_10[VAR_11->nr] = VAR_13;
  if (VAR_13 & VAR_7)
   FUNC_1( (VAR_11->nr == 0) ? VAR_0
         : VAR_1 );
  else
   FUNC_0( (VAR_11->nr == 0) ? VAR_0
          : VAR_1 );
 }

 VAR_12->detect = (VAR_13 & VAR_4) ? 0 : 1;
 VAR_12->ready = (VAR_13 & VAR_5) ? 1 : 0;
 VAR_12->bvd1 = (VAR_13 & VAR_7) ? 1 : 0;
 VAR_12->bvd2 = (VAR_13 & VAR_6) ? 1 : 0;
 VAR_12->vs_3v = (VAR_13 & VAR_8) ? 0 : 1;
 VAR_12->vs_Xv = (VAR_13 & VAR_9) ? 0 : 1;
 VAR_12->wrprot = 0;
}
