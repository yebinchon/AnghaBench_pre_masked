
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
 int VAR_31 ;
 int VAR_32 ;
 TYPE_1__* VAR_33 ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_34, struct enc_private *VAR_35,
        uint16_t VAR_36, uint16_t VAR_37)
{
 register uint16_t VAR_38;
 register uint16_t VAR_39;
 register uint16_t VAR_40 = VAR_36;


 VAR_38 = ((VAR_40 & VAR_30) << ((VAR_2 + 1) - VAR_22));

 VAR_39 = (VAR_12 | VAR_13
        | ((VAR_40 & VAR_25) << (VAR_5 - VAR_17))
        |((VAR_40 & VAR_32) >> (VAR_24 - VAR_10)));


 if (!VAR_37)
  VAR_39 |= ((VAR_40 & VAR_31) >> (VAR_23 -
          VAR_9));


 switch ((VAR_40 & VAR_28) >> VAR_20) {
 case 128:
  VAR_38 |= ((2 << VAR_1)
   |((VAR_40 & VAR_27) << (VAR_1 - VAR_19)));
  VAR_39 |= ((1 << VAR_7)
   |(VAR_16 << VAR_6));
  break;

 case 129:
  VAR_38 |= ((2 << VAR_1)
   |((VAR_40 & VAR_27) << (VAR_1 - VAR_19)));
  VAR_39 |= ((1 << VAR_7)
   |(VAR_15 << VAR_6));
  break;

 default:
  VAR_38 |= (VAR_0 << VAR_1);
  VAR_39 |= (((VAR_40 & VAR_27) >> (VAR_19 - VAR_7))
   |(((VAR_40 & VAR_26) == (VAR_15 << VAR_18)) ?
     (VAR_16 << VAR_6) :
     ((VAR_40 & VAR_26) << (VAR_6 -
       VAR_18))));
 }



 if (~VAR_40 & VAR_30)
  VAR_39 |= ((VAR_40 & VAR_29) >> (VAR_21 -
           VAR_8));



 if (VAR_37)
  VAR_33->CounterIntEnabs &= ~VAR_35->MyEventBits[3];



 FUNC_0(VAR_34, VAR_35->MyCRA,
      (uint16_t) (~(VAR_4 | VAR_3)), VAR_38);
 FUNC_0(VAR_34, VAR_35->MyCRB, VAR_11 | VAR_14, VAR_39);
}
