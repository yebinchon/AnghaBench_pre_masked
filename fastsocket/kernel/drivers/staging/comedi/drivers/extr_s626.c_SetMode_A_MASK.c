
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct enc_private {int MyCRB; int MyCRA; int * MyEventBits; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int CounterIntEnabs; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct comedi_device*,int ,int,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 TYPE_1__* VAR_31 ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_32, struct enc_private *VAR_33,
        uint16_t VAR_34, uint16_t VAR_35)
{
 register uint16_t VAR_36;
 register uint16_t VAR_37;
 register uint16_t VAR_38 = VAR_34;


 VAR_36 = ((VAR_38 & VAR_9)
        |((VAR_38 & VAR_29) >> (VAR_22 - (VAR_5 + 1))));

 VAR_37 = (VAR_13 | VAR_14
        | ((VAR_38 & VAR_24) << (VAR_10 - VAR_17)));


 if (!VAR_35)
  VAR_36 |= ((VAR_38 & VAR_30) >> (VAR_23 -
          VAR_6));


 switch ((VAR_38 & VAR_27) >> VAR_20) {
 case 129:


 case 128:
  VAR_36 |= ((2 << VAR_3)
   |((VAR_38 & VAR_26) >> (VAR_19 - VAR_3))
   |(1 << VAR_2)
   |(VAR_16 << VAR_1));
  break;

 default:
  VAR_36 |= (VAR_0
   | ((VAR_38 & VAR_26) << (VAR_2 - VAR_19))
   |(((VAR_38 & VAR_25) == (VAR_15 << VAR_18)) ?
     (VAR_16 << VAR_1) :
     ((VAR_38 & VAR_25) << (VAR_1 -
       VAR_18))));
 }



 if (~VAR_38 & VAR_29)
  VAR_36 |= ((VAR_38 & VAR_28) << (VAR_4 -
           VAR_21));



 if (VAR_35)
  VAR_31->CounterIntEnabs &= ~VAR_33->MyEventBits[3];



 FUNC_0(VAR_32, VAR_33->MyCRA, VAR_8 | VAR_7, VAR_36);
 FUNC_0(VAR_32, VAR_33->MyCRB,
      (uint16_t) (~(VAR_12 | VAR_11)), VAR_37);
}
