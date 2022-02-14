
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {size_t nr; } ;
struct pcmcia_state {int detect; int ready; int bvd1; int bvd2; int vs_3v; int vs_Xv; int wrprot; } ;


 unsigned short FUNC_0 () ;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 unsigned short* VAR_7 ;

__attribute__((used)) static void FUNC_2(struct soc_pcmcia_socket *VAR_8,
    struct pcmcia_state *VAR_9)
{
 unsigned short VAR_10 = 0, VAR_11;
 VAR_10 = FUNC_0();
 VAR_11 = (VAR_10 ^ VAR_7[VAR_8->nr]) &
    VAR_2;
 if (VAR_11) {
  VAR_7[VAR_8->nr] = VAR_10;
  if (VAR_10 & VAR_0) {

  } else {

  }
 }

 switch (VAR_8->nr) {
 case 0:

  VAR_9->detect = FUNC_1(VAR_5) ? 0 : 1;
  VAR_9->ready = FUNC_1(VAR_6) ? 1 : 0;
  VAR_9->bvd1 = (VAR_10 & VAR_0) ? 1 : 0;
  VAR_9->bvd2 = (VAR_10 & VAR_1) ? 1 : 0;
  VAR_9->vs_3v = (VAR_10 & VAR_3) ? 0 : 1;
  VAR_9->vs_Xv = (VAR_10 & VAR_4) ? 0 : 1;
  VAR_9->wrprot = 0;
  break;



 case 1:
  VAR_9->detect = 0;
  VAR_9->ready = 0;
  VAR_9->bvd1 = 0;
  VAR_9->bvd2 = 0;
  VAR_9->vs_3v = 0;
  VAR_9->vs_Xv = 0;
  VAR_9->wrprot = 0;
  break;


 }
}
