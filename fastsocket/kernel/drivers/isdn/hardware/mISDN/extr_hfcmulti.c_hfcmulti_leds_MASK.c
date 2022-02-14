
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hfc_multi {int ledcount; int ledstate; int leds; size_t dslot; int pci_iobase; TYPE_3__* chan; int chip; } ;
struct TYPE_4__ {int protocol; } ;
struct TYPE_5__ {TYPE_1__ D; } ;
struct dchannel {int state; TYPE_2__ dev; } ;
struct TYPE_6__ {int sync; struct dchannel* dch; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfc_multi*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct hfc_multi*,int ,int,int) ;

__attribute__((used)) static void
FUNC_5(struct hfc_multi *VAR_9)
{
 unsigned long VAR_10;
 unsigned long VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 struct dchannel *VAR_16;
 int VAR_17[4];

 VAR_9->ledcount += VAR_8;
 if (VAR_9->ledcount > 4096) {
  VAR_9->ledcount -= 4096;
  VAR_9->ledstate = 0xAFFEAFFE;
 }

 switch (VAR_9->leds) {
 case 1:






  if (VAR_9->chan[VAR_9->dslot].sync != 2) {
   if (VAR_9->chan[VAR_9->dslot].dch->dev.D.protocol
    != VAR_1) {
    VAR_17[0] = 1;
    VAR_17[1] = 1;
   } else if (VAR_9->ledcount>>11) {
    VAR_17[0] = 1;
    VAR_17[1] = 1;
   } else {
    VAR_17[0] = 0;
    VAR_17[1] = 0;
   }
   VAR_17[2] = 0;
   VAR_17[3] = 0;
  } else {

   VAR_17[0] = 0;
   VAR_17[1] = 0;
   VAR_17[2] = 0;
   VAR_17[3] = 1;
  }
  VAR_15 = (VAR_17[0] | (VAR_17[1]<<2) | (VAR_17[2]<<1) | (VAR_17[3]<<3))^0xF;

  if (VAR_15 != (int)VAR_9->ledstate) {
   FUNC_0(VAR_9, VAR_6, VAR_15);
   VAR_9->ledstate = VAR_15;
  }
  break;

 case 2:




  for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
   VAR_13 = 0;
   VAR_14 = -1;
   VAR_16 = VAR_9->chan[(VAR_12 << 2) | 2].dch;
   if (VAR_16) {
    VAR_13 = VAR_16->state;
    if (VAR_16->dev.D.protocol == VAR_2)
     VAR_14 = 3;
    else
     VAR_14 = 7;
   }
   if (VAR_13) {
    if (VAR_13 == VAR_14) {
     VAR_17[VAR_12] = 1;
    } else
     if (VAR_16->dev.D.protocol == VAR_3)

      VAR_17[VAR_12] = 2;
     else
      if (VAR_9->ledcount>>11)

       VAR_17[VAR_12] = 2;
      else

       VAR_17[VAR_12] = 0;
   } else
    VAR_17[VAR_12] = 0;
  }
  if (FUNC_3(VAR_0, &VAR_9->chip)) {
   VAR_15 = 0;
   for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
    if (VAR_17[VAR_12] == 1) {

     VAR_15 |= (0x2 << (VAR_12 * 2));
    } else if (VAR_17[VAR_12] == 2) {

     VAR_15 |= (0x1 << (VAR_12 * 2));
    }
   }
   if (VAR_15 != (int)VAR_9->ledstate) {
    FUNC_4(VAR_9, 0, 0x1a8 + 3, VAR_15);
    VAR_9->ledstate = VAR_15;
   }
  } else {
   VAR_15 = ((VAR_17[3] > 0) << 0) | ((VAR_17[1] > 0) << 1) |
       ((VAR_17[0] > 0) << 2) | ((VAR_17[2] > 0) << 3) |
       ((VAR_17[3] & 1) << 4) | ((VAR_17[1] & 1) << 5) |
       ((VAR_17[0] & 1) << 6) | ((VAR_17[2] & 1) << 7);
   if (VAR_15 != (int)VAR_9->ledstate) {
    FUNC_0(VAR_9, VAR_5, VAR_15 & 0x0F);
    FUNC_0(VAR_9, VAR_6, VAR_15 >> 4);
    VAR_9->ledstate = VAR_15;
   }
  }
  break;

 case 3:




  for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
   VAR_13 = 0;
   VAR_14 = -1;
   VAR_16 = VAR_9->chan[(VAR_12 << 2) | 2].dch;
   if (VAR_16) {
    VAR_13 = VAR_16->state;
    if (VAR_16->dev.D.protocol == VAR_2)
     VAR_14 = 3;
    else
     VAR_14 = 7;
   }
   if (VAR_13) {
    if (VAR_13 == VAR_14) {
     VAR_17[VAR_12] = 1;
    } else
     if (VAR_16->dev.D.protocol == VAR_3)

      VAR_17[VAR_12] = 2;
     else
      if (VAR_9->ledcount >> 11)

       VAR_17[VAR_12] = 2;
      else

       VAR_17[VAR_12] = 0;
   } else
    VAR_17[VAR_12] = 0;
  }


  VAR_15 = (VAR_17[0] > 0) | ((VAR_17[1] > 0)<<1) | ((VAR_17[0]&1)<<2)
   | ((VAR_17[1]&1)<<3);
  if (VAR_15 != (int)VAR_9->ledstate) {
   FUNC_0(VAR_9, VAR_5,
       ((VAR_17[0] > 0) << 2) | ((VAR_17[1] > 0) << 3));
   FUNC_0(VAR_9, VAR_6,
       ((VAR_17[0] & 1) << 2) | ((VAR_17[1] & 1) << 3));
   VAR_9->ledstate = VAR_15;
  }
  break;
 case 8:
  VAR_10 = 0;

  for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
   VAR_13 = 0;
   VAR_14 = -1;
   VAR_16 = VAR_9->chan[(VAR_12 << 2) | 2].dch;
   if (VAR_16) {
    VAR_13 = VAR_16->state;
    if (VAR_16->dev.D.protocol == VAR_2)
     VAR_14 = 3;
    else
     VAR_14 = 7;
   }
   if (VAR_13) {
    if (VAR_13 == VAR_14) {
     VAR_10 |= 0 << VAR_12;
    } else
     if (VAR_9->ledcount >> 11)
      VAR_10 |= 0 << VAR_12;
     else
      VAR_10 |= 1 << VAR_12;
   } else
    VAR_10 |= 1 << VAR_12;
  }
  VAR_11 = VAR_10 << 24 | VAR_10 << 16 | VAR_10 << 8 | VAR_10;
  if (VAR_11 != VAR_9->ledstate) {



   FUNC_0(VAR_9, VAR_4, 1 | VAR_7);
   FUNC_2(0x4000, VAR_9->pci_iobase + 4);
   FUNC_1(VAR_11, VAR_9->pci_iobase);
   FUNC_0(VAR_9, VAR_4, VAR_7);
   VAR_9->ledstate = VAR_11;
  }
  break;
 }
}
