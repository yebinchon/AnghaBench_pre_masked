
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int nr; int dev; } ;
struct sa1111_dev {scalar_t__ mapbase; } ;
struct pcmcia_state {int detect; int ready; int bvd1; int bvd2; int wrprot; int vs_3v; int vs_Xv; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 struct sa1111_dev* FUNC_0 (int ) ;
 scalar_t__ VAR_14 ;
 unsigned long FUNC_1 (scalar_t__) ;

void FUNC_2(struct soc_pcmcia_socket *VAR_15, struct pcmcia_state *VAR_16)
{
 struct sa1111_dev *VAR_17 = FUNC_0(VAR_15->dev);
 unsigned long VAR_18 = FUNC_1(VAR_17->mapbase + VAR_14);

 switch (VAR_15->nr) {
 case 0:
  VAR_16->detect = VAR_18 & VAR_2 ? 0 : 1;
  VAR_16->ready = VAR_18 & VAR_3 ? 1 : 0;
  VAR_16->bvd1 = VAR_18 & VAR_0 ? 1 : 0;
  VAR_16->bvd2 = VAR_18 & VAR_1 ? 1 : 0;
  VAR_16->wrprot = VAR_18 & VAR_6 ? 1 : 0;
  VAR_16->vs_3v = VAR_18 & VAR_4 ? 0 : 1;
  VAR_16->vs_Xv = VAR_18 & VAR_5 ? 0 : 1;
  break;

 case 1:
  VAR_16->detect = VAR_18 & VAR_9 ? 0 : 1;
  VAR_16->ready = VAR_18 & VAR_10 ? 1 : 0;
  VAR_16->bvd1 = VAR_18 & VAR_7 ? 1 : 0;
  VAR_16->bvd2 = VAR_18 & VAR_8 ? 1 : 0;
  VAR_16->wrprot = VAR_18 & VAR_13 ? 1 : 0;
  VAR_16->vs_3v = VAR_18 & VAR_11 ? 0 : 1;
  VAR_16->vs_Xv = VAR_18 & VAR_12 ? 0 : 1;
  break;
 }
}
