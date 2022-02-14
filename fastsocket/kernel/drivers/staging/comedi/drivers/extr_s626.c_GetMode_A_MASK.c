
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct enc_private {int MyCRB; int MyCRA; } ;
struct comedi_device {int dummy; } ;


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
 int FUNC_0 (struct comedi_device*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
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

__attribute__((used)) static uint16_t FUNC_1(struct comedi_device *VAR_29, struct enc_private *VAR_30)
{
 register uint16_t VAR_31;
 register uint16_t VAR_32;
 register uint16_t VAR_33;


 VAR_31 = FUNC_0(VAR_29, VAR_30->MyCRA);
 VAR_32 = FUNC_0(VAR_29, VAR_30->MyCRB);



 VAR_33 = ((VAR_31 & VAR_28)
   |((VAR_32 << (VAR_20 - VAR_10)) & VAR_27)
   |((VAR_31 << (VAR_19 - VAR_7)) & VAR_26)
   |((VAR_31 << (VAR_18 - (VAR_6 + 1))) & VAR_25)
   |((VAR_31 >> (VAR_5 - VAR_17)) & VAR_24)
   |((VAR_32 >> (VAR_9 - VAR_13)) & VAR_21));


 if (VAR_31 & (2 << VAR_4))
  VAR_33 |= ((VAR_1 << VAR_16)
     |((VAR_31 << (VAR_15 - VAR_4)) & VAR_23)
     |(VAR_12 << VAR_14));

 else
  VAR_33 |= ((VAR_0 << VAR_16)
     |((VAR_31 >> (VAR_3 - VAR_15)) & VAR_23)
     |(((VAR_31 & VAR_8) == (VAR_11 << VAR_2)) ?
       (VAR_12 << VAR_14) :
       ((VAR_31 >> (VAR_2 -
          VAR_14)) & VAR_22)));


 return VAR_33;
}
