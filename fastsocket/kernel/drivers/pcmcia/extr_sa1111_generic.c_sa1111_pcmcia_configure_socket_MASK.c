
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct soc_pcmcia_socket {int nr; int dev; } ;
struct sa1111_dev {scalar_t__ mapbase; } ;
struct TYPE_3__ {int Vcc; int flags; } ;
typedef TYPE_1__ socket_state_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct sa1111_dev* FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

int FUNC_5(struct soc_pcmcia_socket *VAR_11, const socket_state_t *VAR_12)
{
 struct sa1111_dev *VAR_13 = FUNC_0(VAR_11->dev);
 unsigned int VAR_14, VAR_15, VAR_16;
 unsigned long VAR_17;

 switch (VAR_11->nr) {
 case 0:
  VAR_14 = VAR_3|VAR_0|VAR_2|VAR_1;
  break;

 case 1:
  VAR_14 = VAR_7|VAR_4|VAR_6|VAR_5;
  break;

 default:
  return -1;
 }

 VAR_15 = 0;

 if (VAR_12->Vcc != 0)
  VAR_15 |= VAR_2|VAR_6;
 if (VAR_12->Vcc == 50)
  VAR_15 |= VAR_1|VAR_5;
 if (VAR_12->flags & VAR_10)
  VAR_15 |= VAR_3|VAR_7;
 if (VAR_12->flags & VAR_9)
  VAR_15 |= VAR_0|VAR_4;

 FUNC_2(VAR_17);
 VAR_16 = FUNC_3(VAR_13->mapbase + VAR_8);
 VAR_16 &= ~VAR_14;
 VAR_16 |= VAR_15 & VAR_14;
 FUNC_4(VAR_16, VAR_13->mapbase + VAR_8);
 FUNC_1(VAR_17);

 return 0;
}
