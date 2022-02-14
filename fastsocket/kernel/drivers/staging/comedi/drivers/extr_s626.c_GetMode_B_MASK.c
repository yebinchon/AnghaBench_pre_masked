
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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct comedi_device*,int ) ;
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
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;

__attribute__((used)) static uint16_t FUNC_1(struct comedi_device *VAR_32, struct enc_private *VAR_33)
{
 register uint16_t VAR_34;
 register uint16_t VAR_35;
 register uint16_t VAR_36;


 VAR_34 = FUNC_0(VAR_32, VAR_33->MyCRA);
 VAR_35 = FUNC_0(VAR_32, VAR_33->MyCRB);



 VAR_36 = (((VAR_35 << (VAR_21 - VAR_9)) & VAR_29)
   |((VAR_35 << (VAR_22 - VAR_10)) & VAR_30)
   |((VAR_35 << (VAR_23 - VAR_11)) & VAR_31)
   |((VAR_35 << (VAR_19 - VAR_8)) & VAR_27)
   |((VAR_35 >> (VAR_5 - VAR_15)) & VAR_24)
   |((VAR_34 >> ((VAR_4 + 1) - VAR_20)) & VAR_28));


 if ((VAR_35 & VAR_12) == (VAR_13 << VAR_6))
  VAR_36 |= ((VAR_1 << VAR_18)
     |(VAR_14 << VAR_16)
     |((VAR_34 >> (VAR_3 - VAR_17)) & VAR_26));

 else if (VAR_34 & (2 << VAR_3))
  VAR_36 |= ((VAR_2 << VAR_18)
     |(VAR_14 << VAR_16)
     |((VAR_34 >> (VAR_3 - VAR_17)) & VAR_26));

 else
  VAR_36 |= ((VAR_0 << VAR_18)
     |((VAR_35 >> (VAR_6 - VAR_16)) & VAR_25)
     |((VAR_35 << (VAR_17 - VAR_7)) & VAR_26));


 return VAR_36;
}
